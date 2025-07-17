// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "EnumUtility.h"

#include "CharacterPositioning.generated.h"

UENUM()
enum class ECharacterPositioning : uint8
{
	INHERIT,
	CENTER,
	LEFT,
	RIGHT,
	TRUE_CENTER,
	CUSTOM,

	// Don't add anything after this
	Max
};

namespace CharacterPositioningTools
{
	inline TArray<FString> GetCharacterPositioningStrings()
	{
		TArray<FString> Strings;

		for (uint8 i = 0; i < static_cast<uint8>(ECharacterPositioning::Max); i++)
		{
			Strings.Add(UEnumUtility::EnumToString(TEXT("ECharacterPositioning"), i));
		}

		return Strings;
	}
}