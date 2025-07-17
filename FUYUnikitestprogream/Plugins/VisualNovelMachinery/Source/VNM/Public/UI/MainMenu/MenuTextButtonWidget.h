// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuButtonWidget.h"
#include "MenuTextButtonWidget.generated.h"

class UImage;
class UTextBlock;
/**
 * 
 */
UCLASS(Abstract)
class VNM_API UMenuTextButtonWidget : public UMenuButtonWidget
{
	GENERATED_BODY()

protected:

	virtual void NativePreConstruct() override;
	
public:

	UFUNCTION(BlueprintCallable, Category="Menu Text Button")
	void OverrideButtonText(const FText& NewText);

	virtual void SetButtonStyling(const FButtonStyling& NewButtonStyling) override;
	virtual void SetLocked(bool bInIsLocked) override;
	virtual void SetIsSelected(bool bInIsSelected) override;

protected:

	virtual void NativeMenuButtonHovered() override;
	virtual void NativeMenuButtonUnhovered() override;
	virtual void NativeMenuButtonPressed() override;
	virtual void NativeMenuButtonReleased() override;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Menu Text Button")
	UImage* BackgroundImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Menu Text Button")
	UTextBlock* ButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Menu Text Button")
	FText ButtonDefaultText;
};
