// Copyright (c) 2022 Al_Fe


#include "Character3DControllerComponent.h"

#include "EngineUtils.h"
#include "VNMModule.h"
#include "GameFramework/HUD.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameInstance.h"

UCharacter3DControllerComponent::UCharacter3DControllerComponent()
{
}

void UCharacter3DControllerComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UCharacter3DControllerComponent::SetupControllerComponent()
{
	Super::SetupControllerComponent();

	DialogSceneControllerComponent = GetOwner()->FindComponentByClass<UDialogSceneControllerComponent>();

	DialogSceneControllerComponent->OnDialogSceneChanged.AddUniqueDynamic(this, &UCharacter3DControllerComponent::OnDialogSceneChanged);

	auto* PlayerController = Cast<APlayerController>(GetOwner());

	if (!IsValid(PlayerController))
	{
		bHasFinishedSetup = true;
		return;
	}
	
	DialogControllerComponent = PlayerController->GetHUD()->FindComponentByClass<UDialogControllerComponent>();

	DialogControllerComponent->OnDialogStarted.AddUniqueDynamic(this, &UCharacter3DControllerComponent::OnDialogStarted);
	DialogControllerComponent->OnDialogEnded.AddUniqueDynamic(this, &UCharacter3DControllerComponent::OnDialogEnded);
	
	if (!UGameplayStatics::GetGameInstance(GetWorld()))
	{
		bHasFinishedSetup = true;
		return;
	}
	
	SaveGameSubsystem = UGameplayStatics::GetGameInstance(GetWorld())->GetSubsystem<UGameSaveSubsystem>();

	if (!SaveGameSubsystem || !SaveGameSubsystem->IsCurrentlyLoading())
	{
		bHasFinishedSetup = true;
		return;
	}

	auto* SaveGame = SaveGameSubsystem->GetSaveGame();

	if (!SaveGame)
	{
		bHasFinishedSetup = true;
		return;
	}

	ApplySnapshot(SaveGame->Snapshot);
	
	bHasFinishedSetup = true;
}

bool UCharacter3DControllerComponent::ApplySnapshot(const FGameSnapshot& Snapshot)
{
	LatentExecutor = FLatentExecutor();
	bRestoreCharactersAfterLoad = true;
	SnapshotToApply = Snapshot;

	TArray<FName> CharacterIds;
	CharactersAtLocation.GetKeys(CharacterIds);

	for (const auto& CharacterId : CharacterIds)
	{
		FHideCharacter3DData HideCharacter3DData;
		HideCharacter3DData.CharacterId = CharacterId;
		HideCharacter3D(HideCharacter3DData, FLatentActionInfo());
	}
	
	return true;
}

TArray<FCharacter3DDisplayedData> UCharacter3DControllerComponent::GetDialogData()
{	
	TArray<FCharacter3DDisplayedData> SaveInfos;

	for (const auto& DisplayedCharacter: CharactersAtLocation)
	{
		auto* SpawnLocation = CharacterSpawnLocations[DisplayedCharacter.Value];
		FCharacter3DDisplayedData SaveInfo(SpawnLocation->GetCharacterId(), SpawnLocation->GetEmotionId(), DisplayedCharacter.Value);
		SaveInfos.Add(SaveInfo);
	}

	return SaveInfos;
}

void UCharacter3DControllerComponent::ShowCharacter3D(const FShowCharacter3DData& ShowCharacterData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	if (ShowCharacterData.EmotionId.IsNone() || ShowCharacterData.CharacterId.IsNone() || ShowCharacterData.LocationName.IsNone())
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacter3DControllerComponent::ShowCharacter3D: Character Id or Emotion Id or Location Name invalid!"));
		LatentExecutor.ProcessEvent();
		return;
	}

	if (!CharacterSpawnLocations.Contains(ShowCharacterData.LocationName))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacter3DControllerComponent::ShowCharacter3D: Character Spawn location not found!"));
		LatentExecutor.ProcessEvent();
		return;
	}

	AVNMCharacterSpawnLocation* SpawnLocation = CharacterSpawnLocations[ShowCharacterData.LocationName];
	SpawnLocation->SetCharacterByCharacterIdAndEmotionId(ShowCharacterData.CharacterId, ShowCharacterData.EmotionId);
	CharactersAtLocation.Add(ShowCharacterData.CharacterId, ShowCharacterData.LocationName);

	LatentExecutor.ProcessEvent();
}

void UCharacter3DControllerComponent::HideCharacter3D(const FHideCharacter3DData& HideCharacterData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	if (HideCharacterData.CharacterId.IsNone())
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacter3DControllerComponent::HideCharacter3D: Character Id  invalid!"));
		LatentExecutor.ProcessEvent();
		return;
	}

	FName LocationName;
	CharactersAtLocation.RemoveAndCopyValue(HideCharacterData.CharacterId, LocationName);

	auto* Location = CharacterSpawnLocations.Find(LocationName);

	if (Location)
	{
		(*Location)->ClearCharacter();
	}

	LatentExecutor.ProcessEvent();
}

void UCharacter3DControllerComponent::OnDialogSceneChanged(const FName& DialogSceneId)
{
	CharacterSpawnLocations.Empty();
	
	if (DialogSceneId.IsNone())
	{
		return;
	}
	
	for (TActorIterator<AVNMCharacterSpawnLocation> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		CharacterSpawnLocations.Add(ActorItr->GetFName(), *ActorItr);
	}
	
	if (bRestoreCharactersAfterLoad)
	{
		bRestoreCharactersAfterLoad = false;

		if (!SnapshotToApply.IsValid())
		{
			return;
		}

		CharactersAtLocation.Empty();

		TArray<FCharacter3DDisplayedData> SaveInfos = SnapshotToApply.ActiveDialogData.Characters3DDisplayed;

		for (const auto& SaveInfo: SaveInfos)
		{
			FShowCharacter3DData ShowCharacterData;
			ShowCharacterData.CharacterId = SaveInfo.CharacterId;
			ShowCharacterData.EmotionId = SaveInfo.EmotionId;
			ShowCharacterData.LocationName = SaveInfo.SpawnLocation;
			ShowCharacter3D(ShowCharacterData, FLatentActionInfo());
		}
		
		SnapshotToApply = FGameSnapshot();
	}
}

void UCharacter3DControllerComponent::OnDialogStarted(UDialogObject* StartedDialogObject)
{
}

void UCharacter3DControllerComponent::OnDialogEnded(UDialogObject* EndedDialogObject)
{
	CharactersAtLocation.Empty();
	CharacterSpawnLocations.Empty();
}

void UCharacter3DControllerComponent::FLatentExecutor::Setup(const FLatentActionInfo& LatentInfo)
{
	TargetToReturnTo = LatentInfo.CallbackTarget;
	FunctionToCall = TargetToReturnTo->FindFunction(LatentInfo.ExecutionFunction);
	Linkage = LatentInfo.Linkage;
}

void UCharacter3DControllerComponent::FLatentExecutor::ProcessEvent()
{
	if (TargetToReturnTo && Linkage != INDEX_NONE)
	{
		TargetToReturnTo->ProcessEvent(FunctionToCall, &Linkage);
	}
}

