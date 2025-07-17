#pragma once

#include "CoreMinimal.h"
#include "EnumUtility.h"

#include "CharacterFlipState.generated.h"

UENUM(BlueprintType)
enum class ECharacterFlipState : uint8
{
	INHERIT,
	HORIZONTAL,
	VERTICAL,
	BOTH,

	// Don't add anything after this
	Max
};

namespace CharacterFlipStateTools
{
	inline TArray<FString> GetCharacterFlipStateStrings()
	{
		TArray<FString> Strings;

		for (uint8 i = 0; i < static_cast<uint8>(ECharacterFlipState::Max); i++)
		{
			Strings.Add(UEnumUtility::EnumToString(TEXT("ECharacterFlipState"), i));
		}

		return Strings;
	}
}