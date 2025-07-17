// Copyright (c) 2022 Al_Fe


#include "BaseVNMWidget.h"

#include "VNMModule.h"

void UBaseVNMWidget::PlayTransitionAnimation(ETransitionEvent Event, const float AnimationPlaybackMultiplier, const FString& CustomEventName, const bool bNotifyOnAnimationComplete)
{
    bBroadcastOnAnimationFinished = bNotifyOnAnimationComplete;

    switch (Event)
    {
    case ETransitionEvent::Dissolve:
    case ETransitionEvent::Punch:
    case ETransitionEvent::HPunch:
    case ETransitionEvent::VPunch:
        {
            PlayEntryAnimation(Event, AnimationPlaybackMultiplier, CustomEventName, bNotifyOnAnimationComplete);
            break;
        }
    default:
        {
            bExitAndEntry = true;
            ActiveAnimationPlaybackMultiplier = AnimationPlaybackMultiplier;    

            PlayExitAnimation(Event, AnimationPlaybackMultiplier, CustomEventName, bNotifyOnAnimationComplete);
            break;
        }
    }

    if (!bBroadcastOnAnimationFinished)
    {
        OnTransitionComplete.Broadcast();
    }
}

void UBaseVNMWidget::PlayExitAnimation(ETransitionEvent Event, const float AnimationPlaybackMultiplier, const FString& CustomEventName, const bool bNotifyOnAnimationComplete)
{
    bBroadcastOnAnimationFinished = bNotifyOnAnimationComplete;
    ActiveTransitionEvent = Event;
    
    switch (Event)
    {
    case ETransitionEvent::Dissolve:
        {
            PlayAnimation(DissolveAnimation,0, 1, EUMGSequencePlayMode::Reverse, AnimationPlaybackMultiplier);
        }
        break;
    case ETransitionEvent::Fade:
        {
            PlayAnimation(FadeAnimation,0, 1, EUMGSequencePlayMode::Reverse, AnimationPlaybackMultiplier);
        }
        break;
    case ETransitionEvent::Zoom:
        {
            PlayAnimation(ZoomAnimation,0, 1, EUMGSequencePlayMode::Reverse, AnimationPlaybackMultiplier);
        }
        break;
    case ETransitionEvent::Punch:
        {
            PlayAnimation(PunchAnimation,0, 1, EUMGSequencePlayMode::Reverse, AnimationPlaybackMultiplier);
        }
        break;
    case ETransitionEvent::VPunch:
        {
            PlayAnimation(VPunchAnimation,0, 1, EUMGSequencePlayMode::Reverse, AnimationPlaybackMultiplier);
        }
        break;
    case ETransitionEvent::HPunch:
        {
            PlayAnimation(HPunchAnimation,0, 1, EUMGSequencePlayMode::Reverse, AnimationPlaybackMultiplier);
        }
        break;
    case ETransitionEvent::Custom:
        {
            UWidgetAnimation* Animation = GetWidgetAnimation(CustomEventName);

            if (!Animation)
            {
                UE_LOG(LogVNM, Error, TEXT("UBaseVNMWidget::PlayExitAnimation: Animation '%s' not found!"), *CustomEventName);
                break;
            }
            ActiveCustomEventName = CustomEventName;
            PlayAnimation(Animation,0, 1, EUMGSequencePlayMode::Reverse, AnimationPlaybackMultiplier);
        }
        break;
    default:
        {
            OnTransitionExitFinished();
        }
        break;
    }

    if (!bBroadcastOnAnimationFinished)
    {
        OnTransitionComplete.Broadcast();
    }
}

