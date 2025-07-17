// Fill out your copyright notice in the Description page of Project Settings.


#include "YarnCommandBlueprintLibrary.h"

#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"

void UYarnCommandBlueprintLibrary::wait(const float Delay, FLatentActionInfo LatentInfo)
{
	UKismetSystemLibrary::Delay(GWorld, Delay, LatentInfo);
}
