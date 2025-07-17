// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseControllerComponent.h"
#include "VNMDataStructs.h"
#include "DialogRollbackControllerComponent.generated.h"

UCLASS( Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VNM_API UDialogRollbackControllerComponent : public UBaseControllerComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDialogRollbackControllerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	virtual void SetupControllerComponent() override;

	void CollectSnapshot();

	UFUNCTION(BlueprintCallable, Category=DialogRollback)
	void RollbackOneSnapshot();

protected:

	UPROPERTY()
	int32 CurrentSnapshotIndex;
	
	UPROPERTY(BlueprintReadOnly, Category=DialogRollback)
	TArray<FGameSnapshot> Snapshots;

	UPROPERTY()
	class UDialogImageControllerComponent* DialogImageControllerComponent;

	UPROPERTY()
	class UCharacterControllerComponent* CharacterControllerComponent;

	UPROPERTY()
	class UMemoryControllerComponent* MemoryControllerComponent;

	UPROPERTY()
	class UCharacter3DControllerComponent* Character3DControllerComponent;

	UPROPERTY()
	class UDialogSceneControllerComponent* DialogSceneControllerComponent;

	UPROPERTY()
	class UDialogControllerComponent* DialogControllerComponent;
};
