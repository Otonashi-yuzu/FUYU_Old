// Copyright (c) 2022 Al_Fe


#include "DialogImageControllerComponent.h"


#include "GameSaveSubsystem.h"
#include "VNMModule.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameInstance.h"


void UDialogImageControllerComponent::FLatentExecutor::Setup(const FLatentActionInfo& LatentInfo)
{
	TargetToReturnTo = LatentInfo.CallbackTarget;
	FunctionToCall = TargetToReturnTo->FindFunction(LatentInfo.ExecutionFunction);
	Linkage = LatentInfo.Linkage;
}

void UDialogImageControllerComponent::FLatentExecutor::ProcessEvent()
{
	if (TargetToReturnTo && Linkage != INDEX_NONE)
	{
		TargetToReturnTo->ProcessEvent(FunctionToCall, &Linkage);
	}
}

UDialogImageControllerComponent::UDialogImageControllerComponent()
{
}

// Called when the game starts
void UDialogImageControllerComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UDialogImageControllerComponent::SetupControllerComponent()
{
	Super::SetupControllerComponent();

	TArray<UUserWidget*> FoundDialogImageWidgets;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(this, FoundDialogImageWidgets, UBaseCgDisplayWidget::StaticClass(), false);

	if (FoundDialogImageWidgets.Num() > 0)
	{
		CgDisplayWidget = Cast<UBaseCgDisplayWidget>(FoundDialogImageWidgets[0]);
	}
	else
	{
		CgDisplayWidget = CreateWidget<UBaseCgDisplayWidget>(GetWorld(), CgDisplayWidgetClass);
		CgDisplayWidget->AddToPlayerScreen(50);
		HideCGInternal();
	}

	FoundDialogImageWidgets.Empty();
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(this, FoundDialogImageWidgets, UBaseSceneBackgroundDisplayWidget::StaticClass(), false);

	if (FoundDialogImageWidgets.Num() > 0)
	{
		SceneBackgroundDisplayWidget = Cast<UBaseSceneBackgroundDisplayWidget>(FoundDialogImageWidgets[0]);
	}
	else
	{
		SceneBackgroundDisplayWidget = CreateWidget<UBaseSceneBackgroundDisplayWidget>(GetWorld(), SceneBackgroundDisplayWidgetClass);
		SceneBackgroundDisplayWidget->AddToPlayerScreen(0);
		HideSceneBackgroundInternal();
	}

	CgDisplayWidget->OnTransitionComplete.AddUniqueDynamic(this, &UDialogImageControllerComponent::OnTransitionComplete);
	SceneBackgroundDisplayWidget->OnTransitionComplete.AddUniqueDynamic(this, &UDialogImageControllerComponent::OnTransitionComplete);
	
	DialogControllerComponent = Cast<UDialogControllerComponent>(GetOwner()->GetComponentByClass(UDialogControllerComponent::StaticClass()));

	DialogControllerComponent->OnDialogStarted.AddUniqueDynamic(this, &UDialogImageControllerComponent::OnDialogStarted);
	DialogControllerComponent->OnDialogEnded.AddUniqueDynamic(this, &UDialogImageControllerComponent::OnDialogEnded);

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

	if (!SaveGame)
	{
		bHasFinishedSetup = true;
		return;
	}

	ApplySnapshot(SaveGame->Snapshot);

	bHasFinishedSetup = true;
}

bool UDialogImageControllerComponent::ApplySnapshot(const FGameSnapshot& Snapshot)
{
	LatentExecutor = FLatentExecutor();
	if (Snapshot.ActiveDialogData.CgDisplayed.ImageId.IsNone())
	{
		FHideCgData HideCgData;
		HideCG(HideCgData, FLatentActionInfo());
	}
	else
	{
		FShowCgData ShowCgData;
		ShowCgData.CgId = Snapshot.ActiveDialogData.CgDisplayed.ImageId;
		ShowCG(ShowCgData, FLatentActionInfo());

		for (const auto& Layer: Snapshot.ActiveDialogData.CgDisplayed.Layers)
		{
			FAddLayerToCgData AddLayerToCgData;
			AddLayerToCgData.CgId = Snapshot.ActiveDialogData.CgDisplayed.ImageId;
			AddLayerToCgData.LayerId = Layer.Key;
			AddLayerToCgData.ImageId = Layer.Value;
			AddLayerToCg(AddLayerToCgData, FLatentActionInfo());
		}
	}

	if (Snapshot.ActiveDialogData.SceneBackgroundDisplayed.ImageId.IsNone())
	{
		FHideSceneBackgroundData HideSceneBackgroundData;
		HideSceneBackground(HideSceneBackgroundData, FLatentActionInfo());
	}
	else
	{
		FShowSceneBackgroundData ShowSceneBackgroundData;
		ShowSceneBackgroundData.SceneBackgroundId = Snapshot.ActiveDialogData.SceneBackgroundDisplayed.ImageId;
		ShowSceneBackground(ShowSceneBackgroundData, FLatentActionInfo());
	
		for (const auto& Layer: Snapshot.ActiveDialogData.SceneBackgroundDisplayed.Layers)
		{
			FAddLayerToSceneBackgroundData AddLayerToSceneBackgroundData;
			AddLayerToSceneBackgroundData.SceneBackgroundId = Snapshot.ActiveDialogData.SceneBackgroundDisplayed.ImageId;
			AddLayerToSceneBackgroundData.LayerId = Layer.Key;
			AddLayerToSceneBackgroundData.ImageId = Layer.Value;
			AddLayerToSceneBackground(AddLayerToSceneBackgroundData, FLatentActionInfo());
		}
	}

	return true;
}

