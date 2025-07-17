// Copyright (c) 2022 Al_Fe


#include "DialogSceneControllerComponent.h"

#include "DialogControllerComponent.h"
#include "EngineUtils.h"
#include "VNMSettings.h"
#include "GameFramework/HUD.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Engine/GameInstance.h"

void UDialogSceneControllerComponent::FLatentExecutor::Setup(const FLatentActionInfo& LatentInfo)
{
	TargetToReturnTo = LatentInfo.CallbackTarget;
	FunctionToCall = TargetToReturnTo->FindFunction(LatentInfo.ExecutionFunction);
	Linkage = LatentInfo.Linkage;
}

void UDialogSceneControllerComponent::FLatentExecutor::ProcessEvent()
{
	if (IsValid(TargetToReturnTo) && Linkage != INDEX_NONE)
	{
		TargetToReturnTo->ProcessEvent(FunctionToCall, &Linkage);
	}

	TargetToReturnTo = nullptr;
}

// Sets default values for this component's properties
UDialogSceneControllerComponent::UDialogSceneControllerComponent()
{
	bWantsInitializeComponent = true;
}

void UDialogSceneControllerComponent::InitializeComponent()
{
	Super::InitializeComponent();

	CameraClass = UVNMSettings::GetVNMSettings()->Settings.CameraClass;
}


// Called when the game starts
void UDialogSceneControllerComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UDialogSceneControllerComponent::SetupControllerComponent()
{
	Super::SetupControllerComponent();

	auto* PlayerController = Cast<APlayerController>(GetOwner());

	if (!IsValid(PlayerController))
	{
		bHasFinishedSetup = true;
		return;
	}
	
	DialogControllerComponent = PlayerController->GetHUD()->FindComponentByClass<UDialogControllerComponent>();

	DialogControllerComponent->OnDialogStarted.AddUniqueDynamic(this, &UDialogSceneControllerComponent::OnDialogStarted);
	DialogControllerComponent->OnDialogEnded.AddUniqueDynamic(this, &UDialogSceneControllerComponent::OnDialogEnded);
	
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

bool UDialogSceneControllerComponent::ApplySnapshot(const FGameSnapshot& Snapshot)
{
	LatentExecutor = FLatentExecutor();

	if (Snapshot.ActiveDialogData.CurrentDialogScene.DialogSceneId.IsNone())
	{
		FHideDialogSceneData HideDialogSceneData;
		HideDialogScene(HideDialogSceneData, FLatentActionInfo());
	}
	else
	{
		FShowDialogSceneData ShowDialogSceneData;
		ShowDialogSceneData.DialogSceneId = Snapshot.ActiveDialogData.CurrentDialogScene.DialogSceneId;
		ShowDialogSceneData.DialogCameraName = Snapshot.ActiveDialogData.CurrentDialogScene.ActiveCamera;
		ShowDialogScene(ShowDialogSceneData, FLatentActionInfo());
	}
	

	return true;
}

FDialogSceneData UDialogSceneControllerComponent::CollectDialogSceneData()
{
	return ActiveDialogScene;
}

void UDialogSceneControllerComponent::ShowDialogScene(const FShowDialogSceneData& ShowDialogSceneData, FLatentActionInfo LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	if (ShowDialogSceneData.DialogSceneId.IsNone())
	{
		LatentExecutor.ProcessEvent();
		return;
	}

	const FDialogSceneDefinition& DialogSceneDefinition = UVNMSettings::GetVNMSettings()->GetDialogSceneDefinitionById(ShowDialogSceneData.DialogSceneId);

	FLatentActionInfo LoadStreamLevelLatentInfo;
	LoadStreamLevelLatentInfo.Linkage = 0;
	LoadStreamLevelLatentInfo.UUID = FMath::RandRange(1000, 10000);
	LoadStreamLevelLatentInfo.CallbackTarget = this;
	LoadStreamLevelLatentInfo.ExecutionFunction = GET_FUNCTION_NAME_CHECKED(UDialogSceneControllerComponent, OnShowDialogSceneComplete);

	ActiveDialogScene.DialogSceneId = ShowDialogSceneData.DialogSceneId;

	CameraToSwitchToOnLoad = ShowDialogSceneData.DialogCameraName;
	CurrentDialogSceneId = ShowDialogSceneData.DialogSceneId;
	UGameplayStatics::CancelAsyncLoading();
	UGameplayStatics::LoadStreamLevelBySoftObjectPtr(GetWorld(), DialogSceneDefinition.DialogScene, true, false, LoadStreamLevelLatentInfo);
}

void UDialogSceneControllerComponent::HideDialogScene(const FHideDialogSceneData& HideDialogSceneData, FLatentActionInfo LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}

	if (CurrentDialogSceneId.IsNone())
	{
		LatentExecutor.ProcessEvent();
		return;
	}

	const FDialogSceneDefinition& DialogSceneDefinition = UVNMSettings::GetVNMSettings()->GetDialogSceneDefinitionById(CurrentDialogSceneId);
	
	FLatentActionInfo LoadStreamLevelLatentInfo;
	LoadStreamLevelLatentInfo.Linkage = 0;
	LoadStreamLevelLatentInfo.UUID = FMath::RandRange(1000, 10000);
	LoadStreamLevelLatentInfo.CallbackTarget = this;
	LoadStreamLevelLatentInfo.ExecutionFunction = GET_FUNCTION_NAME_CHECKED(UDialogSceneControllerComponent, OnHideDialogSceneComplete);

	UGameplayStatics::UnloadStreamLevelBySoftObjectPtr(GetWorld(), DialogSceneDefinition.DialogScene, LoadStreamLevelLatentInfo, false);
}

