// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VNMDropDownWidget.h"
#include "VNMSliderWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/CheckBox.h"
#include "Components/ComboBoxString.h"
#include "Components/Slider.h"
#include "OptionsWidget.generated.h"

class UMenuButtonWidget;
/**
 * 
 */
UCLASS(Abstract)
class VNM_API UOptionsWidget : public UUserWidget
{
	GENERATED_BODY()


public:
	

protected:
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;

	virtual void NativeOnInitialized() override;

	void SetDisplayOptionByGameUserSettings();

	UFUNCTION()
	void OnTypeWritingSpeedSliderValueChanged(float NewValue);

	UFUNCTION()
	void OnAutoForwardTimeSliderValueChanged(float NewValue);

	UFUNCTION()
	void OnDisplayOptionFullScreenCheckedStateChanged(UMenuButtonWidget* ClickedButton, bool bIsSelected);

	UFUNCTION()
	void OnDisplayOptionWindowedCheckedStateChanged(UMenuButtonWidget* ClickedButton, bool bIsSelected);
	
	UFUNCTION()
	void OnDisplayOptionWindowedFullScreenCheckedStateChanged(UMenuButtonWidget* ClickedButton, bool bIsSelected);
	
	UFUNCTION()
	void OnResolutionChanged(FString SelectedItem);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Options")
	UVNMSliderWidget* TypeWritingSpeedSlider;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Options")
	UVNMSliderWidget* AutoForwardTimeSlider;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Options")
	UMenuButtonWidget* DisplayOptionFullScreen;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Options")
	UMenuButtonWidget* DisplayOptionWindowed;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Options")
	UMenuButtonWidget* DisplayOptionWindowedFullScreen;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Options")
	UVNMDropDownWidget* DisplayResolutions;

	UPROPERTY(BlueprintReadOnly, Category="Options")
	TArray<FString> FullscreenResolutions;
	
	UPROPERTY(BlueprintReadOnly, Category="Options")
	TArray<FString> WindowedResolutions;
};


