// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/VNMChoiceObjectInterface.h"

#include "DialogControllerComponent.h"
#include "VNMModule.h"
#include "GameFramework/HUD.h"
#include "Kismet/GameplayStatics.h"

void IVNMChoiceObjectInterface::Select3DChoice(const FName& Choice)
{
	auto* Actor = Cast<AActor>(this);

	if (!Actor)
	{
		UE_LOG(LogVNM, Error, TEXT("IVNMChoiceObjectInterface::On3DChoiceSelected: VNM Choice Object Interface needs to be used on a class that derives from an Actor!"))
		return;
	}

	auto* PlayerController = UGameplayStatics::GetPlayerController(Actor, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::DisplayDialogText: Player Controller not found!"));
		return;
	}

	auto* Hud = PlayerController->GetHUD();

	if (!Hud)
	{
		UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::DisplayDialogText: Hud not found!"));
		return;
	}

	auto* DialogController = Cast<UDialogControllerComponent>(Hud->GetComponentByClass(UDialogControllerComponent::StaticClass()));

	if (!DialogController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::DisplayDialogText: Dialog Controller not found!"));
		return;
	}

	DialogController->MoveToNextDialogAfterChoice(Choice);
}
