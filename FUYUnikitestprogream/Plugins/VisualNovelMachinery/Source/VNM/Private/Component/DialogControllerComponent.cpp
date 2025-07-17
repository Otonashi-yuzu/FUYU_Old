// Copyright (c) 2022 Al_Fe


#include "DialogControllerComponent.h"



#include "BaseCharacterDisplayWidget.h"
#include "BaseChoiceWidget.h"
#include "BaseDialogBoxWidget.h"
#include "Character3DControllerComponent.h"
#include "DialogImageControllerComponent.h"
#include "CharacterControllerComponent.h"
#include "DialogRollbackControllerComponent.h"
#include "MemoryControllerComponent.h"
#include "GameSaveSubsystem.h"
#include "JsonObjectConverter.h"
#include "Policies/CondensedJsonPrintPolicy.h"
#include "VNMModule.h"
#include "VNMSettings.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "GameFramework/HUD.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "VNMChoiceActor.h"
#include "EngineUtils.h"
#include "VNMGeneralUtils.h"
#include "Engine/GameInstance.h"
#include "BaseVNMActivatableWidget.h"

typedef TJsonWriterFactory< TCHAR, TCondensedJsonPrintPolicy<TCHAR> > FCondensedJsonStringWriterFactory;
typedef TJsonWriter< TCHAR, TCondensedJsonPrintPolicy<TCHAR> > FCondensedJsonStringWriter;

void FDialogLatentExecutor::Setup(const FLatentActionInfo& LatentInfo)
{
	TargetToReturnTo = LatentInfo.CallbackTarget;
	FunctionToCall = TargetToReturnTo->FindFunction(LatentInfo.ExecutionFunction);
	Linkage = LatentInfo.Linkage;
}

void FDialogLatentExecutor::Setup(const FLatentActionInfo& LatentInfo, FName* InSelectedChoice)
{
	SelectedChoice = InSelectedChoice;
	Setup(LatentInfo);
}

void FDialogLatentExecutor::Setup(const FLatentActionInfo& LatentInfo, FString* InPlayerInput)
{
	PlayerInput = InPlayerInput;
	Setup(LatentInfo);
}

void FDialogLatentExecutor::ProcessEvent()
{
	if (TargetToReturnTo && Linkage != INDEX_NONE)
	{
		TargetToReturnTo->ProcessEvent(FunctionToCall, &Linkage);
	}
}

UDialogControllerComponent::UDialogControllerComponent()
{
}

void UDialogControllerComponent::BeginPlay()
{
	Super::BeginPlay();
	
	GameSaveSubsystem = UGameplayStatics::GetGameInstance(this)->GetSubsystem<UGameSaveSubsystem>();

	GameSaveSubsystem->StartAutoSaveTimer();

	if (UVNMSettings::GetVNMSettings()->Settings.bAutostartDialog)
	{
		TryStartDialog();
	}
}

void UDialogControllerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	GameSaveSubsystem->StopAutoSaveTimer();
	
	Super::EndPlay(EndPlayReason);
}

void UDialogControllerComponent::SetupControllerComponent()
{
	Super::SetupControllerComponent();

	TArray<UUserWidget*> FoundDialogBoxWidgets;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(this, FoundDialogBoxWidgets, UBaseDialogBoxWidget::StaticClass(), false);

	if (FoundDialogBoxWidgets.Num() > 0)
	{
		DialogBoxWidget = Cast<UBaseDialogBoxWidget>(FoundDialogBoxWidgets[0]);
	}
	else
	{
		DialogBoxWidget = CreateWidget<UBaseDialogBoxWidget>(GetWorld(), DialogBoxWidgetClass);
		DialogBoxWidget->AddToPlayerScreen(51);
		DialogBoxWidget->SetVisibility(ESlateVisibility::Collapsed);
		DialogBoxWidget->OnTransitionComplete.AddUniqueDynamic(this, &UDialogControllerComponent::OnDialogBoxTransitionComplete);
		DialogBoxWidget->OnDialogTextBoxTextCommittedEvent.AddUniqueDynamic(this, &UDialogControllerComponent::OnDialogInputCommitted);
		DialogBoxWidget->OnDialogTextBoxTypeWritingEnd.AddUniqueDynamic(this, &UDialogControllerComponent::OnDialogTextBoxTypeWritingEnd);
		DialogBoxWidget->SetCharacterNameById(TEXT(""));
		DialogBoxWidget->SetDialogText(FText::FromString(""), true, 1.f);
	}

	TArray<UUserWidget*> FoundChoiceWidgets;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(this, FoundDialogBoxWidgets, UBaseChoiceWidget::StaticClass(), false);

	if (FoundDialogBoxWidgets.Num() > 0)
	{
		ChoiceWidget = Cast<UBaseChoiceWidget>(FoundDialogBoxWidgets[0]);
	}
	else
	{
		ChoiceWidget = CreateWidget<UBaseChoiceWidget>(GetWorld(), ChoiceWidgetClass);
		ChoiceWidget->AddToPlayerScreen(51);
	}

	bHasFinishedSetup = true;
}

