// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "BlueprintEditor.h"
#include "K2Node.h"
#include "Framework/SlateDelegates.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class VNMEDITORCOMMANDS_API SVNMTab : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SVNMTab)
	{
	}

	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs, UBlueprint* InBlueprint, TSharedPtr<FBlueprintEditor> InBlueprintEditor);

protected:
	TWeakPtr<FBlueprintEditor> BlueprintEditor;
	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;

	TSharedRef<SWidget> CreateButton(const FText& ButtonText, const FString& IconName, const FOnClicked& ClickDelegate);
	
	void SpawnNode(TSubclassOf<UK2Node> NodeClass);

	// Dialog Nodes
	FReply OnSpawnDialogTextNodeClicked();
	FReply OnSpawnDialogChoiceNodeClicked();
	FReply OnSpawnDialogInputNodeClicked();
	FReply OnSpawnDialogEndNodeClicked();
	FReply OnSpawnDialogMemoryGetNodeClicked();
	FReply OnSpawnDialogMemorySetNodeClicked();
	FReply OnSpawnDialogWindowNodeClicked();
	FReply OnSpawnDialogWindowPlayAnimationNodeClicked();
	FReply OnSpawnWidgetShowNodeClicked();
	FReply OnSpawnWidgetHideNodeClicked();

	// CG Nodes
	FReply OnSpawnCgShowNodeClicked();
	FReply OnSpawnCgHideNodeClicked();
	FReply OnSpawnCgPlayAnimationClicked();
	FReply OnSpawnCgAddLayerNodeClicked();
	FReply OnSpawnCgRemoveLayerNodeClicked();

	// Scene Background Nodes
	FReply OnSpawnSceneBackgroundShowNodeClicked();
	FReply OnSpawnSceneBackgroundHideNodeClicked();
	FReply OnSpawnSceneBackgroundPlayAnimationNodeClicked();
	FReply OnSpawnSceneBackgroundAddLayerNodeClicked();
	FReply OnSpawnSceneBackgroundRemoveLayerNodeClicked();
	
	// Character Nodes
	FReply OnSpawnCharacterShowNodeClicked();
	FReply OnSpawnCharacterHideNodeClicked();
	FReply OnSpawnCharacterPlayAnimationNodeClicked();
	FReply OnSpawnCharacterRenameNodeClicked();
	FReply OnSpawnCharacterInteractiveRenameNodeClicked();
	FReply OnSpawnCharacterMoveNodeClicked();
	FReply OnSpawnCharacterAddLayerNodeClicked();
	FReply OnSpawnCharacterRemoveLayerNodeClicked();
	FReply OnSpawnCharacterMemoryGetNodeClicked();
	FReply OnSpawnCharacterMemorySetNodeClicked();
	
	// Dialog Scene Nodes
	FReply OnSpawnDialogSceneShowNodeClicked();
	FReply OnSpawnDialogSceneHideNodeClicked();
	FReply OnSpawnDialogSceneSwitchCameraNodeClicked();
	
	// Character 3D Nodes
	FReply OnSpawnCharacter3DShowNodeClicked();
	FReply OnSpawnCharacter3DHideNodeClicked();

	// Dialog Audio Nodes
	FReply OnSpawnDialogAudioPlayBackgroundMusicNodeClicked();
	FReply OnSpawnDialogAudioPlaySoundEffectNodeClicked();
	FReply OnSpawnDialogAudioPlayCharacterVoiceOverNodeClicked();
	FReply OnSpawnDialogAudioPlayDialogVoiceOverNodeClicked();
	FReply OnSpawnDialogAudioStopBackgroundMusicNodeClicked();
	FReply OnSpawnDialogAudioStopSoundEffectNodeClicked();
	FReply OnSpawnDialogAudioStopVoiceOverNodeClicked();
};
