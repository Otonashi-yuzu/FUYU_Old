// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/SaveGame.h"

#include "VNMDataStructs.h"

#include "VNMBaseSaveGame.generated.h"

UCLASS(Blueprintable, BlueprintType)
class UVNMBaseSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY()
	FGameSnapshot Snapshot;
};
