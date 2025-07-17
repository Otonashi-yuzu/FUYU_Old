// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VNMChoiceObjectInterface.h"
#include "GameFramework/Actor.h"
#include "VNMChoiceActor.generated.h"

UCLASS()
class VNM_API AVNMChoiceActor : public AActor, public IVNMChoiceObjectInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVNMChoiceActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void On3DChoices_Implementation(const TArray<FText>& Choices) override;
	virtual void On3DChoiceSelected_Implementation() override;

	virtual void NotifyActorOnClicked(FKey ButtonPressed) override;
	virtual void NotifyActorOnInputTouchBegin(const ETouchIndex::Type FingerIndex) override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Choices)
	FName ChoiceId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Choices)
	bool bHideIfNotAvailable = true;

};


