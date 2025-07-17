// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "YarnStructs.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YarnParser.generated.h"

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
class USceneBackgroundRemoveLayerNode;
class USceneBackgroundAddLayerNode;
class USceneBackgroundHideNode;
class USceneBackgroundShowNode;
class UCgRemoveLayerNode;
class UCgAddLayerNode;
class UCgHideNode;
class UCgShowNode;
class UCharacter3DHideNode;
class UCharacter3DShowNode;
class UDialogMemorySetNode;
class UDialogMemoryGetNode;
class UWidgetHideNode;
class UWidgetShowNode;
class UDialogWindowNode;
class UK2Node_Knot;
class UK2Node_IfThenElse;
class UK2Node_CallFunction;
enum class EMemoryType : uint8;
class UCharacterMemorySetNode;
class UCharacterMemoryGetNode;
class UCharacterRemoveLayerNode;
class UCharacterAddLayerNode;
class UCharacterInteractiveRenameNode;
class UCharacterRenameNode;
class UCharacterMoveNode;
class UCharacterHideNode;
class UCharacterShowNode;
class UDialogEndNode;
class UDialogChoiceNode;
class UDialogTextNode;
class UDialogStartNode;
class UDialogBlueprint;
/**
 * 
 */
UCLASS()
class YARNIMPORTEREDITOR_API UYarnParser : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static void ParseYarn(UDialogBlueprint* DialogBlueprint, UDialogStartNode* StartNode, const TSharedPtr<FJsonObject>& YarnJson);

protected:
	
	/**
	 * Variable Nodes
	 */
	static FString AddVariableToBlueprint(UEdGraph* Graph, const FString& VariableName, const EYarnOperandType VariableType, const FString& DefaultValue);
	static UK2Node_VariableGet* CreateVariableGetNodeFromVariableName(UEdGraph* Graph, const FString& VariableName);
	static UK2Node_VariableSet* CreateVariableSetNodeFromInstruction(UEdGraph* Graph, const FString& VariableName);

	/**
	 * Flow Nodes
	 */

	static UK2Node_IfThenElse* CreateBranchNode(UEdGraph* Graph);
	static UK2Node_Knot* CreateRerouteNode(UEdGraph* Graph);

	/*
	 * Function Nodes
	 */
	
	static UK2Node_CallFunction* CreateCustomYarnCommand(UEdGraph* Graph, const FString& FunctionName, const TArray<FString>& Params, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateCustomYarnFunction(UEdGraph* Graph, const FString& FunctionName, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	
	/**
	 * Math Nodes
	 */
	
	static UK2Node_CallFunction* CreateMathFunction(UEdGraph* Graph, const FString& FunctionName, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathAddFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathMinusFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathMultiplyFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathDivideFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathModuloFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathEqualToFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathNotEqualToFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathGreaterThanFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathLessThanFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathLessThanOrEqualToFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathGreaterThanOrEqualToFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathBoolOrFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathBoolXorFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathBoolAndFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UK2Node_CallFunction* CreateMathBoolNotFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	
	/**
	 * Dialog Nodes
	 */
	
	static UDialogTextNode* CreateTextNodeFromInstruction(UEdGraph* Graph, const FYarnInstruction& Instruction, TMap<FString, FString> IdToTextMap, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	static UDialogEndNode* CreateDialogEndNodeFromInstruction(UEdGraph* Graph, const FYarnInstruction& Instruction);
	static UDialogChoiceNode* CreateDialogChoiceNodeFromInstruction(UEdGraph* Graph, const TArray<FYarnInstruction>& Instructions, TMap<FString, FString> IdToTextMap, TArray<FString>& Labels, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
	
	static UK2Node* CreateDialogNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UDialogWindowNode* CreateDialogWindowNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UWidgetShowNode* CreateWidgetShowNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UWidgetHideNode* CreateWidgetHideNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UDialogMemoryGetNode* CreateDialogMemoryGetNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UDialogMemorySetNode* CreateDialogMemorySetNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	
	/**
	 * Character Nodes
	 */
	
	static UK2Node* CreateCharacterNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UCharacterShowNode* CreateCharacterShowNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams);
	static UCharacterHideNode* CreateCharacterHideNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams);
	static UCharacterMoveNode* CreateCharacterMoveNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams);
	static UCharacterRenameNode* CreateCharacterRenameNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams);
	static UCharacterInteractiveRenameNode* CreateCharacterInteractiveRenameNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams);
	static UCharacterAddLayerNode* CreateCharacterAddLayerNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams);
	static UCharacterRemoveLayerNode* CreateCharacterRemoveLayerNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams);
	static UCharacterMemoryGetNode* CreateCharacterMemoryGetNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams);
	static UCharacterMemorySetNode* CreateCharacterMemorySetNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams);

	/**
	 * Character 3D Nodes
	 */
	
	static UK2Node* CreateCharacter3DNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UCharacter3DShowNode* CreateCharacter3DShowNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UCharacter3DHideNode* CreateCharacter3DHideNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	
	/**
	 * CG Nodes
	 */
	
	static UK2Node* CreateCgNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UCgShowNode* CreateCgShowNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UCgHideNode* CreateCgHideNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UCgAddLayerNode* CreateCgAddLayerNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UCgRemoveLayerNode* CreateCgRemoveLayerNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	
	/**
	 * Scene Background Nodes
	 */
	
	static UK2Node* CreateSceneBackgroundNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static USceneBackgroundShowNode* CreateSceneBackgroundShowNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static USceneBackgroundHideNode* CreateSceneBackgroundHideNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static USceneBackgroundAddLayerNode* CreateSceneBackgroundAddLayerNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static USceneBackgroundRemoveLayerNode* CreateSceneBackgroundRemoveLayerNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	
	/**
	 * Dialog Scene Nodes
	 */
	
	static UK2Node* CreateDialogSceneNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UDialogSceneShowNode* CreateDialogSceneShowNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UDialogSceneHideNode* CreateDialogSceneHideNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UDialogSceneSwitchCameraNode* CreateDialogSceneSwitchCameraNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	
	/**
	 * Dialog Audio Nodes
	 */
	
	static UK2Node* CreateDialogAudioNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);
	static UDialogAudioPlayBGMNode* CreateDialogAudioPlayBGMNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);	
	static UDialogAudioPlaySoundEffectNode* CreateDialogAudioPlaySoundEffectNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);	
	static UDialogAudioPlayCharacterVoiceOverNode* CreateDialogAudioPlayCharacterVoiceOverNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);	
	static UDialogAudioPlayDialogVoiceOverNode* CreateDialogAudioPlayDialogVoiceOverNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);	
	static UDialogAudioStopBGMNode* CreateDialogAudioStopBGMNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);	
	static UDialogAudioStopSoundEffectNode* CreateDialogAudioStopSoundEffectNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);	
	static UDialogAudioStopVoiceOverNode* CreateDialogAudioStopVoiceOverNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams);	

	static void SetupPinWithParam(UEdGraph* Graph, UEdGraphPin* Pin, const FYarnOperand& Param, TMap<FString, UEdGraphNode*>& FunctionResultNodes);
};
