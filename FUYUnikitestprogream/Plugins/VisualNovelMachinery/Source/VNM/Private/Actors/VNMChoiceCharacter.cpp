// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/VNMChoiceCharacter.h"

// Sets default values
AVNMChoiceCharacter::AVNMChoiceCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AVNMChoiceCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	SetActorHiddenInGame(bHideIfNotAvailable);
}

void AVNMChoiceCharacter::On3DChoices_Implementation(const TArray<FText>& Choices)
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

void AVNMChoiceCharacter::On3DChoiceSelected_Implementation()
{
	if (bHideIfNotAvailable)
	{
		SetActorHiddenInGame(true);
	}
}

void AVNMChoiceCharacter::NotifyActorOnClicked(FKey ButtonPressed)
{
	Super::NotifyActorOnClicked(ButtonPressed);

	Select3DChoice(ChoiceId);
}

void AVNMChoiceCharacter::NotifyActorOnInputTouchBegin(const ETouchIndex::Type FingerIndex)
{
	Super::NotifyActorOnInputTouchBegin(FingerIndex);

	Select3DChoice(ChoiceId);
}