bool  UDialogControllerComponent::ApplySnapshot(const FGameSnapshot& Snapshot)
{
	UVNMSettings* Settings = UVNMSettings::GetVNMSettings();

	FDialogDefinition FoundDialogObjectDefinition = Settings->GetDialogDefinitionById(Snapshot.ActiveDialogData.DialogObjectToContinueIn);

	if (!FoundDialogObjectDefinition.IsValid())
	{
		return false;
	}

	LatentExecutor = FDialogLatentExecutor();
	
	auto* DialogObject = NewObject<UDialogObject>(this, FoundDialogObjectDefinition.DialogueObjectClass);
	DialogObject->SetDialogId(FoundDialogObjectDefinition.DialogueId);
		
	bDialogWindowInAutomatic = Snapshot.ActiveDialogData.bIsDialogBoxVisibilityInAutoMode;
		
	if (Snapshot.ActiveDialogData.bIsDialogBoxVisible)
	{
		const ETransitionEvent TransitionEvent = DialogVisibilityTransitionEvent;
		FDialogWindowData DialogWindowData;
		DialogWindowData.bSetToAutomatic = bDialogWindowInAutomatic;
		DialogWindowData.TransitionEvent = ETransitionEvent::No_Transition;
		ShowDialogWindow(DialogWindowData, FLatentActionInfo());
		DialogVisibilityTransitionEvent = TransitionEvent;
	}
	else
	{
		const ETransitionEvent TransitionEvent = DialogVisibilityTransitionEvent;
		FDialogWindowData DialogWindowData;
		DialogWindowData.bSetToAutomatic = bDialogWindowInAutomatic;
		DialogWindowData.TransitionEvent = ETransitionEvent::No_Transition;
		HideDialogWindow(DialogWindowData, FLatentActionInfo());
		DialogVisibilityTransitionEvent = TransitionEvent;
	}

	ChoiceWidget->ClearChoices();
	if (ImageChoiceWidget)
	{
		ImageChoiceWidget->RemoveFromParent();
		ImageChoiceWidget = nullptr;
	}

	DialogBoxWidget->SetDialogText(Snapshot.ActiveDialogData.LastDialogTextDisplayedAtChoice, true, 1.f);
	DialogBoxWidget->SetCharacterNameById(Snapshot.ActiveDialogData.LastTalkingCharacterIdAtChoice);

	LoadAndApplyLocalVariablesJsonToDialogObject(DialogObject, Snapshot.ActiveDialogData.LocalVariablesValuesJson);

	StartDialogAtNode(DialogObject, Snapshot.ActiveDialogData.NodeToContinueGUID);

	return true;
}

void UDialogControllerComponent::DisplayDialog(const FDisplayDialogTextData& DisplayDialogTextData, FLatentActionInfo LatentInfo)
{
	LatentExecutor.Setup(LatentInfo);

	ActiveDialogNodeGUID = DisplayDialogTextData.NodeGUID;
	
	if (bDialogWindowInAutomatic && !DialogBoxWidget->IsVisible())
	{
		bIsWaitingToDisplayDialog = true;
		bShouldTriggerLatentExecutorAfterTransition = false;
		NextDialogTextData = DisplayDialogTextData;
		FDialogWindowData DialogWindowData;
		DialogWindowData.bSetToAutomatic = bDialogWindowInAutomatic;
		DialogWindowData.TransitionEvent = DialogVisibilityTransitionEvent;
		ShowDialogWindow(DialogWindowData, FLatentActionInfo());
		return;
	}

	DisplayDialogInternal(DisplayDialogTextData);
}

