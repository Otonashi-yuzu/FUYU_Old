// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/VNMSliderWidget.h"

void UVNMSliderWidget::SetSliderValue_Implementation(const float NewValue)
{
	Value = NewValue;
}

void UVNMSliderWidget::SetMinValue(const float NewMinValue)
{
	MinValue = NewMinValue;
}

void UVNMSliderWidget::SetMaxValue(const float NewMaxValue)
{
	MaxValue = NewMaxValue;
}

void UVNMSliderWidget::SetStepValue(const float NewStepValue)
{
	StepValue = NewStepValue;
}
