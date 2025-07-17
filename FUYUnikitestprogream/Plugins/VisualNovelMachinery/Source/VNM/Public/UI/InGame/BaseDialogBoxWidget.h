// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "BaseVNMWidget.h"
#include "VNMSettings.h"
#include "Components/RichTextBlock.h"

#include "BaseDialogBoxWidget.generated.h"

class UHorizontalBox;
class UEditableTextBox;
/**
 * 
 */
UCLASS(Abstract)
class VNM_API UBaseDialogBoxWidget : public UBaseVNMWidget
{
	GENERATED_BODY()

public:
	void SetTextAlignment(const TEnumAsByte<ETextJustify::Type> TextJustification);
	void SetCharacterNameAlignment(const TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetDialogId(const FName& DialogId);
    void SetDialogText(const FText& InDialogText, const bool bDontTypewrite, const float InTypeWritingSpeedMultiplier);
	void SetCharacterNameById(const FName& InCharacterId);
	void SetCharacterNameByText(const FText& InCharacterName);
	void OverrideDialogBoxBackground(const FImageDefinition& ImageDefinition);
	void ResetDialogBoxBackground();

	void StartGatheringInputFromUser(const FText& InputGatheringText);

	bool IsTypeWriting() const  { return TypeWritingTimerHandle.IsValid(); }
	void CancelTypeWriting();

	FText GetDialogText() const;
	FName GetActiveTalkingCharacterId() const;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogTextBoxTextCommittedEvent, const FText&, Text);

	UPROPERTY(BlueprintAssignable)
	FOnDialogTextBoxTextCommittedEvent OnDialogTextBoxTextCommittedEvent;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDialogTextBoxTypeWritingEnd);

	UPROPERTY(BlueprintAssignable)
	FOnDialogTextBoxTypeWritingEnd OnDialogTextBoxTypeWritingEnd;

protected:
	virtual void NativePreConstruct() override;
	virtual void NativeOnInitialized() override;
	virtual void OnTransitionExitFinished() override;
	virtual void OnTransitionAnimationFinished() override;

	UFUNCTION()
	void OnDialogTextBoxTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

	UFUNCTION(BlueprintImplementableEvent, DisplayName="On Begin Typewriting Effect")
	void BP_OnBeginTypewritingEffect();
	virtual void NativeOnBeginTypewritingEffect();

	UFUNCTION(BlueprintImplementableEvent, DisplayName="On End Typewriting Effect")
	void BP_OnEndTypewritingEffect();
	virtual void NativeOnEndTypewritingEffect();

	void OnTypeWriterEffectTick();

	FText ReplaceCharacterIdsWithCharacterNames(const FText& InDialogText);

	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta=(BindWidget))
	UImage* DialogBoxBackground;
	
	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta=(BindWidget))
    URichTextBlock* CharacterNameText;
	
	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta=(BindWidget))
    UHorizontalBox* CharacterNameAlignmentBox;
    
    UPROPERTY(BlueprintReadOnly, Category=Appearance, meta=(BindWidget))
	URichTextBlock* DialogText;
    
	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta=(BindWidget))
	UEditableTextBox* DialogTextBox;

	UPROPERTY(BlueprintReadOnly, Category=Appearance)
	FImageDefinition DefaultDialogBoxImageDefinition;

	UPROPERTY(BlueprintReadOnly, Category=Character)
	FName ActiveTalkingCharacterId;

	UPROPERTY(BlueprintReadOnly, Category=Character)
	FDialogDefinition ActiveDialogDefinition;

	UPROPERTY(BlueprintReadOnly, Category=Appearance)
	bool bTypewriterEffectActive = true;

	UPROPERTY(BlueprintReadOnly, Category=Appearance)
	float TypeWritingSpeed = 0.03f;

	UPROPERTY(BlueprintReadOnly, Category=Appearance)
	float TypeWritingSpeedMultiplier = 1.f;

	bool bCurrentlyInBetweenTags = false;
	int32 TypeWriteIndex = 0;
	FText DialogTextValueToSet;
	FTimerHandle TypeWritingTimerHandle;
};


