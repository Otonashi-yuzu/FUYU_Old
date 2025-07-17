// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainMenuWidget.h"
#include "MenuIconButtonWidget.h"
#include "Blueprint/UserWidget.h"
#include "BaseImageChoiceButton.generated.h"

class UButton;
class UImage;
/**
 * 
 */
UCLASS()
class VNM_API UBaseImageChoiceButton : public UMenuIconButtonWidget
{
	GENERATED_BODY()

public:
	FText GetChoiceText() const { return ChoiceText; }

	FName GetChoiceTextAsName() const { return *ChoiceText.ToString(); }

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChoiceButtonClicked, UBaseImageChoiceButton*, ClickedChoiceButton);
	UPROPERTY(BlueprintAssignable)
	FOnChoiceButtonClicked OnChoiceButtonClicked;

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Functionality)
	FText ChoiceText;

	virtual void NativeMenuButtonClicked() override;
};
