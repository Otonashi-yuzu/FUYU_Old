// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseVNMActivatableWidget.h"

void UBaseVNMActivatableWidget::NativeDestruct()
{
	DeactivateWidget();
	
	Super::NativeDestruct();
}

void UBaseVNMActivatableWidget::ActivateWidget()
{
	if (bIsActivated)
	{
		return;
	}
	
	bIsActivated = true;
	NativeOnActivated();
	BP_OnActivated();
	OnActivated().Broadcast();
}

void UBaseVNMActivatableWidget::DeactivateWidget()
{
	if (!bIsActivated)
	{
		return;
	}
	
	bIsActivated = false;
	NativeOnDeactivated();
	BP_OnDeactivated();
	OnDeactivated().Broadcast();
}
