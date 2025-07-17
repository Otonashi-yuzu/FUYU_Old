// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YarnCommandBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class YARNUTILS_API UYarnCommandBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category=Yarn, meta=(Latent, LatentInfo = "LatentInfo"))
	static void wait(const float Delay, FLatentActionInfo LatentInfo);
};
