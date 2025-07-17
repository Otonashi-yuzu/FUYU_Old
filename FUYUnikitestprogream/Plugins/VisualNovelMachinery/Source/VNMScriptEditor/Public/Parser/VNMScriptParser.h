// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "K2Node_IfThenElse.h"
#include "UObject/Object.h"
#include "VNMScriptParser.generated.h"

class UCharacterInteractiveRenameNode;
class UCharacterRenameNode;
class UWidgetHideNode;
class UWidgetShowNode;
class UCharacterMoveNode;
enum class EMemoryType : uint8;
class UCharacterMemorySetNode;
class UCharacterMemoryGetNode;
class UDialogMemorySetNode;
class UDialogMemoryGetNode;
class UK2Node_Knot;
class UDialogChoiceNode;
class UDialogAudioStopVoiceOverNode;
class UDialogAudioStopSoundEffectNode;
class UDialogAudioStopBGMNode;
class UDialogAudioPlayDialogVoiceOverNode;
class UDialogAudioPlayCharacterVoiceOverNode;
class UDialogAudioPlaySoundEffectNode;
class UDialogAudioPlayBGMNode;
class UDialogSceneSwitchCameraNode;
class UDialogSceneHideNode;
class UDialogSceneShowNode;
class UCharacter3DHideNode;
class UCharacter3DShowNode;
class USceneBackgroundRemoveLayerNode;
class USceneBackgroundAddLayerNode;
class USceneBackgroundHideNode;
class USceneBackgroundShowNode;
class UCgRemoveLayerNode;
class UCgAddLayerNode;
class UCgHideNode;
class UCgShowNode;
class UCharacterRemoveLayerNode;
class UCharacterAddLayerNode;
class UCharacterHideNode;
class UCharacterShowNode;
class UDialogEndNode;
class UDialogTextNode;
class UDialogWindowNode;
class UDialogStartNode;
class UDialogBlueprint;

UENUM(BlueprintType)
enum class EGraphAlignment : uint8
{
	Top,
	Center,
	Bottom
};

/**
 * 
 */
UCLASS()
class VNMSCRIPTEDITOR_API UVNMScriptParser : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static void CreateDialogBlueprintFromStringArray(UDialogBlueprint* DialogBlueprint, UDialogStartNode* StartNode, const TArray<FString>& DialogLines);
	static void FormatDialogBlueprint(UDialogBlueprint* DialogBlueprint, UDialogStartNode* StartNode);