FDialogImageData UDialogImageControllerComponent::CollectCgDialogData()
{
	return ActiveDialogActiveCg;
}

FDialogImageData UDialogImageControllerComponent::CollectSceneBackgroundDialogData()
{
	return ActiveDialogActiveSceneBackground;
}

void UDialogImageControllerComponent::ShowCG(const FShowCgData& ShowCgData, FLatentActionInfo LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	if (ShowCgData.CgId.IsNone())
	{
		if (LatentExecutor.TargetToReturnTo)
		{
			LatentExecutor.ProcessEvent();
		}
		return;
	}

	const bool bIsTransitioning = CgDisplayWidget->IsVisible() && ShowCgData.TransitionEvent != ETransitionEvent::No_Transition;

	CgDisplayWidget->SetCgById(ShowCgData.CgId, bIsTransitioning);
	
	auto* GameSaveSubsystem = UGameplayStatics::GetGameInstance(this)->GetSubsystem<UGameSaveSubsystem>();
	GameSaveSubsystem->GetPersistantSaveGame()->SeenCgIds.AddUnique(ShowCgData.CgId.ToString());
	
	ActiveDialogActiveCg.ImageId = CgDisplayWidget->GetCgId();
	ActiveDialogActiveCg.Layers = CgDisplayWidget->GetCgLayers();
	
	CgDisplayWidget->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	if (ShowCgData.TransitionEvent != ETransitionEvent::No_Transition)
	{
		if (bIsTransitioning)
		{
			CgDisplayWidget->PlayTransitionAnimation(ShowCgData.TransitionEvent, ShowCgData.AnimationPlaybackMultiplier, ShowCgData.CustomTransitionName, !ShowCgData.bDontWaitForTransitionToFinish);
		}
		else
		{
			CgDisplayWidget->PlayEntryAnimation(ShowCgData.TransitionEvent, ShowCgData.AnimationPlaybackMultiplier, ShowCgData.CustomTransitionName, !ShowCgData.bDontWaitForTransitionToFinish);
		}
	}
	else
	{
		CgDisplayWidget->SetCgColorToVisible();
		LatentExecutor.ProcessEvent();		
	}
}

void UDialogImageControllerComponent::AddLayerToCg(const FAddLayerToCgData& AddLayerToCgData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	if (AddLayerToCgData.CgId.IsNone())
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogImageControllerComponent::AddLayerToCg: Cg Id invalid!"));
		LatentExecutor.ProcessEvent();
		return;
	}
	
	if (CgDisplayWidget->GetCgId() == AddLayerToCgData.CgId)
	{
		CgDisplayWidget->SetCgLayerById(AddLayerToCgData.LayerId, AddLayerToCgData.ImageId);
	}
	else
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogImageControllerComponent::AddLayerToCg: Specified Cg Id is currently not displayed!"));
	}
	
	ActiveDialogActiveCg.Layers = CgDisplayWidget->GetCgLayers();
	
	LatentExecutor.ProcessEvent();
}

void UDialogImageControllerComponent::RemoveLayerFromCg(const FRemoveLayerFromCgData& RemoveLayerFromCgData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	if (RemoveLayerFromCgData.CgId.IsNone())
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogImageControllerComponent::RemoveLayerFromCg: Cg Id invalid!"));
		LatentExecutor.ProcessEvent();
		return;
	}
	
	if (CgDisplayWidget->GetCgId() == RemoveLayerFromCgData.CgId)
	{
		CgDisplayWidget->RemoveCgLayerById(RemoveLayerFromCgData.LayerId);
	}
	else
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogImageControllerComponent::RemoveLayerFromCg: Specified Cg Id is currently not displayed!"));
	}
	
	ActiveDialogActiveCg.Layers = CgDisplayWidget->GetCgLayers();
	
	LatentExecutor.ProcessEvent();
}

