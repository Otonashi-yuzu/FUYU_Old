// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/VNMChoiceActor.h"

// Sets default values
AVNMChoiceActor::AVNMChoiceActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AVNMChoiceActor::BeginPlay()
{
	Super::BeginPlay();
	
	SetActorHiddenInGame(bHideIfNotAvailable);
	
}
void AVNMChoiceActor::On3DChoices_Implementation(const TArray<FText>& Choices)
{
	if (!Choices.ContainsByPredicate([ChoiceId = ChoiceId](const FText& Choice)
	{
		return Choice.ToString() == ChoiceId.ToString();
	}))
	{
		if (bHideIfNotAvailable)
		{
			SetActorHiddenInGame(true);
		}
		return;
	}
	
	if (bHideIfNotAvailable)
	{
		SetActorHiddenInGame(false);
	}
}

void AVNMChoiceActor::On3DChoiceSelected_Implementation()
{
	if (bHideIfNotAvailable)
	{
		SetActorHiddenInGame(true);
	}
}

void AVNMChoiceActor::NotifyActorOnClicked(FKey ButtonPressed)
{
	Super::NotifyActorOnClicked(ButtonPressed);

	Select3DChoice(ChoiceId);
}

void AVNMChoiceActor::NotifyActorOnInputTouchBegin(const ETouchIndex::Type FingerIndex)
{
	Super::NotifyActorOnInputTouchBegin(FingerIndex);

	Select3DChoice(ChoiceId);
}