void UDialogControllerComponent::DisplayChoices(const FDisplayDialogChoicesData& DisplayDialogChoicesData, FName& SelectedChoice, FLatentActionInfo LatentInfo)
{
	LatentExecutor.Setup(LatentInfo, &SelectedChoice);

	ActiveDialogNodeGUID = DisplayDialogChoicesData.NodeGUID;
	
	DialogState = EDialogState::CHOICE;

	TArray<FText> AvailableChoices;

	if (DisplayDialogChoicesData.ChoiceConditions.Num() > 0)
	{
        
		for (int32 i = 0; i < DisplayDialogChoicesData.ChoicesToDisplay.Num(); i++)
		{
			if (DisplayDialogChoicesData.ChoiceConditions[i])
			{
				AvailableChoices.Add(DisplayDialogChoicesData.ChoicesToDisplay[i]);
			}
		}
	}
	else
	{
		AvailableChoices = DisplayDialogChoicesData.ChoicesToDisplay;
	}

	if (DisplayDialogChoicesData.bIs3DChoice)
	{
		TArray<AActor*> Actors;
		UGameplayStatics::GetAllActorsWithInterface(this, UVNMChoiceObjectInterface::StaticClass(), Actors);

		for (auto* Actor: Actors)
		{
			auto* ChoiceObject = Cast<IVNMChoiceObjectInterface>(Actor);

			if (!ChoiceObject)
			{
				continue;
			}

			IVNMChoiceObjectInterface::Execute_On3DChoices(Actor, AvailableChoices);
		}
	}
	else if (DisplayDialogChoicesData.ImageChoiceWidgetClass)
	{
		ImageChoiceWidget = CreateWidget<UBaseImageChoiceWidget>(GetWorld(), DisplayDialogChoicesData.ImageChoiceWidgetClass);
		ImageChoiceWidget->AddToPlayerScreen(51);
		ImageChoiceWidget->SetChoices(AvailableChoices);
	}
	else
	{
		ChoiceWidget->SetChoices(AvailableChoices);
	}
	

	if (!GameSaveSubsystem)
	{
		return;
	}

	auto* PersistantData = GameSaveSubsystem->GetPersistantSaveGame();

	if (!PersistantData)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::DisplayChoices: PersistantData is null!"));
		return;
	}

	if (!PersistantData->SeenChoiceIds.Contains(DisplayDialogChoicesData.NodeGUID.ToString()))
	{
		PersistantData->SeenChoiceIds.Add(DisplayDialogChoicesData.NodeGUID.ToString());
		GameSaveSubsystem->SavePersistantData();
	}
}

void UDialogControllerComponent::ShowDialogWindow(const FDialogWindowData& DialogWindowData, FLatentActionInfo LatentInfo)
{
	if (bShouldTriggerLatentExecutorAfterTransition && LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	DialogBoxWidget->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	
	DialogVisibilityTransitionEvent = DialogWindowData.TransitionEvent;
	DialogBoxWidget->PlayEntryAnimation(DialogWindowData.TransitionEvent, DialogWindowData.AnimationPlaybackMultiplier, DialogWindowData.CustomTransitionName, !DialogWindowData.bDontWaitForTransitionToFinish);
}

void UDialogControllerComponent::HideDialogWindow(const FDialogWindowData& DialogWindowData, FLatentActionInfo LatentInfo)
{
	if (bShouldTriggerLatentExecutorAfterTransition && LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	bIsCurrentlyHidding = true;
	DialogVisibilityTransitionEvent = DialogWindowData.TransitionEvent;
	DialogBoxWidget->PlayExitAnimation(DialogWindowData.TransitionEvent, DialogWindowData.AnimationPlaybackMultiplier, DialogWindowData.CustomTransitionName, !DialogWindowData.bDontWaitForTransitionToFinish);
}

void UDialogControllerComponent::PlayDialogWindowAnimation(const FPlayDialogWindowAnimationData& PlayDialogWindowAnimationData, FLatentActionInfo LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}

	bShouldTriggerLatentExecutorAfterTransition = true;

	if (PlayDialogWindowAnimationData.bPlayBackwards)
	{
		DialogBoxWidget->PlayExitAnimation(
			PlayDialogWindowAnimationData.TransitionEvent,
			PlayDialogWindowAnimationData.AnimationPlaybackMultiplier,
			PlayDialogWindowAnimationData.CustomTransitionName,
			!PlayDialogWindowAnimationData.bDontWaitForTransitionToFinish);
	}
	else
	{
		DialogBoxWidget->PlayEntryAnimation(
			PlayDialogWindowAnimationData.TransitionEvent,
			PlayDialogWindowAnimationData.AnimationPlaybackMultiplier,
			PlayDialogWindowAnimationData.CustomTransitionName,
			!PlayDialogWindowAnimationData.bDontWaitForTransitionToFinish);
	}
}

void UDialogControllerComponent::ShowWidget(const FWidgetShowData& WidgetShowData, FLatentActionInfo LatentInfo)
{
	LatentExecutor.Setup(LatentInfo);
	
	if (!WidgetShowData.ActivatableWidgetClass)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::ShowWidget: Activatable Widget Class is null!"));
		LatentExecutor.ProcessEvent();
		return;
	}

	auto* Widget = CreateWidget<UBaseVNMActivatableWidget>(GetWorld(), WidgetShowData.ActivatableWidgetClass);

	if (!Widget)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::ShowWidget: Activatable Widget Class invalid!"));
		LatentExecutor.ProcessEvent();
		return;
	}

	CurrentlyActiveWidgets.Add(WidgetShowData.ActivatableWidgetClass, Widget);
	Widget->AddToPlayerScreen(1);
	Widget->ActivateWidget();

	if (!WidgetShowData.bWaitForWidgetToCloseAgain)
	{
		LatentExecutor.ProcessEvent();
	}
	else
	{
		Widget->OnDeactivated().AddUObject(this, &UDialogControllerComponent::OnWidgetDeactivated, WidgetShowData.ActivatableWidgetClass, WidgetShowData.bWaitForWidgetToCloseAgain);
	}
}

