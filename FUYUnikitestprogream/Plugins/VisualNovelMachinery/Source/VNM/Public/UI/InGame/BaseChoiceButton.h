// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/RichTextBlock.h"

#include "BaseChoiceButton.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UBaseChoiceButton : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetChoiceText(const FText& Text);
	FText GetChoiceText() const { return ChoiceText->GetText(); }

	FName GetChoiceTextAsName() const { return *ChoiceText->GetText().ToString(); }

protected:
	virtual void NativeOnInitialized() override;
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChoiceButtonClicked, UBaseChoiceButton*, ClickedChoiceButton);
	UPROPERTY(BlueprintAssignable)
	FOnChoiceButtonClicked OnChoiceButtonClicked;

protected:
	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta=(BindWidget))
	URichTextBlock* ChoiceText;
	
	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta=(BindWidget))
	UButton* ChoiceButton;
	
	UPROPERTY(BlueprintReadOnly, Category=Appearance)
	FText OriginalChoiceText;

	UFUNCTION()
	void OnButtonClicked();
	
};
