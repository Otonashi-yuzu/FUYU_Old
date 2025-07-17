// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseVNMActivatableWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UBaseVNMActivatableWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	virtual void NativeDestruct() override;
public:

	void ActivateWidget();

	UFUNCTION(BlueprintCallable, Category=Widget)
	void DeactivateWidget();

	FSimpleMulticastDelegate& OnActivated() const { return OnActivatedEvent; }
	FSimpleMulticastDelegate& OnDeactivated() const { return OnDeactivatedEvent; }

protected:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWidgetActivationEvent);
	
	UPROPERTY(BlueprintAssignable)
	FOnWidgetActivationEvent OnWidgetActivated;
	
	UPROPERTY(BlueprintAssignable)
	FOnWidgetActivationEvent OnWidgetDeactivated;

	mutable FSimpleMulticastDelegate OnActivatedEvent;
	mutable FSimpleMulticastDelegate OnDeactivatedEvent;

	UFUNCTION(BlueprintImplementableEvent, Category=Widget)
	void BP_OnActivated();
	void NativeOnActivated() {}

	UFUNCTION(BlueprintImplementableEvent, Category=Widget)
	void BP_OnDeactivated();
	void NativeOnDeactivated() {}

	UPROPERTY(BlueprintReadOnly, Category=Widget)
	bool bIsActivated = false;
};