void UDialogControllerComponent::HideWidget(const FWidgetHideData& WidgetHideData, FLatentActionInfo LatentInfo)
{
	LatentExecutor.Setup(LatentInfo);
	
	if (!WidgetHideData.ActivatableWidgetClass)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::HideWidget: Activatable Widget Class is null!"));
		LatentExecutor.ProcessEvent();
		return;
	}

	UBaseVNMActivatableWidget* Value = CurrentlyActiveWidgets.FindAndRemoveChecked(WidgetHideData.ActivatableWidgetClass);

	if (!Value)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::HideWidget: Activatable Widget Class not found!"));
		LatentExecutor.ProcessEvent();
		return;
	}

	Value->DeactivateWidget();
	Value->RemoveFromParent();

	LatentExecutor.ProcessEvent();
}

void UDialogControllerComponent::RenameCharacter(const FRenameCharacterData& RenameCharacterData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	auto* CharacterComponent = UVNMGeneralUtils::GetCharacterControllerComponent(this);
        
	if (CharacterComponent)
	{
		CharacterComponent->AddRenamedCharacter(RenameCharacterData.CharacterId, RenameCharacterData.NewCharacterName.ToString());
	}
	
	LatentExecutor.ProcessEvent();
}

void UDialogControllerComponent::InteractiveRenameCharacter(const FInteractiveRenameCharacterData& InteractiveRenameCharacterData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}	
	
	NextInteractiveRenameCharacterData = InteractiveRenameCharacterData;
	if (bDialogWindowInAutomatic && !DialogBoxWidget->IsVisible())
	{
		bIsWaitingToDisplayPlayerInput = true;
		bShouldTriggerLatentExecutorAfterTransition = false;
		FDialogWindowData DialogWindowData;
		DialogWindowData.bSetToAutomatic = bDialogWindowInAutomatic;
		DialogWindowData.TransitionEvent = DialogVisibilityTransitionEvent;
		ShowDialogWindow(DialogWindowData, FLatentActionInfo());
		return;
	}

	InteractiveRenameCharacterInternal(NextInteractiveRenameCharacterData);	
}

void UDialogControllerComponent::GetDialogPlayerInput(FString& PlayerInput, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo, &PlayerInput);
	}	
	
	NextInteractiveRenameCharacterData = FInteractiveRenameCharacterData();
	if (bDialogWindowInAutomatic && !DialogBoxWidget->IsVisible())
	{
		bIsWaitingToDisplayPlayerInput = true;
		bShouldTriggerLatentExecutorAfterTransition = false;
		FDialogWindowData DialogWindowData;
		DialogWindowData.bSetToAutomatic = bDialogWindowInAutomatic;
		DialogWindowData.TransitionEvent = DialogVisibilityTransitionEvent;
		ShowDialogWindow(DialogWindowData, FLatentActionInfo());
		return;
	}

	GetDialogPlayerInputInternal();	
}

void UDialogControllerComponent::MoveToNextDialog()
{
	if (DialogState != EDialogState::DIALOG || DialogBoxWidget->GetActiveTransitionEvent() != ETransitionEvent::No_Transition)
	{
		return;
	}

	if (!DialogBoxWidget->IsTypeWriting())
	{
		DialogState = EDialogState::NONE;
		GetWorld()->GetTimerManager().ClearTimer(AutoForwardTimerHandle);

#if ENABLE_ROLLBACK
		DialogRollbackController->CollectSnapshot();
#endif
	
		LatentExecutor.ProcessEvent();
	}
	else
	{
		DialogBoxWidget->CancelTypeWriting();
	}
}

