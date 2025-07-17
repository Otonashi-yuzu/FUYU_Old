// Copyright (c) 2022 Al_Fe

#pragma once

#include <VNMControlStructs.h>

#include "CoreMinimal.h"



#include "BaseChoiceWidget.h"
#include "BaseControllerComponent.h"
#include "BaseDialogBoxWidget.h"
#include "DialogObject.h"
#include "GameSaveSubsystem.h"
#include "DialogControllerComponent.generated.h"

USTRUCT()
struct FDialogLatentExecutor
{
	GENERATED_BODY()

	// Potentially will be GC'd, but needs verification
	UObject* TargetToReturnTo;
	UFunction* FunctionToCall;
	int32 Linkage;
	FName* SelectedChoice;
	FString* PlayerInput;

	void Setup(const FLatentActionInfo& LatentInfo);
	void Setup(const FLatentActionInfo& LatentInfo, FName* InSelectedChoice);
	void Setup(const FLatentActionInfo& LatentInfo, FString* InPlayerInput);
	void ProcessEvent();
};

UENUM()
enum class EDialogState : uint8
{
	NONE,
	DIALOG,
	CHOICE,
	DIALOG_INPUT
};

UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VNM_API UDialogControllerComponent : public UBaseControllerComponent
{
	GENERATED_BODY()

public:
	UDialogControllerComponent();
	
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void SetupControllerComponent() override;
	virtual bool ApplySnapshot(const FGameSnapshot& Snapshot) override;

	bool IsDialogBoxVisible() const { return DialogBoxWidget->IsVisible(); }
	bool IsDialogBoxInAutoMode() const { return bDialogWindowInAutomatic; }
	FName GetActiveDialogNodeGUID() const { return ActiveDialogNodeGUID; }
	
	void DisplayDialog(const FDisplayDialogTextData& DisplayDialogTextData, FLatentActionInfo LatentInfo);
	void DisplayChoices(const FDisplayDialogChoicesData& DisplayDialogChoicesData, FName& SelectedChoice, FLatentActionInfo LatentInfo);
	void ShowDialogWindow(const FDialogWindowData& DialogWindowData, FLatentActionInfo LatentInfo);
	void HideDialogWindow(const FDialogWindowData& DialogWindowData, FLatentActionInfo LatentInfo);
	void PlayDialogWindowAnimation(const FPlayDialogWindowAnimationData& PlayDialogWindowAnimationData, FLatentActionInfo LatentInfo);
	void ShowWidget(const FWidgetShowData& WidgetShowData, FLatentActionInfo LatentInfo);
	void HideWidget(const FWidgetHideData& WidgetHideData, FLatentActionInfo LatentInfo);
	
	void RenameCharacter(const FRenameCharacterData& RenameCharacterData, const FLatentActionInfo& LatentInfo);
	void InteractiveRenameCharacter(const FInteractiveRenameCharacterData& InteractiveRenameCharacterData, const FLatentActionInfo& LatentInfo);
	void GetDialogPlayerInput(FString& PlayerInput, const FLatentActionInfo& LatentInfo);

	// Called to continue in the dialog after the player is done reading the currently displayed text
	UFUNCTION(BlueprintCallable, Category=Dialog)
	void MoveToNextDialog();
	
    void MoveToNextDialogAfterChoice(FName SelectedChoice);
	
	// Use this to start a new dialog object
	UFUNCTION(BlueprintCallable, Category=Dialog)
	bool StartDialogByClass(TSubclassOf<UDialogObject> DialogObjectClass);
	bool StartDialogByObject(UDialogObject* DialogObject);
	bool StartDialogAtNode(UDialogObject* DialogObject, const FName& NodeGUID);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogStarted, UDialogObject*, StartedDialogObject);

	UPROPERTY(BlueprintAssignable)
	FOnDialogStarted OnDialogStarted;

#if ENABLE_ROLLBACK
	class UDialogRollbackControllerComponent* DialogRollbackController;
