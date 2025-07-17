// Copyright (c) 2022 Al_Fe


#include "CharacterControllerComponent.h"


#include "BaseCharacterDisplayWidget.h"
#include "GameSaveSubsystem.h"
#include "VNMModule.h"
#include "VNMSettings.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameInstance.h"

void UCharacterControllerComponent::FLatentExecutor::Setup(const FLatentActionInfo& LatentInfo)
{
	TargetToReturnTo = LatentInfo.CallbackTarget;
	FunctionToCall = TargetToReturnTo->FindFunction(LatentInfo.ExecutionFunction);
	Linkage = LatentInfo.Linkage;
}

void UCharacterControllerComponent::FLatentExecutor::ProcessEvent()
{
	if (TargetToReturnTo && Linkage != INDEX_NONE)
	{
		TargetToReturnTo->ProcessEvent(FunctionToCall, &Linkage);
	}
}


UCharacterControllerComponent::UCharacterControllerComponent()
{
}

void UCharacterControllerComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UCharacterControllerComponent::SetupControllerComponent()
{
	Super::SetupControllerComponent();
	
	CharacterDisplayWidgets.Empty();

	TArray<UUserWidget*> FoundCharacterDisplayWidgets;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(this, FoundCharacterDisplayWidgets, UBaseCharacterDisplayWidget::StaticClass(), false);

	for (auto* FoundCharacterDisplayWidget: FoundCharacterDisplayWidgets)
	{
		auto* CharacterDisplayWidget = Cast<UBaseCharacterDisplayWidget>(FoundCharacterDisplayWidget);

		CharacterDisplayWidgets.Emplace(CharacterDisplayWidget->GetCharacterId(), CharacterDisplayWidget);
		CharacterDisplayWidget->OnTransitionComplete.AddUniqueDynamic(this, &UCharacterControllerComponent::OnTransitionComplete);
		CharacterDisplayWidget->OnMidTransitionReached.AddUniqueDynamic(this, &UCharacterControllerComponent::OnMidTransitionReached);
	}

	DialogControllerComponent = Cast<UDialogControllerComponent>(GetOwner()->GetComponentByClass(UDialogControllerComponent::StaticClass()));

	DialogControllerComponent->OnDialogStarted.AddUniqueDynamic(this, &UCharacterControllerComponent::OnDialogStarted);
	DialogControllerComponent->OnDialogEnded.AddUniqueDynamic(this, &UCharacterControllerComponent::OnDialogEnded);

	if (!UGameplayStatics::GetGameInstance(GetWorld()))
	{
		bHasFinishedSetup = true;
		return;	
	}
	
	auto* Subsystem = UGameplayStatics::GetGameInstance(GetWorld())->GetSubsystem<UGameSaveSubsystem>();

	if (!Subsystem || !Subsystem->IsCurrentlyLoading())
	{
		bHasFinishedSetup = true;
		return;
	}

	auto* SaveGame = Subsystem->GetSaveGame();

	ApplySnapshot(SaveGame->Snapshot);
	
	bHasFinishedSetup = true;
}