void UDialogControllerComponent::MoveToNextDialogAfterChoice(FName SelectedChoice)
{
	if (DialogState != EDialogState::CHOICE || DialogBoxWidget->GetActiveTransitionEvent() != ETransitionEvent::No_Transition)
	{
		return;
	}
	
	DialogState = EDialogState::NONE;

	if (!ImageChoiceWidget && !ChoiceWidget->HasChoices())
	{
		TArray<AActor*> Actors;
		UGameplayStatics::GetAllActorsWithInterface(this, UVNMChoiceObjectInterface::StaticClass(), Actors);

		for (auto* Actor: Actors)
		{
			auto* ChoiceObject = Cast<IVNMChoiceObjectInterface>(Actor);

			if (!ChoiceObject)
			{
				continue;
			}

			IVNMChoiceObjectInterface::Execute_On3DChoiceSelected(Actor);
		}
	}

	if (ImageChoiceWidget)
	{
		ImageChoiceWidget->RemoveFromParent();
		ImageChoiceWidget = nullptr;
	}

	ChoiceWidget->ClearChoices();
	
#if ENABLE_ROLLBACK
	DialogRollbackController->CollectSnapshot();
#endif
	
	*LatentExecutor.SelectedChoice = SelectedChoice;
	LatentExecutor.ProcessEvent();
	
}

bool UDialogControllerComponent::StartDialogByClass(TSubclassOf<UDialogObject> DialogObjectClass)
{
	if (!DialogObjectClass)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::StartDialogByClass: Dialog Object is null!"));
		return false;
	}
	
	if (ActiveDialogObject && ActiveDialogObject->IsDialogRunning())
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::StartDialogByClass: There is already a dialog running!"));
		return false;
	}

	ActiveDialogObject = NewObject<UDialogObject>(this, DialogObjectClass);
	ActiveDialogObject->OnDialogComplete.AddUniqueDynamic(this, &UDialogControllerComponent::OnActiveDialogComplete);
	DialogBoxWidget->SetDialogId(ActiveDialogObject->GetDialogId());
	OnDialogStarted.Broadcast(ActiveDialogObject);
	ActiveDialogObject->StartDialog();
	return true;
}

bool UDialogControllerComponent::StartDialogByObject(UDialogObject* DialogObject)
{
	if (!DialogObject)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::StartDialogByObject: Dialog Object is null!"));
		return false;
	}
	
	if (ActiveDialogObject && ActiveDialogObject->IsDialogRunning())
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::StartDialogByObject: There is already a dialog running!"));
		return false;
	}

	ActiveDialogObject = DialogObject;
	ActiveDialogObject->OnDialogComplete.AddUniqueDynamic(this, &UDialogControllerComponent::OnActiveDialogComplete);
	DialogBoxWidget->SetDialogId(ActiveDialogObject->GetDialogId());
	OnDialogStarted.Broadcast(ActiveDialogObject);
	ActiveDialogObject->StartDialog();
	return true;
}

bool UDialogControllerComponent::StartDialogAtNode(UDialogObject* DialogObject, const FName& NodeGUID)
{
	if (!DialogObject)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::StartDialogAtNode: Dialog Object is null!"));
		return false;
	}
	
	if (ActiveDialogObject && ActiveDialogObject->IsDialogRunning())
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::StartDialogAtNode: There is already a dialog running!"));
		// return false;
	}

	ActiveDialogObject = DialogObject;
	ActiveDialogObject->OnDialogComplete.AddUniqueDynamic(this, &UDialogControllerComponent::OnActiveDialogComplete);
	DialogBoxWidget->SetDialogId(ActiveDialogObject->GetDialogId());
	ActiveDialogObject->StartDialogAtNode(NodeGUID);
	OnDialogStarted.Broadcast(ActiveDialogObject);
	return true;
}

void UDialogControllerComponent::TryStartDialog()
{
	AHUD* Hud = Cast<AHUD>(GetOwner());
	
	if (!Hud)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::TryStartDialog: Owner is not a HUD!"))
		return;
	}

#if ENABLE_ROLLBACK
	DialogRollbackController = Hud->FindComponentByClass<UDialogRollbackControllerComponent>();
