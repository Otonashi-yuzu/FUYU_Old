// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VNMSliderWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UVNMSliderWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category=Slider)
	void SetSliderValue(const float NewValue);

	UFUNCTION(BlueprintCallable, Category=Slider)
	void SetMinValue(const float NewMinValue);

	UFUNCTION(BlueprintCallable, Category=Slider)
	void SetMaxValue(const float NewMaxValue);

	UFUNCTION(BlueprintCallable, Category=Slider)
	void SetStepValue(const float NewStepValue);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValueChangedDelegate, const float, NewValue);

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category="Slider Value")
	FOnValueChangedDelegate OnValueChanged;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Slider Value")
	float MinValue;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Slider Value")
	float MaxValue;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Slider Value")
	float StepValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Slider Value")
	float Value;
	
};