bool UCharacterControllerComponent::ApplySnapshot(const FGameSnapshot& Snapshot)
{
	LatentExecutor = FLatentExecutor();
	
	TArray<FName> OldCharacterIds;
	CharacterDisplayWidgets.GetKeys(OldCharacterIds);

	ClearAllCharactersAndRemoveFromView();
	
	RenamedCharacters = Snapshot.RenamedCharacters;
	
	TArray<FCharacterDisplayedData> SaveInfos = Snapshot.ActiveDialogData.CharactersDisplayed;

	TArray<FName> NewCharacterIds;

	for (const auto& SaveInfo: SaveInfos)
	{
		NewCharacterIds.Add(SaveInfo.CharacterId);
		
		FShowCharacterData ShowCharacterData;
		ShowCharacterData.CharacterId = SaveInfo.CharacterId;		
		ShowCharacterData.EmotionId = SaveInfo.EmotionId;
		ShowCharacterData.CharacterPositioning = SaveInfo.CharacterPositioning;
		ShowCharacterData.CustomCharacterPosition = SaveInfo.CustomCharacterPosition;
		ShowCharacterData.ZOrderIndex = SaveInfo.ZOrderIndex;
		ShowCharacterData.CharacterFlipState = SaveInfo.CharacterFlipState;
		ShowCharacter(ShowCharacterData, FLatentActionInfo());

		for (const auto& CharacterLayer: SaveInfo.Layers)
		{
			FAddLayerToCharacterData AddLayerToCharacterData;
			AddLayerToCharacterData.CharacterId = SaveInfo.CharacterId;
			AddLayerToCharacterData.LayerId = CharacterLayer.Key;
			AddLayerToCharacterData.ImageId = CharacterLayer.Value;
			AddLayerToCharacter(AddLayerToCharacterData, FLatentActionInfo());
		}
	}
	
	for (const auto& OldCharacterId : OldCharacterIds)
	{
		if (!NewCharacterIds.Contains(OldCharacterId))
		{
			FHideCharacterData HideCharacterData;
			HideCharacterData.CharacterId = OldCharacterId;
			HideCharacter(HideCharacterData, FLatentActionInfo());
		}
	}

	return true;
}

TArray<FCharacterDisplayedData> UCharacterControllerComponent::GetDialogData()
{	
	TArray<FCharacterDisplayedData> SaveInfos;

	for (const auto& DisplayedCharacter: CharacterDisplayWidgets)
	{
		FCharacterDisplayedData SaveInfo(
			DisplayedCharacter.Key,
			DisplayedCharacter.Value->GetEmotionId(),
			DisplayedCharacter.Value->GetCharacterPositioning(),
			DisplayedCharacter.Value->GetCustomCharacterPosition(),
			DisplayedCharacter.Value->GetCharacterFlipState(),
			DisplayedCharacter.Value->GetCharacterLayers(),
			DisplayedCharacter.Value->GetZOrderIndex());
		SaveInfos.Add(SaveInfo);
	}

	return SaveInfos;
}

TMap<FName, FString> UCharacterControllerComponent::GetRenamedCharacters() const
{
	return RenamedCharacters;
}

void UCharacterControllerComponent::OnDialogStarted(UDialogObject* StartedDialog)
{
}

void UCharacterControllerComponent::OnDialogEnded(UDialogObject* EndedDialog)
{
	for (const auto& CharacterDisplayWidgetPair: CharacterDisplayWidgets)
	{
		CharacterDisplayWidgetPair.Value->HideCharacter();
		CharacterDisplayWidgetPair.Value->RemoveFromParent();
	}

	CharacterDisplayWidgets.Empty();
}