void UDialogSceneControllerComponent::SwitchToCamera(const FSwitchToCameraData& SwitchToCameraData, FLatentActionInfo LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	if (SwitchToCameraData.DialogSceneId.IsNone() || SwitchToCameraData.DialogCameraName.IsNone())
	{
		LatentExecutor.ProcessEvent();
		return;
	}

	auto* PlayerController = Cast<APlayerController>(GetOwner());

	if (!IsValid(PlayerController))
	{
		LatentExecutor.ProcessEvent();
		return;
	}

	if (!CameraActors.Contains(SwitchToCameraData.DialogCameraName))
	{
		LatentExecutor.ProcessEvent();
		return;
	}

	ActiveDialogScene.ActiveCamera = SwitchToCameraData.DialogCameraName;
	
	CurrentCameraName = SwitchToCameraData.DialogCameraName;

	PlayerController->SetViewTarget(CameraActors[SwitchToCameraData.DialogCameraName], SwitchToCameraData.TransitionParams);

	if (SwitchToCameraData.TransitionParams.BlendTime == 0 || SwitchToCameraData.bDontWaitForTransitionToFinish)
	{
		LatentExecutor.ProcessEvent();
	}
	else
	{
		GetWorld()->GetTimerManager().SetTimer(CameraBlendTimerHandle, this, &UDialogSceneControllerComponent::OnCameraTransitionComplete, SwitchToCameraData.TransitionParams.BlendTime);
	}
}

void UDialogSceneControllerComponent::OnShowDialogSceneComplete()
{
	CameraActors.Empty();
	
	for (TActorIterator<ACameraActor> ActorItr(GetWorld(), CameraClass); ActorItr; ++ActorItr)
	{
		CameraActors.Add(ActorItr->GetFName(), *ActorItr);
	}

	if (!CameraToSwitchToOnLoad.IsNone())
	{
		FSwitchToCameraData SwitchToCameraData;
		SwitchToCameraData.DialogSceneId = CurrentDialogSceneId;
		SwitchToCameraData.DialogCameraName = CameraToSwitchToOnLoad;
		CameraToSwitchToOnLoad = NAME_None;
		SwitchToCamera(SwitchToCameraData, FLatentActionInfo());
	}

	OnDialogSceneChanged.Broadcast(CurrentDialogSceneId);
	
	LatentExecutor.ProcessEvent();
}

void UDialogSceneControllerComponent::OnHideDialogSceneComplete()
{
	CameraActors.Empty();
	CurrentCameraName = NAME_None;
	CurrentDialogSceneId = NAME_None;
	OnDialogSceneChanged.Broadcast(NAME_None);
	LatentExecutor.ProcessEvent();
}

void UDialogSceneControllerComponent::OnCameraTransitionComplete()
{
	GetWorld()->GetTimerManager().ClearTimer(CameraBlendTimerHandle);
	LatentExecutor.ProcessEvent();
}

void UDialogSceneControllerComponent::OnDialogStarted(UDialogObject* DialogObject)
{
}

void UDialogSceneControllerComponent::OnDialogEnded(UDialogObject* DialogObject)
{
	HideDialogScene(FHideDialogSceneData(), FLatentActionInfo());
	
	CurrentCameraName = NAME_None;
	CurrentDialogSceneId = NAME_None;
	ActiveDialogScene = FDialogSceneData();
}