#endif
	auto* DialogImageControllerComponent = Hud->FindComponentByClass<UDialogImageControllerComponent>();
	auto* CharacterController = Hud->FindComponentByClass<UCharacterControllerComponent>();
	auto* CharacterMemoryController = Hud->GetOwningPlayerController()->FindComponentByClass<UMemoryControllerComponent>();
	auto* Character3DController = Hud->GetOwningPlayerController()->FindComponentByClass<UCharacter3DControllerComponent>();
	auto* DialogSceneController = Hud->GetOwningPlayerController()->FindComponentByClass<UDialogSceneControllerComponent>();
	
	if ((DialogImageControllerComponent && !DialogImageControllerComponent->HasFinishedSetup())
#if ENABLE_ROLLBACK
		|| (DialogRollbackController && !DialogRollbackController->HasFinishedSetup())
#endif
		|| (CharacterController && !CharacterController->HasFinishedSetup())
		|| (CharacterMemoryController && !CharacterMemoryController->HasFinishedSetup())
		|| (Character3DController && !Character3DController->HasFinishedSetup())
		|| (DialogSceneController && !DialogSceneController->HasFinishedSetup()))
	{
		GetWorld()->GetTimerManager().SetTimerForNextTick(this, &UDialogControllerComponent::TryStartDialog);
		return;
	}

	UVNMSettings* Settings = UVNMSettings::GetVNMSettings();
	const auto DialogObjectArray = Settings->GetDialogDefinitions();

	if (DialogObjectArray.Num() == 0)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::TryStartDialog: There is no new dialog object available!"));
		return;
	}

	auto* Subsystem = UGameplayStatics::GetGameInstance(GetWorld())->GetSubsystem<UGameSaveSubsystem>();

	if (!Subsystem || !Subsystem->IsCurrentlyLoading())
	{
		const FDialogDefinition& DialogObjectDefinition = DialogObjectArray[0];

		if (!DialogObjectDefinition.IsValid())
		{
			UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::TryStartDialog: Dialog object definition is invalid (Id is not set)!"));
			return;
		}

		StartNextDialogObject(DialogObjectDefinition.DialogueObjectClass);
	}
	else
	{
		auto* SaveGame = Subsystem->GetSaveGame();
		
		if (ApplySnapshot(SaveGame->Snapshot))
		{
		}
		else
		{
			if (!Settings->Settings.bAutostartFirstDialogIfNoDialogIsFound)
			{
				UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::TryStartDialog: Dialog object definition id in save game is invalid!"));
				return;
			}
			
			const FDialogDefinition& DialogObjectDefinition = DialogObjectArray[0];

			if (!DialogObjectDefinition.IsValid())
			{
				UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::TryStartDialog: Dialog object definition is invalid (Id is not set)!"));
				return;
			}

			StartNextDialogObject(DialogObjectDefinition.DialogueObjectClass);
		}
	}
}

FString UDialogControllerComponent::GrabLocalVariablesJsonFromDialogObject(UDialogObject* DialogObject)
{
	FString ResultJson;
	TSharedPtr<FJsonObject> DialogJsonObject = MakeShared<FJsonObject>();

	if (!DialogObject)
	{
		return ResultJson;
	}
	
	for (TFieldIterator<FProperty> Prop(DialogObject->GetClass()); Prop; ++Prop)
	{
		if (Prop->IsA<FDelegateProperty>())
		{
			continue;
		}

		if (Prop->IsA<FMulticastDelegateProperty>())
		{
			continue;
		}

		if (Prop->GetFName() == TEXT("UberGraphFrame"))
		{
			continue;
		}

		if (Prop->GetFName() == TEXT("bIsDialogActive"))
		{
			continue;
		}

		if (Prop->GetFName() == TEXT("bInitialized"))
		{
			continue;
		}

		if (Prop->GetFName() == TEXT("Choices"))
		{
			continue;
		}

		DialogJsonObject->SetField(Prop->GetFName().ToString(), FJsonObjectConverter::UPropertyToJsonValue(*Prop, Prop->ContainerPtrToValuePtr<void>(DialogObject), 0, 0));
	}

	TSharedRef< FCondensedJsonStringWriter > Writer = FCondensedJsonStringWriterFactory::Create(&ResultJson);
	if (!FJsonSerializer::Serialize(DialogJsonObject.ToSharedRef(), Writer))
	{
	 	UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::GrabLocalVariablesJsonFromDialogObject: Failed to serialize Json Object!"));
		return "";
	}

	return ResultJson;
}

