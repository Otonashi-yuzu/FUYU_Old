// Copyright (c) 2022 Al_Fe


#include "SVNMTab.h"

#include "CgAddLayerNode.h"
#include "CgHideNode.h"
#include "CgPlayAnimationNode.h"
#include "CgRemoveLayerNode.h"
#include "CgShowNode.h"
#include "Character3DHideNode.h"
#include "Character3DShowNode.h"
#include "CharacterAddLayerNode.h"
#include "CharacterHideNode.h"
#include "CharacterInteractiveRenameNode.h"
#include "CharacterMemoryGetNode.h"
#include "CharacterMemorySetNode.h"
#include "CharacterMoveNode.h"
#include "CharacterPlayAnimationNode.h"
#include "CharacterRemoveLayerNode.h"
#include "CharacterRenameNode.h"
#include "CharacterShowNode.h"
#include "DialogAudioPlayBGMNode.h"
#include "DialogAudioPlaySoundEffectNode.h"
#include "DialogAudioPlayCharacterVoiceOverNode.h"
#include "DialogAudioPlayDialogVoiceOverNode.h"
#include "DialogAudioStopBGMNode.h"
#include "DialogAudioStopSoundEffectNode.h"
#include "DialogAudioStopVoiceOverNode.h"
#include "DialogChoiceNode.h"
#include "DialogEndNode.h"
#include "DialogInputNode.h"
#include "DialogMemoryGetNode.h"
#include "DialogMemorySetNode.h"
#include "DialogPlayAnimationNode.h"
#include "DialogSceneHideNode.h"
#include "DialogSceneShowNode.h"
#include "DialogSceneSwitchCameraNode.h"
#include "DialogTextNode.h"
#include "DialogWindowNode.h"
#include "SlateOptMacros.h"
#include "EditorStyle.h"
#include "SceneBackgroundAddLayerNode.h"
#include "SceneBackgroundHideNode.h"
#include "SceneBackgroundPlayAnimationNode.h"
#include "SceneBackgroundRemoveLayerNode.h"
#include "SceneBackgroundShowNode.h"
#include "WidgetShowNode.h"
#include "WidgetHideNode.h"
#include "EdGraph/EdGraph.h"
#include "Engine/Blueprint.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SUniformGridPanel.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SVNMTab::Construct(const FArguments& InArgs, UBlueprint* InBlueprint, TSharedPtr<FBlueprintEditor> InBlueprintEditor)
{
	BlueprintEditor = InBlueprintEditor;
	Blueprint = InBlueprint;
    Graph = Blueprint->GetLastEditedUberGraph();
	
	ChildSlot
	[
		// Populate the widget
		SNew(SScrollBox)
		+ SScrollBox::Slot()
		.VAlign(VAlign_Top)
		.HAlign(HAlign_Fill)
		.Padding(5.f)
		[
			SNew(SExpandableArea)
			.AreaTitle(FText::FromString(TEXT("Dialog Nodes")))
			.BorderBackgroundColor(FLinearColor::Black)
			.BodyBorderBackgroundColor(FLinearColor(FColor(200.f, 200.f, 200.f)))
			.BodyContent()
			[
				SNew(SWrapBox)
				.UseAllottedSize(true)
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Text")), TEXT("ToolBarIcons.SpawnTextNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogTextNodeClicked))
				]
					
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Choice")), TEXT("ToolBarIcons.SpawnChoiceNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogChoiceNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Player Input")), TEXT("ToolBarIcons.SpawnTextNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogInputNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("End")), TEXT("ToolBarIcons.SpawnDialogEndNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogEndNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Window Control")), TEXT("ToolBarIcons.SpawnWindowNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogWindowNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Play Window Animation")), TEXT("ToolBarIcons.SpawnWindowNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogWindowPlayAnimationNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Widget Show")), TEXT("ToolBarIcons.SpawnWindowNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnWidgetShowNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Widget Hide")), TEXT("ToolBarIcons.SpawnWindowNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnWidgetHideNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Memory Get")), TEXT("ToolBarIcons.MemoryNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogMemoryGetNodeClicked))
				]				
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Memory Set")), TEXT("ToolBarIcons.MemoryNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogMemorySetNodeClicked))
				]
			]
		]
		
		+ SScrollBox::Slot()
		.VAlign(VAlign_Top)
		.HAlign(HAlign_Fill)
		.Padding(5.f)
		[
			SNew(SExpandableArea)
			.AreaTitle(FText::FromString(TEXT("Character Nodes")))
			.BorderBackgroundColor(FLinearColor::Black)
			.BodyBorderBackgroundColor(FLinearColor(FColor(64.f, 64.f, 64.f)))
			.BodyContent()
			[
				SNew(SWrapBox)
				.UseAllottedSize(true)
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Show")), TEXT("ToolBarIcons.SpawnCharacterNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCharacterShowNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Hide")), TEXT("ToolBarIcons.SpawnCharacterNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCharacterHideNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Play Animation")), TEXT("ToolBarIcons.SpawnCharacterNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCharacterPlayAnimationNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Rename")), TEXT("ToolBarIcons.SpawnCharacterNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCharacterRenameNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Interactive Rename")), TEXT("ToolBarIcons.SpawnCharacterNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCharacterInteractiveRenameNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Move")), TEXT("ToolBarIcons.SpawnCharacterNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCharacterMoveNodeClicked))
				]	
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Add Layer")), TEXT("ToolBarIcons.SpawnCharacterNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCharacterAddLayerNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Remove Layer")), TEXT("ToolBarIcons.SpawnCharacterNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCharacterRemoveLayerNodeClicked))
				]
			
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Memory Get")), TEXT("ToolBarIcons.MemoryNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCharacterMemoryGetNodeClicked))
				]				
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Memory Set")), TEXT("ToolBarIcons.MemoryNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCharacterMemorySetNodeClicked))
				]
			]
		]
		
		+ SScrollBox::Slot()
		.VAlign(VAlign_Top)
		.HAlign(HAlign_Fill)
		.Padding(5.f)
		[
			SNew(SExpandableArea)
			.AreaTitle(FText::FromString(TEXT("Scene Background Nodes")))
			.BorderBackgroundColor(FLinearColor::Black)
			.BodyBorderBackgroundColor(FLinearColor(FColor(64.f, 64.f, 64.f)))
			.BodyContent()
			[
				SNew(SWrapBox)
				.UseAllottedSize(true)
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Show")), TEXT("ToolBarIcons.SpawnSceneBackgroundNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnSceneBackgroundShowNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Hide")), TEXT("ToolBarIcons.SpawnSceneBackgroundNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnSceneBackgroundHideNodeClicked))
				]
			
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Play Animation")), TEXT("ToolBarIcons.SpawnSceneBackgroundNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnSceneBackgroundPlayAnimationNodeClicked))
				]
			
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Add Layer")), TEXT("ToolBarIcons.SpawnSceneBackgroundNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnSceneBackgroundAddLayerNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Remove Layer")), TEXT("ToolBarIcons.SpawnSceneBackgroundNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnSceneBackgroundRemoveLayerNodeClicked))
				]
			]
		]
	
		+ SScrollBox::Slot()
		.VAlign(VAlign_Top)
		.HAlign(HAlign_Fill)
		.Padding(5.f)
		[
			SNew(SExpandableArea)
			.AreaTitle(FText::FromString(TEXT("CG Nodes")))
			.BorderBackgroundColor(FLinearColor::Black)
			.BodyBorderBackgroundColor(FLinearColor(FColor(64.f, 64.f, 64.f)))
			.BodyContent()
			[
				SNew(SWrapBox)
				.UseAllottedSize(true)
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Show")), TEXT("ToolBarIcons.SpawnCgNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCgShowNodeClicked))
				]
			
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Hide")), TEXT("ToolBarIcons.SpawnCgNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCgHideNodeClicked))
				]
			
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Play Animation")), TEXT("ToolBarIcons.SpawnCgNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCgPlayAnimationClicked))
				]
			
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Add Layer")), TEXT("ToolBarIcons.SpawnCgNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCgAddLayerNodeClicked))
				]
			
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Remove Layer")), TEXT("ToolBarIcons.SpawnCgNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCgRemoveLayerNodeClicked))
				]
			]
		]

		+ SScrollBox::Slot()
		.VAlign(VAlign_Top)
		.HAlign(HAlign_Fill)
		.Padding(5.f)
		[
			SNew(SExpandableArea)
			.AreaTitle(FText::FromString(TEXT("Dialog Audio Nodes")))
			.BorderBackgroundColor(FLinearColor::Black)
			.BodyBorderBackgroundColor(FLinearColor(FColor(64.f, 64.f, 64.f)))
			.BodyContent()
			[
				SNew(SWrapBox)
				.UseAllottedSize(true)
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Play Background Music")), TEXT("ToolBarIcons.AudioNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogAudioPlayBackgroundMusicNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Stop Background Music")), TEXT("ToolBarIcons.AudioNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogAudioStopBackgroundMusicNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Play Sound Effect")), TEXT("ToolBarIcons.AudioNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogAudioPlaySoundEffectNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Stop Sound Effect")), TEXT("ToolBarIcons.AudioNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogAudioStopSoundEffectNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Play Character Voice Over")), TEXT("ToolBarIcons.AudioNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogAudioPlayCharacterVoiceOverNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Play Dialog Voice Over")), TEXT("ToolBarIcons.AudioNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogAudioPlayDialogVoiceOverNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Stop Voice Over")), TEXT("ToolBarIcons.AudioNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogAudioStopVoiceOverNodeClicked))
				]
			]
		]
		
		+ SScrollBox::Slot()
		.VAlign(VAlign_Top)
		.HAlign(HAlign_Fill)
		.Padding(5.f)
		[
			SNew(SExpandableArea)
			.AreaTitle(FText::FromString(TEXT("Dialog Scene Nodes")))
			.BorderBackgroundColor(FLinearColor::Black)
			.BodyBorderBackgroundColor(FLinearColor(FColor(64.f, 64.f, 64.f)))
			.BodyContent()
			[
				SNew(SWrapBox)
				.UseAllottedSize(true)
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Show")), TEXT("ToolBarIcons.SpawnSceneBackgroundNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogSceneShowNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Hide")), TEXT("ToolBarIcons.SpawnSceneBackgroundNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogSceneHideNodeClicked))
				]
				
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Switch Camera")), TEXT("ToolBarIcons.SpawnSceneBackgroundNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnDialogSceneSwitchCameraNodeClicked))
				]
			]
		]
		
		+ SScrollBox::Slot()
		.VAlign(VAlign_Top)
		.HAlign(HAlign_Fill)
		.Padding(5.f)
		[
			SNew(SExpandableArea)
			.AreaTitle(FText::FromString(TEXT("Character 3D Nodes")))
			.BorderBackgroundColor(FLinearColor::Black)
			.BodyBorderBackgroundColor(FLinearColor(FColor(64.f, 64.f, 64.f)))
			.BodyContent()
			[
				SNew(SWrapBox)
				.UseAllottedSize(true)
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Show")), TEXT("ToolBarIcons.SpawnCharacterNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCharacter3DShowNodeClicked))
				]
			
				+ SWrapBox::Slot()
				[
					CreateButton(FText::FromString(TEXT("Hide")), TEXT("ToolBarIcons.SpawnCharacterNode"), FOnClicked::CreateSP(this, &SVNMTab::OnSpawnCharacter3DHideNodeClicked))
				]
			]
		]
	];
}