void UCharacterControllerComponent::ShowCharacter(const FShowCharacterData& ShowCharacterData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	if (ShowCharacterData.EmotionId.IsNone() || ShowCharacterData.CharacterId.IsNone())
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterControllerComponent::ShowCharacter: Character Id or Emotion Id invalid!"));
		LatentExecutor.ProcessEvent();
		return;
	}

	UBaseCharacterDisplayWidget* CharacterDisplayWidget = nullptr;

	if (CharacterDisplayWidgets.Contains(ShowCharacterData.CharacterId))
	{
		NextCharacterId = ShowCharacterData.CharacterId;
		NextEmotionId = ShowCharacterData.EmotionId;
		
		CharacterDisplayWidget = CharacterDisplayWidgets[ShowCharacterData.CharacterId];

		if (ShowCharacterData.CharacterPositioning != ECharacterPositioning::CUSTOM)
		{
			CharacterDisplayWidget->SetCharacterPosition(ShowCharacterData.CharacterPositioning, false);
		}
		else
		{
			CharacterDisplayWidget->SetCustomCharacterPosition(ShowCharacterData.CustomCharacterPosition, false);
		}

		CharacterDisplayWidget->SetCharacterFlipState(ShowCharacterData.CharacterFlipState);
		
		CharacterDisplayWidget->PlayTransitionAnimation(ShowCharacterData.TransitionEvent, ShowCharacterData.AnimationPlaybackMultiplier, ShowCharacterData.CustomTransitionName, !ShowCharacterData.bDontWaitForTransitionToFinish);
	}
	else
	{
		CharacterDisplayWidget = CreateWidget<UBaseCharacterDisplayWidget>(GetWorld(), CharacterDisplayWidgetClass);

		if (CharacterDisplayWidget)
		{
			CharacterDisplayWidget->OnTransitionComplete.AddUniqueDynamic(this, &UCharacterControllerComponent::OnTransitionComplete);
			CharacterDisplayWidget->OnMidTransitionReached.AddUniqueDynamic(this, &UCharacterControllerComponent::OnMidTransitionReached);
			if (ShowCharacterData.CharacterPositioning != ECharacterPositioning::CUSTOM)
			{
				CharacterDisplayWidget->SetCharacterPosition(ShowCharacterData.CharacterPositioning, false);
			}
			else
			{
				CharacterDisplayWidget->SetCustomCharacterPosition(ShowCharacterData.CustomCharacterPosition, false);
			}
			
			if (ShowCharacterData.Layers.Num() > 0)
			{
				CharacterDisplayWidget->SetCharacterImageByCharacterIdAndEmotionIdAndLayers(ShowCharacterData.CharacterId, ShowCharacterData.EmotionId, ShowCharacterData.Layers);
			}
			else
			{
				CharacterDisplayWidget->SetCharacterImageByCharacterIdAndEmotionId(ShowCharacterData.CharacterId, ShowCharacterData.EmotionId);
			}

			CharacterDisplayWidget->SetCharacterFlipState(ShowCharacterData.CharacterFlipState);
			
			CharacterDisplayWidget->AddToPlayerScreen(10 + ((ShowCharacterData.ZOrderIndex == 0) ? 0 : ShowCharacterData.ZOrderIndex));
			CharacterDisplayWidgets.Emplace(ShowCharacterData.CharacterId, CharacterDisplayWidget);
			CharacterDisplayWidget->PlayEntryAnimation(ShowCharacterData.TransitionEvent, ShowCharacterData.AnimationPlaybackMultiplier, ShowCharacterData.CustomTransitionName, !ShowCharacterData.bDontWaitForTransitionToFinish);
		}
		else
		{
			UE_LOG(LogVNM, Error, TEXT("UCharacterControllerComponent::ShowCharacter: Character Display Widget couldn't be created!"));
			LatentExecutor.ProcessEvent();
			return;
		}
	}
	
	CharacterDisplayWidget->ShowCharacter();
}

void UCharacterControllerComponent::AddLayerToCharacter(const FAddLayerToCharacterData& AddLayerToCharacterData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	if (AddLayerToCharacterData.CharacterId.IsNone())
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterControllerComponent::AddLayerToCharacter: Character Id invalid!"));
		LatentExecutor.ProcessEvent();
		return;
	}
	
	if (CharacterDisplayWidgets.Contains(AddLayerToCharacterData.CharacterId))
	{		
		UBaseCharacterDisplayWidget* CharacterDisplayWidget = CharacterDisplayWidgets[AddLayerToCharacterData.CharacterId];

		CharacterDisplayWidget->SetCharacterLayerById(AddLayerToCharacterData.LayerId, AddLayerToCharacterData.ImageId);
	}
	else
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterControllerComponent::AddLayerToCharacter: Character Display Widget doesn't exist!"));
	}
	LatentExecutor.ProcessEvent();
}