void UDialogImageControllerComponent::HideCG(const FHideCgData& HideCgData, FLatentActionInfo LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}

	ActiveDialogActiveCg.ImageId = TEXT("");
	ActiveDialogActiveCg.Layers.Empty();
	
	if (HideCgData.TransitionEvent == ETransitionEvent::No_Transition)
	{
		HideCGInternal();

		if (LatentExecutor.TargetToReturnTo)
		{
			LatentExecutor.ProcessEvent();
		}
	}
	else
	{
		bIsCurrentlyHidingCG = true;
		CgDisplayWidget->PlayExitAnimation(HideCgData.TransitionEvent, HideCgData.AnimationPlaybackMultiplier, HideCgData.CustomTransitionName, !HideCgData.bDontWaitForTransitionToFinish);
	}
}

void UDialogImageControllerComponent::PlayCgAnimation(const FPlayCgAnimationData& PlayCgAnimationData, FLatentActionInfo LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}

	if (PlayCgAnimationData.bPlayBackwards)
	{
		CgDisplayWidget->PlayExitAnimation(
			PlayCgAnimationData.TransitionEvent,
			PlayCgAnimationData.AnimationPlaybackMultiplier,
			PlayCgAnimationData.CustomTransitionName,
			!PlayCgAnimationData.bDontWaitForTransitionToFinish);
	}
	else
	{
		CgDisplayWidget->PlayEntryAnimation(
			PlayCgAnimationData.TransitionEvent,
			PlayCgAnimationData.AnimationPlaybackMultiplier,
			PlayCgAnimationData.CustomTransitionName,
			!PlayCgAnimationData.bDontWaitForTransitionToFinish);
	}
}

void UDialogImageControllerComponent::ShowSceneBackground(const FShowSceneBackgroundData& ShowSceneBackgroundData, FLatentActionInfo LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	if (ShowSceneBackgroundData.SceneBackgroundId.IsNone())
	{
		LatentExecutor.ProcessEvent();
		return;
	}

	const bool bIsTransitioning = SceneBackgroundDisplayWidget->IsVisible() && ShowSceneBackgroundData.TransitionEvent != ETransitionEvent::No_Transition;

	SceneBackgroundDisplayWidget->SetSceneBackgroundById(ShowSceneBackgroundData.SceneBackgroundId, bIsTransitioning);

	ActiveDialogActiveSceneBackground.ImageId = SceneBackgroundDisplayWidget->GetSceneBackgroundId();
	ActiveDialogActiveSceneBackground.Layers = SceneBackgroundDisplayWidget->GetSceneBackgroundLayers();
	
	SceneBackgroundDisplayWidget->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	if (ShowSceneBackgroundData.TransitionEvent != ETransitionEvent::No_Transition)
	{
		if (bIsTransitioning)
		{
			SceneBackgroundDisplayWidget->PlayTransitionAnimation(ShowSceneBackgroundData.TransitionEvent, ShowSceneBackgroundData.AnimationPlaybackMultiplier, ShowSceneBackgroundData.CustomTransitionName, !ShowSceneBackgroundData.bDontWaitForTransitionToFinish);
		}
		else
		{
			SceneBackgroundDisplayWidget->PlayEntryAnimation(ShowSceneBackgroundData.TransitionEvent, ShowSceneBackgroundData.AnimationPlaybackMultiplier, ShowSceneBackgroundData.CustomTransitionName, !ShowSceneBackgroundData.bDontWaitForTransitionToFinish);
		}
	}
	else
	{
		SceneBackgroundDisplayWidget->SetSceneBackgroundColorToVisible();
		LatentExecutor.ProcessEvent();		
	}
}

void UDialogImageControllerComponent::AddLayerToSceneBackground(const FAddLayerToSceneBackgroundData& AddLayerToSceneBackgroundData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	if (AddLayerToSceneBackgroundData.SceneBackgroundId.IsNone())
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogImageControllerComponent::AddLayerToSceneBackground: Scene Background Id invalid!"));
		LatentExecutor.ProcessEvent();
		return;
	}
	
	if (SceneBackgroundDisplayWidget->GetSceneBackgroundId() == AddLayerToSceneBackgroundData.SceneBackgroundId)
	{
		SceneBackgroundDisplayWidget->SetSceneBackgroundLayerById(AddLayerToSceneBackgroundData.LayerId, AddLayerToSceneBackgroundData.ImageId);
	}
	else
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogImageControllerComponent::AddLayerToSceneBackground: Specified Scene Background Id is currently not displayed!"));
	}

	ActiveDialogActiveSceneBackground.Layers = SceneBackgroundDisplayWidget->GetSceneBackgroundLayers();
	
	LatentExecutor.ProcessEvent();
}

