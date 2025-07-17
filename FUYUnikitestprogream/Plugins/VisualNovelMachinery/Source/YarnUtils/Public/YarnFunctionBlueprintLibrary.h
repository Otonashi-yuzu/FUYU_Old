// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YarnFunctionBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class YARNUTILS_API UYarnFunctionBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category=Yarn)
	static float random();

	UFUNCTION(BlueprintPure, Category=Yarn)
	static float random_range(const float a, const float b);

	UFUNCTION(BlueprintPure, Category=Yarn)
	static float dice(const float sides);

	UFUNCTION(BlueprintPure, Category=Yarn)
	static float round(const float n);

	UFUNCTION(BlueprintPure, Category=Yarn)
	static float round_places(const float n, const float places);

	UFUNCTION(BlueprintPure, Category=Yarn)
	static float floor(const float n);

	UFUNCTION(BlueprintPure, Category=Yarn)
	static float ceil(const float n);

	UFUNCTION(BlueprintPure, Category=Yarn)
	static float inc(const float n);

	UFUNCTION(BlueprintPure, Category=Yarn)
	static float dec(const float n);

	UFUNCTION(BlueprintPure, Category=Yarn)
	static float decimal(const float n);

	UFUNCTION(BlueprintPure, Category=Yarn, DisplayName="int")
	static float integer(const float n);
};