void UCharacterControllerComponent::MoveCharacter(const FMoveCharacterData& MoveCharacterData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	if (MoveCharacterData.CharacterId.IsNone())
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterControllerComponent::MoveCharacter: Character Id invalid!"));
		LatentExecutor.ProcessEvent();
		return;
	}

	if (CharacterDisplayWidgets.Contains(MoveCharacterData.CharacterId))
	{		
		UBaseCharacterDisplayWidget* CharacterDisplayWidget = CharacterDisplayWidgets[MoveCharacterData.CharacterId];

		if (MoveCharacterData.CharacterPositioning != ECharacterPositioning::CUSTOM)
		{
			CharacterDisplayWidget->SetCharacterPosition(MoveCharacterData.CharacterPositioning, MoveCharacterData.bMoveWithAnimation, LatentInfo.UUID);
		}
		else
		{
			CharacterDisplayWidget->SetCustomCharacterPosition(MoveCharacterData.CustomCharacterPosition, MoveCharacterData.bMoveWithAnimation, LatentInfo.UUID);
		}
	}
	else
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterControllerComponent::ShowCharacter: Character Display Widget doesn't exist!"));
	}

	if (!MoveCharacterData.bMoveWithAnimation)
	{
		LatentExecutor.ProcessEvent();
	}
}

void UCharacterControllerComponent::RemoveLayerFromCharacter(const FRemoveLayerFromCharacterData& RemoveLayerFromCharacterData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	if (RemoveLayerFromCharacterData.CharacterId.IsNone())
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterControllerComponent::RemoveLayerFromCharacter: Character Id invalid!"));
		LatentExecutor.ProcessEvent();
		return;
	}
	
	if (CharacterDisplayWidgets.Contains(RemoveLayerFromCharacterData.CharacterId))
	{		
		UBaseCharacterDisplayWidget* CharacterDisplayWidget = CharacterDisplayWidgets[RemoveLayerFromCharacterData.CharacterId];

		CharacterDisplayWidget->RemoveCharacterLayerById(RemoveLayerFromCharacterData.LayerId);
	}
	else
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterControllerComponent::RemoveLayerFromCharacter: Character Display Widget doesn't exist!"));
	}
	LatentExecutor.ProcessEvent();
}

void UCharacterControllerComponent::HideCharacter(const FHideCharacterData& HideCharacterData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	bIsCurrentlyHiding = true;
	CharacterIdToHide = HideCharacterData.CharacterId;
	
	UBaseCharacterDisplayWidget* CharacterDisplayWidget = nullptr;
	if (HideCharacterData.CharacterId.IsNone())
	{
		TArray<FName> VisibleCharacterIds;
		CharacterDisplayWidgets.GetKeys(VisibleCharacterIds);
		
		CharacterDisplayWidget = CharacterDisplayWidgets[VisibleCharacterIds[VisibleCharacterIds.Num()-1]];
	}
	else if (CharacterDisplayWidgets.Contains(HideCharacterData.CharacterId))
	{
		CharacterDisplayWidget = CharacterDisplayWidgets[HideCharacterData.CharacterId];
	}
	else
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterControllerComponent::HideCharacter: Character with Character Id %s is not displayed!"), *HideCharacterData.CharacterId.ToString());
		bIsCurrentlyHiding = false;
		CharacterIdToHide = "";
		LatentExecutor.ProcessEvent();
		return;
	}
	
	CharacterDisplayWidget->PlayExitAnimation(HideCharacterData.TransitionEvent, HideCharacterData.AnimationPlaybackMultiplier, HideCharacterData.CustomTransitionName, !HideCharacterData.bDontWaitForTransitionToFinish);
}