TSharedRef<SWidget> SVNMTab::CreateButton(const FText& ButtonText, const FString& IconName, const FOnClicked& ClickDelegate)
{
	return SNew(SButton)
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
	.ButtonStyle(&FAppStyle::Get().GetWidgetStyle<FButtonStyle>(TEXT("FlatButton")))
#else
	.ButtonStyle(&FEditorStyle::Get().GetWidgetStyle<FButtonStyle>(TEXT("FlatButton")))
#endif
	.OnClicked(ClickDelegate)
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(SBox)
			[
				SNew(SImage)
				.Image(FSlateStyleRegistry::FindSlateStyle("VNM")->GetBrush(*IconName))
			]
		]
			
		+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock)
			.Text(ButtonText)
			.ColorAndOpacity(FLinearColor::White)
		]
	];
}

void SVNMTab::SpawnNode(TSubclassOf<UK2Node> NodeClass)
{
	auto* NewNode = NewObject<UK2Node>(Graph, NodeClass);
	NewNode->SetFlags(RF_Transactional);
    
	Graph->Modify();

	FVector2D NewNodePos;

	if (Graph->Nodes.Num() == 0)
	{
		NewNodePos = Graph->GetGoodPlaceForNewNode();
	}
	else
	{
		auto LastAddedNode = Graph->Nodes[Graph->Nodes.Num()-1];
		FVector2D NodePosTopRight = FVector2D(LastAddedNode->NodePosX + LastAddedNode->NodeWidth, LastAddedNode->NodePosY);
		NewNodePos = NodePosTopRight + FVector2D(256.f, 256.f);
	}

	Graph->AddNode(NewNode, true, true);
	NewNode->CreateNewGuid();
	NewNode->PostPlacedNewNode();
	NewNode->AllocateDefaultPins();
	NewNode->NodePosX = NewNodePos.X;
	NewNode->NodePosY = NewNodePos.Y;
	NewNode->SnapToGrid(16);

	auto Editor = BlueprintEditor.Pin();

	if (Editor)
	{
		Editor->JumpToNode(NewNode);
	}
}

