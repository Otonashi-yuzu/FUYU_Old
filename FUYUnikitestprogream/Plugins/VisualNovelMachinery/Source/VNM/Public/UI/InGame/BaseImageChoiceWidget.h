// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseImageChoiceButton.h"
#include "Blueprint/UserWidget.h"

#include "BaseImageChoiceWidget.generated.h"

/**
 * 
 */
UCLASS()
class VNM_API UBaseImageChoiceWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetChoices(const TArray<FText>& Choices);

protected:
	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta=(BindWidget))
	UPanelWidget* ChoiceButtonsList;

	UFUNCTION()
	void OnImageChoiceButtonClicked(UBaseImageChoiceButton* ClickedChoiceButton);
};
