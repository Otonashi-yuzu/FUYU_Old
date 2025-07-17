// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "EnumUtility.h"

#include "TransitionEvent.generated.h"

UENUM(BlueprintType)
enum class ETransitionEvent : uint8
{
    No_Transition,
    Fade,
    Dissolve,
    Zoom,
    Punch,
    VPunch,
    HPunch,

    // Custom
    Custom,

    // Don't add anything after this
    Max
};

namespace TransitionEventTools
{
    inline TArray<FString> GetTransitionEventStrings()
    {
        TArray<FString> Strings;

        for (uint8 i = 0; i < static_cast<uint8>(ETransitionEvent::Max); i++)
        {
            Strings.Add(UEnumUtility::EnumToString(TEXT("ETransitionEvent"), i));
        }

        return Strings;
    }
}