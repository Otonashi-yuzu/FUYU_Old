// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/Object.h"
#include "EnumUtility.generated.h"

/**
 * 
 */
UCLASS()
class VNM_API UEnumUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static FString EnumToString(const TCHAR* Enum, int32 EnumValue);
	static FText EnumToDisplayString(const TCHAR* Enum, int32 EnumValue);
};
