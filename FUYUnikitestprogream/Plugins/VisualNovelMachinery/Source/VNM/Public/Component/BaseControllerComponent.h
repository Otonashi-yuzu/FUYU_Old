// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VNMDataStructs.h"
#include "BaseControllerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VNM_API UBaseControllerComponent : public UActorComponent
{
	GENERATED_BODY()
public:

	bool HasFinishedSetup() const { return bHasFinishedSetup; }
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void SetupControllerComponent() {}

	virtual bool ApplySnapshot(const FGameSnapshot& Snapshot) { return true; }
	
	bool bHasFinishedSetup = false;			
};