void UDialogControllerComponent::LoadAndApplyLocalVariablesJsonToDialogObject(UDialogObject* DialogObject, const FString& Json)
{
	if (Json.IsEmpty())
	{
		return;
	}
	
	TSharedRef< TJsonReader<> > Reader = TJsonReaderFactory<>::Create( Json );

	TSharedPtr<FJsonObject> DialogJsonObject;
	if (!FJsonSerializer::Deserialize(Reader, DialogJsonObject))
	{
	 	UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::LoadAndApplyLocalVariablesJsonToDialogObject: Failed to deserialize Json Object!"));
		return;
	}

	if (!DialogJsonObject.IsValid())
	{
	 	UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::LoadAndApplyLocalVariablesJsonToDialogObject: No json object existing to process!"));
	 	return;
	}

	int32 Idx = 0;

	for (TFieldIterator<FProperty> Prop(DialogObject->GetClass()); Prop; ++Prop)
	{
		if (Prop->IsA<FDelegateProperty>())
		{
			continue;
		}

		if (Prop->IsA<FMulticastDelegateProperty>())
		{
			continue;
		}

		if (Prop->GetFName() == TEXT("UberGraphFrame"))
		{
			continue;
		}

		if (Prop->GetFName() == TEXT("bIsDialogActive"))
		{
			continue;
		}

		if (Prop->GetFName() == TEXT("bInitialized"))
		{
			continue;
		}
		auto JsonField = DialogJsonObject->TryGetField(Prop->GetFName().ToString());

		if (!JsonField.IsValid() || JsonField->IsNull())
		{
			continue;
		}
		
		FJsonObjectConverter::JsonValueToUProperty(JsonField, *Prop, Prop->ContainerPtrToValuePtr<void>(DialogObject), 0, 0);
	}
}


void UDialogControllerComponent::DisplayDialogInternal(const FDisplayDialogTextData& DisplayDialogTextData)
{
	DialogState = EDialogState::DIALOG;

	DialogBoxWidget->SetTextAlignment(DisplayDialogTextData.TextJustification);
	DialogBoxWidget->SetCharacterNameAlignment(DisplayDialogTextData.CharacterNameAlignment);
	DialogBoxWidget->SetCharacterNameById(DisplayDialogTextData.CharacterId);
	DialogBoxWidget->SetDialogText(DisplayDialogTextData.TextToDisplay, DisplayDialogTextData.bSkipTypewriting, DisplayDialogTextData.TypewritingSpeedMultiplier);
}

void UDialogControllerComponent::InteractiveRenameCharacterInternal(const FInteractiveRenameCharacterData& InteractiveRenameCharacterData)
{
	DialogState = EDialogState::DIALOG_INPUT;

	const FCharacterDefinition CharacterDefinition = UVNMSettings::GetVNMSettings()->GetCharacterDefinitionById(InteractiveRenameCharacterData.CharacterId);
	
	auto* CharacterComponent = UVNMGeneralUtils::GetCharacterControllerComponent(this);

	FText CharacterName = FText::GetEmpty();
        
	if (CharacterComponent)
	{
		CharacterName = CharacterComponent->GetCharacterNameById(InteractiveRenameCharacterData.CharacterId);
	}
	else if (CharacterDefinition.IsValid())
	{
		CharacterName = CharacterDefinition.CharacterDisplayName;
	}
	
	DialogBoxWidget->StartGatheringInputFromUser(FText::Format(NSLOCTEXT("VNM", "InteractiveRenameCharacterText", "Rename {0}:"), CharacterName));
}

void UDialogControllerComponent::GetDialogPlayerInputInternal()
{
	DialogState = EDialogState::DIALOG_INPUT;
	
	DialogBoxWidget->StartGatheringInputFromUser(NSLOCTEXT("VNM", "DialogPlayerInputText", "Enter input"));
}

void UDialogControllerComponent::OnDialogInputCommitted(const FText& Text)
{
	if (DialogState != EDialogState::DIALOG_INPUT)
	{
		return;
	}
	
	DialogState = EDialogState::NONE;

	if (!NextInteractiveRenameCharacterData.CharacterId.IsNone())
	{
		auto* CharacterComponent = UVNMGeneralUtils::GetCharacterControllerComponent(this);
        
		if (CharacterComponent)
		{
			CharacterComponent->AddRenamedCharacter(NextInteractiveRenameCharacterData.CharacterId, Text.ToString());
		}
	}
	else
	{
		*LatentExecutor.PlayerInput = Text.ToString();
	}
	
	LatentExecutor.ProcessEvent();
}

void UDialogControllerComponent::OnDialogTextBoxTypeWritingEnd()
{
	auto* Settings = UVNMSettings::GetVNMSettings();

	if (Settings->Settings.AutoForwardTime > 0.f)
	{
		GetWorld()->GetTimerManager().SetTimer(AutoForwardTimerHandle, this, &UDialogControllerComponent::MoveToNextDialog, Settings->Settings.AutoForwardTime);
	}
}