void UCharacterControllerComponent::PlayCharacterAnimation(const FPlayCharacterAnimationData& PlayCharacterAnimationData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	
	UBaseCharacterDisplayWidget* CharacterDisplayWidget = nullptr;
	if (PlayCharacterAnimationData.CharacterId.IsNone())
	{
		TArray<FName> VisibleCharacterIds;
		CharacterDisplayWidgets.GetKeys(VisibleCharacterIds);
		
		CharacterDisplayWidget = CharacterDisplayWidgets[VisibleCharacterIds[VisibleCharacterIds.Num()-1]];
	}
	else if (CharacterDisplayWidgets.Contains(PlayCharacterAnimationData.CharacterId))
	{
		CharacterDisplayWidget = CharacterDisplayWidgets[PlayCharacterAnimationData.CharacterId];
	}
	else
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterControllerComponent::PlayCharacterAnimation: Character with Character Id %s is not displayed!"), *PlayCharacterAnimationData.CharacterId.ToString());
		LatentExecutor.ProcessEvent();
		return;
	}

	if (PlayCharacterAnimationData.bPlayBackwards)
	{
		CharacterDisplayWidget->PlayExitAnimation(
			PlayCharacterAnimationData.TransitionEvent,
			PlayCharacterAnimationData.AnimationPlaybackMultiplier,
			PlayCharacterAnimationData.CustomTransitionName,
			!PlayCharacterAnimationData.bDontWaitForTransitionToFinish);
	}
	else
	{
		CharacterDisplayWidget->PlayEntryAnimation(
			PlayCharacterAnimationData.TransitionEvent,
			PlayCharacterAnimationData.AnimationPlaybackMultiplier,
			PlayCharacterAnimationData.CustomTransitionName,
			!PlayCharacterAnimationData.bDontWaitForTransitionToFinish);
	}
}

void UCharacterControllerComponent::AddRenamedCharacter(const FName& CharacterId, const FString& NewName)
{
	RenamedCharacters.Add(CharacterId, NewName);
}

FText UCharacterControllerComponent::GetCharacterNameById(const FName& CharacterId)
{
	if (FString* NewName = RenamedCharacters.Find(CharacterId))
	{
		return FText::FromString(*NewName);
	}
	
	auto* Settings = UVNMSettings::GetVNMSettings();

	if (!Settings)
	{
		return FText::GetEmpty();
	}

	auto CharacterDefinition = Settings->GetCharacterDefinitionById(CharacterId);

	return CharacterDefinition.CharacterDisplayName;
}

FText UCharacterControllerComponent::GetCharacterNameByDefinition(const FCharacterDefinition& CharacterDefinition)
{
	if (FString* NewName = RenamedCharacters.Find(CharacterDefinition.CharacterId))
	{
		return FText::FromString(*NewName);
	}

	return CharacterDefinition.CharacterDisplayName;
}

void UCharacterControllerComponent::ClearAllCharactersAndRemoveFromView()
{
	for (const auto& CharacterDisplayWidgetPair: CharacterDisplayWidgets)
	{
		CharacterDisplayWidgetPair.Value->HideCharacter();
		CharacterDisplayWidgetPair.Value->RemoveFromParent();
	}

	CharacterDisplayWidgets.Empty();
}

void UCharacterControllerComponent::HideCharacterInternal(const FName& CharacterId)
{
	UBaseCharacterDisplayWidget* CharacterDisplayWidget = nullptr;
	if (CharacterId.IsNone())
	{
		TArray<FName> VisibleCharacterIds;
		CharacterDisplayWidgets.GetKeys(VisibleCharacterIds);
		
		CharacterDisplayWidget = CharacterDisplayWidgets[VisibleCharacterIds[VisibleCharacterIds.Num()-1]];
		CharacterDisplayWidgets.Remove(VisibleCharacterIds[VisibleCharacterIds.Num()-1]);

	}
	else if (CharacterDisplayWidgets.Contains(CharacterId))
	{
		CharacterDisplayWidget = CharacterDisplayWidgets[CharacterId];
		CharacterDisplayWidgets.Remove(CharacterId);
	}
	else
	{
		return;
	}
	
	CharacterDisplayWidget->HideCharacter();
	CharacterDisplayWidget->RemoveFromParent();
}


void UCharacterControllerComponent::OnTransitionComplete()
{
	if (bIsCurrentlyHiding)
	{
		bIsCurrentlyHiding = false;
		HideCharacterInternal(CharacterIdToHide);
	}
	
	LatentExecutor.ProcessEvent();
}

void UCharacterControllerComponent::OnMidTransitionReached()
{
	auto* CharacterDisplayWidget = CharacterDisplayWidgets[NextCharacterId];
	CharacterDisplayWidget->SetCharacterImageByCharacterIdAndEmotionId(NextCharacterId, NextEmotionId);
	NextCharacterId = "";
	NextEmotionId = "";
}

