// Copyright (c) 2022 Al_Fe

#include "BaseControllerComponent.h"

void UBaseControllerComponent::BeginPlay()
{
	Super::BeginPlay();

	SetupControllerComponent();
}

