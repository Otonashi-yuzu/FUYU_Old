// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseImageChoiceButton.h"

void UBaseImageChoiceButton::NativeMenuButtonClicked()
{
	Super::NativeMenuButtonClicked();
    OnChoiceButtonClicked.Broadcast(this);
}
