// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChoiceData.h"
#include "Engine/DataAsset.h"
#include "DialogScenesDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class VNMCHOICEGRAPH_API UDialogScenesDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY()
	FDialogData ScenesData;

#if WITH_EDITOR
	
	UFUNCTION(CallInEditor)
	void ConstructScenesData();
#endif
};
