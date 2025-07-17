// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/VNMChoicePawn.h"

// Sets default values
AVNMChoicePawn::AVNMChoicePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AVNMChoicePawn::BeginPlay()
{
	Super::BeginPlay();
	
	SetActorHiddenInGame(bHideIfNotAvailable);
}

void AVNMChoicePawn::On3DChoices_Implementation(const TArray<FText>& Choices)
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

void AVNMChoicePawn::On3DChoiceSelected_Implementation()
{
	if (bHideIfNotAvailable)
	{
		SetActorHiddenInGame(true);
	}
}

void AVNMChoicePawn::NotifyActorOnClicked(FKey ButtonPressed)
{
	Super::NotifyActorOnClicked(ButtonPressed);

	Select3DChoice(ChoiceId);
}

void AVNMChoicePawn::NotifyActorOnInputTouchBegin(const ETouchIndex::Type FingerIndex)
{
	Super::NotifyActorOnInputTouchBegin(FingerIndex);

	Select3DChoice(ChoiceId);
}