FReply SVNMTab::OnSpawnDialogTextNodeClicked()
{
	SpawnNode(UDialogTextNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogChoiceNodeClicked()
{
	SpawnNode(UDialogChoiceNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogInputNodeClicked()
{
	SpawnNode(UDialogInputNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogEndNodeClicked()
{
	SpawnNode(UDialogEndNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogMemoryGetNodeClicked()
{
	SpawnNode(UDialogMemoryGetNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogMemorySetNodeClicked()
{
	SpawnNode(UDialogMemorySetNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogWindowNodeClicked()
{
	SpawnNode(UDialogWindowNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogWindowPlayAnimationNodeClicked()
{
	SpawnNode(UDialogPlayAnimationNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnWidgetShowNodeClicked()
{
	SpawnNode(UWidgetShowNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnWidgetHideNodeClicked()
{
	SpawnNode(UWidgetHideNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCgShowNodeClicked()
{
	SpawnNode(UCgShowNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCgHideNodeClicked()
{
	SpawnNode(UCgHideNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCgPlayAnimationClicked()
{
	SpawnNode(UCgPlayAnimationNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCgAddLayerNodeClicked()
{
	SpawnNode(UCgAddLayerNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCgRemoveLayerNodeClicked()
{
	SpawnNode(UCgRemoveLayerNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnSceneBackgroundShowNodeClicked()
{
	SpawnNode(USceneBackgroundShowNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnSceneBackgroundHideNodeClicked()
{
	SpawnNode(USceneBackgroundHideNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnSceneBackgroundPlayAnimationNodeClicked()
{
	SpawnNode(USceneBackgroundPlayAnimationNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnSceneBackgroundAddLayerNodeClicked()
{
	SpawnNode(USceneBackgroundAddLayerNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnSceneBackgroundRemoveLayerNodeClicked()
{
	SpawnNode(USceneBackgroundRemoveLayerNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCharacterShowNodeClicked()
{
	SpawnNode(UCharacterShowNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCharacterHideNodeClicked()
{
	SpawnNode(UCharacterHideNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCharacterPlayAnimationNodeClicked()
{
	SpawnNode(UCharacterPlayAnimationNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCharacterRenameNodeClicked()
{
	SpawnNode(UCharacterRenameNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCharacterInteractiveRenameNodeClicked()
{
	SpawnNode(UCharacterInteractiveRenameNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCharacterMoveNodeClicked()
{
	SpawnNode(UCharacterMoveNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCharacterAddLayerNodeClicked()
{
	SpawnNode(UCharacterAddLayerNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCharacterRemoveLayerNodeClicked()
{
	SpawnNode(UCharacterRemoveLayerNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCharacterMemoryGetNodeClicked()
{
	SpawnNode(UCharacterMemoryGetNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCharacterMemorySetNodeClicked()
{
	SpawnNode(UCharacterMemorySetNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogSceneShowNodeClicked()
{
	SpawnNode(UDialogSceneShowNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogSceneHideNodeClicked()
{
	SpawnNode(UDialogSceneHideNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogSceneSwitchCameraNodeClicked()
{
	SpawnNode(UDialogSceneSwitchCameraNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCharacter3DShowNodeClicked()
{
	SpawnNode(UCharacter3DShowNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnCharacter3DHideNodeClicked()
{
	SpawnNode(UCharacter3DHideNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogAudioPlayBackgroundMusicNodeClicked()
{
	SpawnNode(UDialogAudioPlayBGMNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogAudioPlaySoundEffectNodeClicked()
{
	SpawnNode(UDialogAudioPlaySoundEffectNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogAudioPlayCharacterVoiceOverNodeClicked()
{
	SpawnNode(UDialogAudioPlayCharacterVoiceOverNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogAudioPlayDialogVoiceOverNodeClicked()
{
	SpawnNode(UDialogAudioPlayDialogVoiceOverNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogAudioStopBackgroundMusicNodeClicked()
{
	SpawnNode(UDialogAudioStopBGMNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogAudioStopSoundEffectNodeClicked()
{
	SpawnNode(UDialogAudioStopSoundEffectNode::StaticClass());
	return FReply::Handled();
}

FReply SVNMTab::OnSpawnDialogAudioStopVoiceOverNodeClicked()
{
	SpawnNode(UDialogAudioStopVoiceOverNode::StaticClass());
	return FReply::Handled();
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