void UDialogImageControllerComponent::RemoveLayerFromSceneBackground(const FRemoveLayerFromSceneBackgroundData& RemoveLayerFromSceneBackgroundData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	if (RemoveLayerFromSceneBackgroundData.SceneBackgroundId.IsNone())
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogImageControllerComponent::RemoveLayerFromSceneBackground: Scene Background Id invalid!"));
		LatentExecutor.ProcessEvent();
		return;
	}
	
	if (SceneBackgroundDisplayWidget->GetSceneBackgroundId() == RemoveLayerFromSceneBackgroundData.SceneBackgroundId)
	{
		SceneBackgroundDisplayWidget->RemoveSceneBackgroundLayerById(RemoveLayerFromSceneBackgroundData.LayerId);
	}
	else
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogImageControllerComponent::RemoveLayerFromSceneBackground: Specified Scene Background Id is currently not displayed!"));
	}

	ActiveDialogActiveSceneBackground.Layers = SceneBackgroundDisplayWidget->GetSceneBackgroundLayers();
	
	LatentExecutor.ProcessEvent();
}

void UDialogImageControllerComponent::HideSceneBackground(const FHideSceneBackgroundData& HideSceneBackgroundData, FLatentActionInfo LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}

	ActiveDialogActiveSceneBackground.ImageId = TEXT("");
	ActiveDialogActiveSceneBackground.Layers.Empty();
	
	
	if (HideSceneBackgroundData.TransitionEvent == ETransitionEvent::No_Transition)
	{
		HideSceneBackgroundInternal();

		if (LatentExecutor.TargetToReturnTo)
		{
			LatentExecutor.ProcessEvent();
		}
	}
	else
	{
		bIsCurrentlyHidingSceneBackground = true;
		SceneBackgroundDisplayWidget->PlayExitAnimation(HideSceneBackgroundData.TransitionEvent, HideSceneBackgroundData.AnimationPlaybackMultiplier, HideSceneBackgroundData.CustomTransitionName, !HideSceneBackgroundData.bDontWaitForTransitionToFinish);
	}
}

void UDialogImageControllerComponent::PlaySceneBackgroundAnimation(const FPlaySceneBackgroundAnimationData& PlaySceneBackgroundAnimationData, FLatentActionInfo LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}

	if (PlaySceneBackgroundAnimationData.bPlayBackwards)
	{
		SceneBackgroundDisplayWidget->PlayExitAnimation(
			PlaySceneBackgroundAnimationData.TransitionEvent,
			PlaySceneBackgroundAnimationData.AnimationPlaybackMultiplier,
			PlaySceneBackgroundAnimationData.CustomTransitionName,
			!PlaySceneBackgroundAnimationData.bDontWaitForTransitionToFinish);
	}
	else
	{
		SceneBackgroundDisplayWidget->PlayEntryAnimation(
			PlaySceneBackgroundAnimationData.TransitionEvent,
			PlaySceneBackgroundAnimationData.AnimationPlaybackMultiplier,
			PlaySceneBackgroundAnimationData.CustomTransitionName,
			!PlaySceneBackgroundAnimationData.bDontWaitForTransitionToFinish);
	}
}

void UDialogImageControllerComponent::HideCGInternal()
{
	CgDisplayWidget->SetVisibility(ESlateVisibility::Collapsed);
	CgDisplayWidget->ClearCgId();
}

void UDialogImageControllerComponent::HideSceneBackgroundInternal()
{
	SceneBackgroundDisplayWidget->SetVisibility(ESlateVisibility::Collapsed);
	SceneBackgroundDisplayWidget->ClearSceneBackgroundId();
}

void UDialogImageControllerComponent::OnTransitionComplete()
{
	if (bIsCurrentlyHidingCG)
	{
		bIsCurrentlyHidingCG = false;
		HideCGInternal();
	}
	
	if (bIsCurrentlyHidingSceneBackground)
	{
		bIsCurrentlyHidingSceneBackground = false;
		HideSceneBackgroundInternal();
	}

	LatentExecutor.ProcessEvent();
}

void UDialogImageControllerComponent::OnDialogStarted(UDialogObject* StartedDialog)
{
	
}

void UDialogImageControllerComponent::OnDialogEnded(UDialogObject* EndedDialog)
{
	HideCGInternal();
	ActiveDialogActiveCg.ImageId = TEXT("");
	ActiveDialogActiveCg.Layers.Empty();
	
	HideSceneBackgroundInternal();
	ActiveDialogActiveSceneBackground.ImageId = TEXT("");
	ActiveDialogActiveSceneBackground.Layers.Empty();
}