void UBaseVNMWidget::PlayEntryAnimation(ETransitionEvent Event, const float AnimationPlaybackMultiplier, const FString& CustomEventName, const bool bNotifyOnAnimationComplete)
{
    bBroadcastOnAnimationFinished = bNotifyOnAnimationComplete;
    ActiveTransitionEvent = Event;
    
    switch (Event)
    {
    case ETransitionEvent::Dissolve:
        {
            PlayAnimation(DissolveAnimation,0, 1, EUMGSequencePlayMode::Forward, AnimationPlaybackMultiplier);
        }
        break;
    case ETransitionEvent::Fade:
        {
            PlayAnimation(FadeAnimation,0, 1, EUMGSequencePlayMode::Forward, AnimationPlaybackMultiplier);
        }
        break;
    case ETransitionEvent::Zoom:
        {
            PlayAnimation(ZoomAnimation,0, 1, EUMGSequencePlayMode::Forward, AnimationPlaybackMultiplier);
        }
        break;
    case ETransitionEvent::Punch:
        {
            PlayAnimation(PunchAnimation,0, 1, EUMGSequencePlayMode::Forward, AnimationPlaybackMultiplier);
        }
        break;
    case ETransitionEvent::VPunch:
        {
            PlayAnimation(VPunchAnimation,0, 1, EUMGSequencePlayMode::Forward, AnimationPlaybackMultiplier);
        }
        break;
    case ETransitionEvent::HPunch:
        {
            PlayAnimation(HPunchAnimation,0, 1, EUMGSequencePlayMode::Forward, AnimationPlaybackMultiplier);
        }
        break;
    case ETransitionEvent::Custom:
        {
            UWidgetAnimation* Animation = GetWidgetAnimation(CustomEventName);

            if (!Animation)
            {
                UE_LOG(LogVNM, Error, TEXT("UBaseVNMWidget::PlayEntryAnimation: Animation '%s' not found!"), *CustomEventName);
                break;
            }
            
            ActiveCustomEventName = CustomEventName;
            PlayAnimation(Animation,0, 1, EUMGSequencePlayMode::Forward, AnimationPlaybackMultiplier);
        }
        break;
    default:
        {
            OnTransitionEntryFinished();
        }
        break;
    }

    if (!bBroadcastOnAnimationFinished)
    {
        OnTransitionComplete.Broadcast();
    }
}

void UBaseVNMWidget::OnTransitionExitFinished()
{
    if (bExitAndEntry)
    {
        bExitAndEntry = false;
        OnMidTransitionPointReached();
        OnMidTransitionReached.Broadcast();
        PlayEntryAnimation(ActiveTransitionEvent, ActiveAnimationPlaybackMultiplier, ActiveCustomEventName, bBroadcastOnAnimationFinished);
    }
    else
    {
        OnTransitionAnimationFinished();
    }
}

void UBaseVNMWidget::OnTransitionEntryFinished()
{
    OnTransitionAnimationFinished();
}

UWidgetAnimation* UBaseVNMWidget::GetWidgetAnimation(const FString& CustomEventName)
{
    auto* Property = GetClass()->FindPropertyByName(*CustomEventName);

    if (!Property->IsA<FObjectProperty>())
    {
        // Error
        UE_LOG(LogVNM, Error, TEXT("UBaseVNMWidget::GetWidgetAnimation: Property by this name not found!"));
        return nullptr;
    }

    auto* ObjectProperty = CastField<FObjectProperty>(Property);

    if (!ObjectProperty)
    {
        // Error
        UE_LOG(LogVNM, Error, TEXT("UBaseVNMWidget::GetWidgetAnimation: Property is not an object!"));
        return nullptr;
    }

    if (ObjectProperty->PropertyClass != UWidgetAnimation::StaticClass())
    {
        // Error
        UE_LOG(LogVNM, Error, TEXT("UBaseVNMWidget::GetWidgetAnimation: Property is not a widget animation!"));
        return nullptr;
    }

    UWidgetAnimation* CustomAnimation = Cast<UWidgetAnimation>(ObjectProperty->GetObjectPropertyValue(ObjectProperty->ContainerPtrToValuePtr<void>(this)));

    if (!CustomAnimation)
    {
        // Error
        UE_LOG(LogVNM, Error, TEXT("UBaseVNMWidget::GetWidgetAnimation: Property is not a widget animation!"));
        return nullptr;
    }

    return CustomAnimation;
}

void UBaseVNMWidget::OnTransitionAnimationFinished()
{
    ActiveTransitionEvent = ETransitionEvent::No_Transition;
    ActiveCustomEventName = TEXT("");

    if (bBroadcastOnAnimationFinished)
    {
        OnTransitionComplete.Broadcast();
    }
}

void UBaseVNMWidget::OnAnimationFinished_Implementation(const UWidgetAnimation* Animation)
{
    if (bExitAndEntry)
    {
        OnTransitionExitFinished();
    }
    else
    {
        OnTransitionAnimationFinished();
    }
}