#endif

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogEnded, UDialogObject*, EndedDialogObject);

	UPROPERTY(BlueprintAssignable)
	FOnDialogEnded OnDialogEnded;

	UDialogObject* GetActiveDialog() const { return ActiveDialogObject; }
	TSubclassOf<UDialogObject> GetActiveDialogClass() const { return ActiveDialogObject ? ActiveDialogObject->GetClass() : nullptr; }
	FText GetCurrentDialogText() const { return DialogBoxWidget->GetDialogText(); }
	FName GetCurrentTalkingCharacterId() const { return DialogBoxWidget->GetActiveTalkingCharacterId(); }
	static FString GrabLocalVariablesJsonFromDialogObject(UDialogObject* DialogObject);

protected:

	EDialogState DialogState;
	
	FDialogLatentExecutor LatentExecutor;

	void TryStartDialog();

	static void LoadAndApplyLocalVariablesJsonToDialogObject(UDialogObject* DialogObject, const FString& Json);

	void DisplayDialogInternal(const FDisplayDialogTextData& DisplayDialogTextData);
	void InteractiveRenameCharacterInternal(const FInteractiveRenameCharacterData& InteractiveRenameCharacterData);
	void GetDialogPlayerInputInternal();

	UFUNCTION()
	void OnDialogInputCommitted(const FText& Text);
	
	UFUNCTION()
	void OnDialogTextBoxTypeWritingEnd();
	
	void OnWidgetDeactivated(TSubclassOf<UBaseVNMActivatableWidget> WidgetClass, bool bWaitForWidgetToCloseAgain);

	FTimerHandle AutoForwardTimerHandle;
	
	UPROPERTY()
	UGameSaveSubsystem* GameSaveSubsystem;
	
	UPROPERTY()
	UDialogObject* ActiveDialogObject;

	UPROPERTY()
	TMap<TSubclassOf<UBaseVNMActivatableWidget>, UBaseVNMActivatableWidget*> CurrentlyActiveWidgets;

	UPROPERTY()
	FName ActiveDialogNodeGUID;

	UPROPERTY()
	bool bDialogWindowInAutomatic = true;

	UPROPERTY()
	bool bIsCurrentlyHidding = false;

	UPROPERTY()
	bool bShouldTriggerLatentExecutorAfterTransition = true;

	UPROPERTY()
	bool bIsWaitingToDisplayDialog = false;

	UPROPERTY()
	bool bIsWaitingToDisplayPlayerInput = false;

	UPROPERTY()
	bool bIsWaitingToFinishDialogObject = false;

	UPROPERTY()
	ETransitionEvent DialogVisibilityTransitionEvent = ETransitionEvent::Fade;

	UFUNCTION()
	void OnActiveDialogComplete(UDialogObject* DialogObjectThatFinished, FName NextDialogObjectId);

	void OnActiveDialogCompleteInternal(FName NextDialogObjectClass);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Functionality)
	TSubclassOf<UBaseDialogBoxWidget> DialogBoxWidgetClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Functionality)
	TSubclassOf<UBaseChoiceWidget>ChoiceWidgetClass;

	UPROPERTY(BlueprintReadOnly, Category=Functionality)
	UBaseDialogBoxWidget* DialogBoxWidget;
	
	UPROPERTY(BlueprintReadOnly, Category=Functionality)
	UBaseChoiceWidget* ChoiceWidget;
	
	UPROPERTY(BlueprintReadOnly, Category=Functionality)
	UBaseImageChoiceWidget* ImageChoiceWidget;

	UFUNCTION()
	void StartNextDialogObject(TSubclassOf<UDialogObject> NextDialogObjectClass);

	UFUNCTION()
	void OnDialogBoxTransitionComplete();

	UPROPERTY()
	FName NextDialogObjectIdToStart;

	UPROPERTY()
	FDisplayDialogTextData NextDialogTextData;

	UPROPERTY()
	FInteractiveRenameCharacterData NextInteractiveRenameCharacterData;
};
