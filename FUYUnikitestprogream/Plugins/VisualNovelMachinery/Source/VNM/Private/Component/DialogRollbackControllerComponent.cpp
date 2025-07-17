// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogRollbackControllerComponent.h"

#include "Character3DControllerComponent.h"
#include "CharacterControllerComponent.h"
#include "DialogImageControllerComponent.h"
#include "MemoryControllerComponent.h"
#include "VNMModule.h"
#include "GameFramework/HUD.h"


// Sets default values for this component's properties
UDialogRollbackControllerComponent::UDialogRollbackControllerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UDialogRollbackControllerComponent::BeginPlay()
{
	Super::BeginPlay();

	AHUD* Hud = Cast<AHUD>(GetOwner());

	if (!Hud)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogControllerComponent::TryStartDialog: Owner is not a HUD!"))
		return;
	}

	DialogControllerComponent = Hud->FindComponentByClass<UDialogControllerComponent>();
	DialogImageControllerComponent = Hud->FindComponentByClass<UDialogImageControllerComponent>();
	CharacterControllerComponent = Hud->FindComponentByClass<UCharacterControllerComponent>();
	MemoryControllerComponent = Hud->GetOwningPlayerController()->FindComponentByClass<UMemoryControllerComponent>();
	Character3DControllerComponent = Hud->GetOwningPlayerController()->FindComponentByClass<UCharacter3DControllerComponent>();
	DialogSceneControllerComponent = Hud->GetOwningPlayerController()->FindComponentByClass<UDialogSceneControllerComponent>();
}

void UDialogRollbackControllerComponent::SetupControllerComponent()
{
	Super::SetupControllerComponent();

	bHasFinishedSetup = true;
}

void UDialogRollbackControllerComponent::CollectSnapshot()
{
#if ENABLE_ROLLBACK
	auto* VNMSettings = UVNMSettings::GetVNMSettings();

	FGameSnapshot Snapshot;

	if (CharacterControllerComponent)
	{
		Snapshot.ActiveDialogData.CharactersDisplayed = CharacterControllerComponent->GetDialogData();
	}

	if (Character3DControllerComponent)
	{
		Snapshot.ActiveDialogData.Characters3DDisplayed = Character3DControllerComponent->GetDialogData();
	}

	TMap<FName, FDialogImageData> CgSubDialogSaveInfos;
	TMap<FName, FDialogImageData> SceneBackgroundSubDialogSaveInfos;
	if (DialogImageControllerComponent)
	{
		Snapshot.ActiveDialogData.CgDisplayed = DialogImageControllerComponent->CollectCgDialogData();
		Snapshot.ActiveDialogData.SceneBackgroundDisplayed = DialogImageControllerComponent->CollectSceneBackgroundDialogData();
	}

	TMap<FName, FDialogSceneData> DialogScenesSubDialogSaveInfos;
	if (DialogSceneControllerComponent)
	{
		Snapshot.ActiveDialogData.CurrentDialogScene = DialogSceneControllerComponent->CollectDialogSceneData();
	}

	if (MemoryControllerComponent)
	{
		Snapshot.CharacterMemories = MemoryControllerComponent->GetCharacterMemoryData();
		Snapshot.DialogMemories = MemoryControllerComponent->GetDialogMemoryData();
	}

	Snapshot.ActiveDialogData.bIsDialogBoxVisible = DialogControllerComponent->IsDialogBoxVisible();
	Snapshot.ActiveDialogData.bIsDialogBoxVisibilityInAutoMode = DialogControllerComponent->IsDialogBoxInAutoMode();
	Snapshot.ActiveDialogData.NodeToContinueGUID = DialogControllerComponent->GetActiveDialogNodeGUID();
	Snapshot.ActiveDialogData.DialogObjectToContinueIn = VNMSettings->GetDialogDefinitionByClass(DialogControllerComponent->GetActiveDialogClass()).DialogueId;
	Snapshot.ActiveDialogData.LastDialogTextDisplayedAtChoice = DialogControllerComponent->GetCurrentDialogText();
	Snapshot.ActiveDialogData.LastTalkingCharacterIdAtChoice = DialogControllerComponent->GetCurrentTalkingCharacterId();
	Snapshot.ActiveDialogData.LocalVariablesValuesJson = DialogControllerComponent->GrabLocalVariablesJsonFromDialogObject(DialogControllerComponent->GetActiveDialog());

	Snapshots.Add(Snapshot);
	if (Snapshots.Num() > 100)
	{
		Snapshots.RemoveAt(0);
	}

	CurrentSnapshotIndex = Snapshots.Num();
#endif
}

void UDialogRollbackControllerComponent::RollbackOneSnapshot()
{
#if ENABLE_ROLLBACK
	if (CurrentSnapshotIndex == 0)
	{
		return;
	}
	
	auto Snapshot = Snapshots.Last();
	Snapshots.RemoveAt(--CurrentSnapshotIndex);

	DialogImageControllerComponent->ApplySnapshot(Snapshot);
	CharacterControllerComponent->ApplySnapshot(Snapshot);
	MemoryControllerComponent->ApplySnapshot(Snapshot);
	Character3DControllerComponent->ApplySnapshot(Snapshot);
	DialogSceneControllerComponent->ApplySnapshot(Snapshot);
	DialogControllerComponent->ApplySnapshot(Snapshot);
#endif
}