protected:


	static TArray<class UEdGraphPin*> GetOutputExecutionPins(class UEdGraphNode* Node);
	static TArray<class UEdGraphPin*> GetInputBooleanPins(class UEdGraphNode* Node);

	static FString AddVariableToBlueprint(UEdGraph* Graph, const FString& Line);
	
	/**
	 * Variable Nodes
	 */

	static UK2Node_VariableGet* CreateVariableGetNodeFromLine(UEdGraph* Graph, const FString& VariableName);
	static UK2Node_VariableSet* CreateVariableSetNodeFromLine(UEdGraph* Graph, const FString& Line);

	/**
	 * Flow Nodes
	 */

	static UK2Node_IfThenElse* CreateBranchNodeFromLine(UEdGraph* Graph, const FString& Line, const TArray<FString>& Variables, TArray<FString>& Labels);
	
	/**
	 * Dialog Nodes
	 */
	
	static UDialogTextNode* CreateDialogTextNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UDialogEndNode* CreateDialogEndNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UDialogWindowNode* CreateDialogWindowNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UWidgetShowNode* CreateWidgetShowNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UWidgetHideNode* CreateWidgetHideNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UDialogChoiceNode* CreateDialogChoiceNodeFromLine(UEdGraph* Graph, const FString& Line, TArray<FString>& Labels);
	static UDialogChoiceNode* CreateDialogChoiceConditionalNodeFromLine(UEdGraph* Graph, const FString& Line, TArray<FString>& Labels);
	static UDialogMemoryGetNode* CreateDialogMemoryGetNodeFromLine(UEdGraph* Graph, const FString& Line, const EMemoryType MemoryType);
	static UDialogMemorySetNode* CreateDialogMemorySetNodeFromLine(UEdGraph* Graph, const FString& Line);
	
	/**
	 * Character Nodes
	 */
	
	static UCharacterShowNode* CreateCharacterShowNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UCharacterHideNode* CreateCharacterHideNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UCharacterMoveNode* CreateCharacterMoveNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UCharacterRenameNode* CreateCharacterRenameNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UCharacterInteractiveRenameNode* CreateCharacterInteractiveRenameNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UCharacterAddLayerNode* CreateCharacterAddLayerNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UCharacterRemoveLayerNode* CreateCharacterRemoveLayerNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UCharacterMemoryGetNode* CreateCharacterMemoryGetNodeFromLine(UEdGraph* Graph, const FString& Line, const EMemoryType MemoryType);
	static UCharacterMemorySetNode* CreateCharacterMemorySetNodeFromLine(UEdGraph* Graph, const FString& Line);
	
	/**
	 * Character 3D Nodes
	 */
	
	static UCharacter3DShowNode* CreateCharacter3DShowNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UCharacter3DHideNode* CreateCharacter3DHideNodeFromLine(UEdGraph* Graph, const FString& Line);
	
	/**
	 * CG Nodes
	 */
	
	static UCgShowNode* CreateCgShowNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UCgHideNode* CreateCgHideNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UCgAddLayerNode* CreateCgAddLayerNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UCgRemoveLayerNode* CreateCgRemoveLayerNodeFromLine(UEdGraph* Graph, const FString& Line);
	
	/**
	 * Scene Background Nodes
	 */
	
	static USceneBackgroundShowNode* CreateSceneBackgroundShowNodeFromLine(UEdGraph* Graph, const FString& Line);
	static USceneBackgroundHideNode* CreateSceneBackgroundHideNodeFromLine(UEdGraph* Graph, const FString& Line);
	static USceneBackgroundAddLayerNode* CreateSceneBackgroundAddLayerNodeFromLine(UEdGraph* Graph, const FString& Line);
	static USceneBackgroundRemoveLayerNode* CreateSceneBackgroundRemoveLayerNodeFromLine(UEdGraph* Graph, const FString& Line);
	
	/**
	 * Dialog Scene Nodes
	 */
	
	static UDialogSceneShowNode* CreateDialogSceneShowNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UDialogSceneHideNode* CreateDialogSceneHideNodeFromLine(UEdGraph* Graph, const FString& Line);
	static UDialogSceneSwitchCameraNode* CreateDialogSceneSwitchCameraNodeFromLine(UEdGraph* Graph, const FString& Line);
	
	/**
	 * Dialog Audio Nodes
	 */
	
	static UDialogAudioPlayBGMNode* CreateDialogAudioPlayBGMNodeFromLine(UEdGraph* Graph, const FString& Line);	
	static UDialogAudioPlaySoundEffectNode* CreateDialogAudioPlaySoundEffectNodeFromLine(UEdGraph* Graph, const FString& Line);	
	static UDialogAudioPlayCharacterVoiceOverNode* CreateDialogAudioPlayCharacterVoiceOverNodeFromLine(UEdGraph* Graph, const FString& Line);	
	static UDialogAudioPlayDialogVoiceOverNode* CreateDialogAudioPlayDialogVoiceOverNodeFromLine(UEdGraph* Graph, const FString& Line);	
	static UDialogAudioStopBGMNode* CreateDialogAudioStopBGMNodeFromLine(UEdGraph* Graph, const FString& Line);	
	static UDialogAudioStopSoundEffectNode* CreateDialogAudioStopSoundEffectNodeFromLine(UEdGraph* Graph, const FString& Line);	
	static UDialogAudioStopVoiceOverNode* CreateDialogAudioStopVoiceOverNodeFromLine(UEdGraph* Graph, const FString& Line);	
};
