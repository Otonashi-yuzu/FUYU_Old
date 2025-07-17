// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "TransitionEvent.h"
#include "Blueprint/UserWidget.h"
#include "Animation/WidgetAnimation.h"
#include "BaseVNMWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UBaseVNMWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void PlayTransitionAnimation(ETransitionEvent Event, const float AnimationPlaybackMultiplier, const FString& CustomEventName, const bool bNotifyOnAnimationComplete);
	void PlayExitAnimation(ETransitionEvent Event, const float AnimationPlaybackMultiplier, const FString& CustomEventName, const bool bNotifyOnAnimationComplete);
	void PlayEntryAnimation(ETransitionEvent Event, const float AnimationPlaybackMultiplier, const FString& CustomEventName, const bool bNotifyOnAnimationComplete);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTransitionComplete);

	UPROPERTY(BlueprintAssignable)
	FOnTransitionComplete OnTransitionComplete;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMidTransitionReached);

	UPROPERTY(BlueprintAssignable)
	FOnMidTransitionReached OnMidTransitionReached;

	ETransitionEvent GetActiveTransitionEvent() const { return ActiveTransitionEvent; }

protected:

	UWidgetAnimation* GetWidgetAnimation(const FString& CustomEventName);
	
	virtual void OnTransitionAnimationFinished();

	virtual void OnTransitionExitFinished();

	virtual void OnMidTransitionPointReached() {}

	virtual void OnTransitionEntryFinished();

	virtual void OnAnimationFinished_Implementation(const UWidgetAnimation* Animation) override;
	
	UPROPERTY(BlueprintReadOnly, Transient, Category=Animation, meta=(BindWidgetAnim))
	UWidgetAnimation* FadeAnimation;

	UPROPERTY(BlueprintReadOnly, Transient, Category=Animation, meta=(BindWidgetAnim))
	UWidgetAnimation* DissolveAnimation;

	UPROPERTY(BlueprintReadOnly, Transient, Category=Animation, meta=(BindWidgetAnim))
	UWidgetAnimation* ZoomAnimation;

	UPROPERTY(BlueprintReadOnly, Transient, Category=Animation, meta=(BindWidgetAnim))
	UWidgetAnimation* VPunchAnimation;

	UPROPERTY(BlueprintReadOnly, Transient, Category=Animation, meta=(BindWidgetAnim))
	UWidgetAnimation* HPunchAnimation;

	UPROPERTY(BlueprintReadOnly, Transient, Category=Animation, meta=(BindWidgetAnim))
	UWidgetAnimation* PunchAnimation;

	UPROPERTY(BlueprintReadOnly, Category=Animation)
	ETransitionEvent ActiveTransitionEvent;

	UPROPERTY(BlueprintReadOnly, Category=Animation)
	FString ActiveCustomEventName;

	UPROPERTY(BlueprintReadOnly, Category=Animation)
	float ActiveAnimationPlaybackMultiplier;

	UPROPERTY(BlueprintReadOnly, Category=Animation)
	bool bExitAndEntry;

	UPROPERTY(BlueprintReadOnly, Category=Animation)
	bool bBroadcastOnAnimationFinished = true;
	
};