void UDialogControllerComponent::OnWidgetDeactivated(TSubclassOf<UBaseVNMActivatableWidget> WidgetClass, bool bWaitForWidgetToCloseAgain)
{
	if (bWaitForWidgetToCloseAgain)
	{
		UBaseVNMActivatableWidget* Value;
		CurrentlyActiveWidgets.RemoveAndCopyValue(WidgetClass, Value);

		if (!Value)
		{
			UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::OnWidgetDeactivated: Activatable Widget Class not found!"));
			LatentExecutor.ProcessEvent();
			return;
		}

		Value->RemoveFromParent();
		LatentExecutor.ProcessEvent();
	}
}

void UDialogControllerComponent::OnActiveDialogComplete(UDialogObject* DialogObjectThatFinished, FName NextDialogObjectId)
{
	if (ActiveDialogObject != DialogObjectThatFinished)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::OnActiveDialogComplete: Finished dialog is not the currently active dialog!"));
		return;
	}

 	OnDialogEnded.Broadcast(ActiveDialogObject);
	
	ActiveDialogObject = nullptr;
	
	if (bDialogWindowInAutomatic && DialogBoxWidget->IsVisible())
	{
		bIsWaitingToFinishDialogObject = true;
		NextDialogObjectIdToStart = NextDialogObjectId;
		bShouldTriggerLatentExecutorAfterTransition = false;
		FDialogWindowData DialogWindowData;
		DialogWindowData.bSetToAutomatic = bDialogWindowInAutomatic;
		DialogWindowData.TransitionEvent = DialogVisibilityTransitionEvent;
		HideDialogWindow(DialogWindowData, FLatentActionInfo());
		return;
	}

	OnActiveDialogCompleteInternal(NextDialogObjectId);
}

void UDialogControllerComponent::OnActiveDialogCompleteInternal(FName NextDialogObjectId)
{
	DialogBoxWidget->SetDialogId(TEXT(""));
	
	auto Definition = UVNMSettings::GetVNMSettings()->GetDialogDefinitionById(NextDialogObjectId);
	StartNextDialogObject(Definition.IsValid() ? Definition.DialogueObjectClass : nullptr);
}

void UDialogControllerComponent::StartNextDialogObject(TSubclassOf<UDialogObject> NextDialogObjectClass)
{
	if (!NextDialogObjectClass)
	{
		
		const FString MainMenuLevel = UVNMSettings::GetVNMSettings()->Settings.MainMenuLevelName;

		if (!MainMenuLevel.IsEmpty())
		{
			GetWorld()->ServerTravel(MainMenuLevel, true);
		}
		else
		{
			UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::StartNextDialogObject: The main menu level name is invalid! Check your VNM Settings!"));
		}
		return;
	}
	
	auto* DialogObject = NewObject<UDialogObject>(this, NextDialogObjectClass);

	if (!DialogObject)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::StartNextDialogObject: The Dialog Object could not be created! Maybe the supplied class is invalid!"));
		return;
	}

	DialogObject->SetDialogId(UVNMSettings::GetVNMSettings()->GetDialogDefinitionByClass(NextDialogObjectClass).DialogueId);

	StartDialogByObject(DialogObject);
}

void UDialogControllerComponent::OnDialogBoxTransitionComplete()
{
	if (bIsCurrentlyHidding)
	{
		DialogBoxWidget->SetVisibility(ESlateVisibility::Collapsed);
		bIsCurrentlyHidding = false;
	}

	if (bIsWaitingToDisplayDialog)
	{
		bIsWaitingToDisplayDialog = false;
		DisplayDialogInternal(NextDialogTextData);
	}
	else if (bIsWaitingToDisplayPlayerInput)
	{
		bIsWaitingToDisplayPlayerInput = false;
		if (NextInteractiveRenameCharacterData.CharacterId.IsNone())
		{
			GetDialogPlayerInputInternal();
		}
		else
		{
			InteractiveRenameCharacterInternal(NextInteractiveRenameCharacterData);
		}
	}
	else if (bIsWaitingToFinishDialogObject)
	{
		bIsWaitingToFinishDialogObject = false;
		OnActiveDialogCompleteInternal(NextDialogObjectIdToStart);
	}
	else if (bShouldTriggerLatentExecutorAfterTransition)
	{
		LatentExecutor.ProcessEvent();
	}
	else
	{
		bShouldTriggerLatentExecutorAfterTransition = true;
	}
	
}

