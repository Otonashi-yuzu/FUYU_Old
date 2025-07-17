// Fill out your copyright notice in the Description page of Project Settings.


#include "YarnParser.h"

#include "CgAddLayerNode.h"
#include "CgHideNode.h"
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
#include "CharacterRemoveLayerNode.h"
#include "CharacterRenameNode.h"
#include "CharacterShowNode.h"
#include "DialogAudioPlayBGMNode.h"
#include "DialogAudioPlayCharacterVoiceOverNode.h"
#include "DialogAudioPlayDialogVoiceOverNode.h"
#include "DialogAudioPlaySoundEffectNode.h"
#include "DialogAudioStopBGMNode.h"
#include "DialogAudioStopSoundEffectNode.h"
#include "DialogAudioStopVoiceOverNode.h"
#include "DialogBlueprint.h"
#include "DialogChoiceNode.h"
#include "DialogEndNode.h"
#include "DialogMemoryGetNode.h"
#include "DialogMemorySetNode.h"
#include "DialogSceneHideNode.h"
#include "DialogSceneShowNode.h"
#include "DialogSceneSwitchCameraNode.h"
#include "DialogStartNode.h"
#include "DialogTextNode.h"
#include "DialogWindowNode.h"
#include "K2Node_CallFunction.h"
#include "K2Node_FormatText.h"
#include "K2Node_IfThenElse.h"
#include "K2Node_Knot.h"
#include "K2Node_VariableGet.h"
#include "K2Node_VariableSet.h"
#include "SceneBackgroundAddLayerNode.h"
#include "SceneBackgroundHideNode.h"
#include "SceneBackgroundRemoveLayerNode.h"
#include "SceneBackgroundShowNode.h"
#include "VNMYarnSettings.h"
#include "WidgetHideNode.h"
#include "WidgetShowNode.h"
#include "YarnFunctionBlueprintLibrary.h"
#include "YarnStructs.h"
#include "Internationalization/Regex.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet2/BlueprintEditorUtils.h"

namespace
{
	struct FPinInfoStruct
	{
		int32 Index;
		UEdGraphPin* Pin;
	};

	struct FPinsArrayStruct
	{
		TArray<FPinInfoStruct> PinInfos;
	};

	bool operator== (const FPinInfoStruct& Lhs, const FPinInfoStruct& Rhs)
	{
		return Lhs.Pin == Rhs.Pin && Lhs.Index == Rhs.Index;
	}

	struct FNodeColumn
	{
		TArray<UEdGraphNode*> Nodes;
	};

	int32 FindIndexOfNode(const TArray<FNodeColumn>& Columns, UEdGraphNode* Node)
	{
		for (int32 i = 0; i < Columns.Num(); i++)
		{
			if (Columns[i].Nodes.Contains(Node))
			{
				return i;
			}
		}

		return INDEX_NONE;
	}

	void ConnectOutPinsWithLabel(TMap<FString, FPinsArrayStruct>& LabelsToOutPins, TMap<FString, UEdGraphPin*>& LabelsToInPins, const FString& Label, const int32 LabelIndex, UEdGraphPin* Pin)
	{
		FPinsArrayStruct& PinsArray = LabelsToOutPins.FindOrAdd(Label);
		FPinInfoStruct PinInfo;
		PinInfo.Pin = Pin;
		PinInfo.Index = LabelIndex;
		PinsArray.PinInfos.AddUnique(PinInfo);

		auto** LabelPin = LabelsToInPins.Find(Label);
		if (LabelPin)
		{
			(*LabelPin)->MakeLinkTo(Pin);
		}
		
	}

	FText ReplaceYarnMarkUpWithUnrealMarkUp(const FText& InText)
	{
		// Regex \[[/A-Za-z\s\d\=\"\{\}\$\_]+\]

		const FRegexPattern RegexPattern(TEXT("\\[[/A-Za-z\\s\\d\\=\\\"\\{\\}\\$\\_]+\\]"));

		FString DialogString = InText.ToString();
		FRegexMatcher RegexMatcher(RegexPattern, DialogString);

		TMap<FString, FString> OriginalToFixedMarkUpMap;

		int32 CaptureIndex = 0;
		while (RegexMatcher.FindNext())
		{
			FString OriginalString = DialogString.Mid(RegexMatcher.GetMatchBeginning(), RegexMatcher.GetMatchEnding() - RegexMatcher.GetMatchBeginning());
			if (OriginalString.StartsWith(TEXT("[/")))
			{
				OriginalToFixedMarkUpMap.Add(OriginalString, TEXT("</>"));
			}
			else
			{
				FString NewString = OriginalString;
				NewString[0] = TCHAR('<');
				NewString[OriginalString.Len()-1] = TCHAR('>');
				OriginalToFixedMarkUpMap.Add(OriginalString, NewString);
			}
		}

		for (const auto& ReplacingPair : OriginalToFixedMarkUpMap)
		{
			DialogString.ReplaceInline(*ReplacingPair.Key, *ReplacingPair.Value);
		}

		return FText::FromString(DialogString);
	}
}

void UYarnParser::ParseYarn(UDialogBlueprint* DialogBlueprint, UDialogStartNode* StartNode, const TSharedPtr<FJsonObject>& YarnJson)
{
	FYarn Yarn;

	Yarn.FromJson(YarnJson);

	TArray<FYarnOperand> YarnStack;

	UEdGraphNode* LastNode = StartNode;
	auto* Graph = DialogBlueprint->GetLastEditedUberGraph();

	TMap<FString, FPinsArrayStruct> LabelsToOutPins;
	TMap<FString, UEdGraphPin*> LabelsToInPins;

	TMap<FString, UEdGraphNode*> FunctionResultNodes;

	TArray<FYarnInstruction> OptionsInstructions;

	for (const auto& InitialValue : Yarn.Program.InitialValues)
	{
		const FString DefaultValue = InitialValue.Value.StringValue;
		const FString VariableName = InitialValue.Key;
		AddVariableToBlueprint(Graph, VariableName.Right(VariableName.Len()-1), InitialValue.Value.Type, DefaultValue);
	}

	const int32 LastNodeIndex = Yarn.Program.Nodes.Num() - 1;
	TArray<FString> NodeNames;
	Yarn.Program.Nodes.GetKeys(NodeNames);
	for (int32 NodeIndex = 0; NodeIndex < Yarn.Program.Nodes.Num(); NodeIndex++)
	{
		auto& Node = Yarn.Program.Nodes[NodeNames[NodeIndex]];
		FString NextLabel;
		
		for (int32 InstructionIndex = 0; InstructionIndex < Node.Instructions.Num(); InstructionIndex++)
		{
			auto& Instruction = Node.Instructions[InstructionIndex];
			TArray<FString> Labels;
			UK2Node* NewNode = nullptr;
			
			if (auto* Label = Node.Labels.FindKey(InstructionIndex))
			{
				if (InstructionIndex != 0)
				{
					NextLabel = *Label;
				}
				else
				{
					NextLabel = NodeNames[NodeIndex];
				}
			}
			
			if (Instruction.OpCode == EYarnOpCode::RUN_LINE)
			{
				NewNode = CreateTextNodeFromInstruction(Graph, Instruction, Yarn.Strings, YarnStack, FunctionResultNodes);
			}
			else if (Instruction.OpCode == EYarnOpCode::ADD_OPTION)
			{
				if (Instruction.Operands[3].BoolValue)
				{
					const auto Condition = YarnStack.Pop();
					Instruction.Operands.Add(Condition); 
				}
				
				OptionsInstructions.Add(Instruction);
				continue;
			}
			else if (Instruction.OpCode == EYarnOpCode::SHOW_OPTIONS)
			{
				NewNode = CreateDialogChoiceNodeFromInstruction(Graph, OptionsInstructions, Yarn.Strings, Labels, FunctionResultNodes);
				OptionsInstructions.Empty();
			}
			else if (Instruction.OpCode == EYarnOpCode::JUMP_TO)
			{
				auto* LastThenPin = LastNode->FindPin(UEdGraphSchema_K2::PN_Then);
				ConnectOutPinsWithLabel(LabelsToOutPins, LabelsToInPins, Instruction.Operands[0].StringValue, 0, LastThenPin);
				continue;
			}
			else if (Instruction.OpCode == EYarnOpCode::STOP)
			{
				if (NodeIndex == LastNodeIndex)
				{
					NewNode = CreateDialogEndNodeFromInstruction(Graph, Instruction);
				}
			}
			else if (Instruction.OpCode == EYarnOpCode::RUN_COMMAND)
			{
				TArray<FString> CommandParams;
				Instruction.Operands[0].StringValue.ParseIntoArrayWS(CommandParams);

				const FString CommandIdentifier = CommandParams[0];
				CommandParams.RemoveAt(0);
				if (CommandIdentifier == TEXT("character"))
				{
					NewNode = CreateCharacterNodeFromCommandParams(Graph, CommandParams);
				}
				else if (CommandIdentifier == TEXT("dialog"))
				{
					NewNode = CreateDialogNodeFromCommandParams(Graph, CommandParams);
				}
				else if (CommandIdentifier == TEXT("character3D"))
				{
					NewNode = CreateCharacter3DNodeFromCommandParams(Graph, CommandParams);
				}
				else if (CommandIdentifier == TEXT("cg"))
				{
					NewNode = CreateCgNodeFromCommandParams(Graph, CommandParams);
				}
				else if (CommandIdentifier == TEXT("scenebackground"))
				{
					NewNode = CreateSceneBackgroundNodeFromCommandParams(Graph, CommandParams);
				}
				else if (CommandIdentifier == TEXT("dialogscene"))
				{
					NewNode = CreateDialogSceneNodeFromCommandParams(Graph, CommandParams);
				}
				else if (CommandIdentifier == TEXT("audio"))
				{
					NewNode = CreateDialogAudioNodeFromCommandParams(Graph, CommandParams);
				}
				else
				{
					NewNode = CreateCustomYarnCommand(Graph, CommandIdentifier, CommandParams, YarnStack, FunctionResultNodes);
				}
			}
			else if (Instruction.OpCode == EYarnOpCode::PUSH_FLOAT
				|| Instruction.OpCode == EYarnOpCode::PUSH_BOOL
				|| Instruction.OpCode == EYarnOpCode::PUSH_STRING
				|| Instruction.OpCode == EYarnOpCode::PUSH_VARIABLE
				|| Instruction.OpCode == EYarnOpCode::PUSH_NULL)
			{
				YarnStack.Push(Instruction.Operands[0]);
				continue;
			}
			else if (Instruction.OpCode == EYarnOpCode::POP)
			{
				if (!YarnStack.IsEmpty())
				{
					YarnStack.Pop();
				}
				continue;
			}
			else if (Instruction.OpCode == EYarnOpCode::STORE_VARIABLE)
			{
				const FString VariableName = Instruction.Operands[0].StringValue;
				NewNode = CreateVariableSetNodeFromInstruction(Graph, VariableName.Right(VariableName.Len()-1));

				
				const FYarnOperand& YarnOperand = YarnStack.Top();
				if (YarnOperand.Type != EYarnOperandType::FunctionResult)
				{
					Cast<UK2Node_VariableSet>(NewNode)->FindPinChecked(VariableName.Right(VariableName.Len()-1), EGPD_Input)->DefaultValue = YarnOperand.StringValue;
				}
				else
				{
					Cast<UK2Node_VariableSet>(NewNode)->FindPinChecked(VariableName.Right(VariableName.Len()-1), EGPD_Input)
						->MakeLinkTo(FunctionResultNodes.FindAndRemoveChecked(YarnOperand.StringValue + YarnOperand.Guid.ToString())->FindPinChecked(UEdGraphSchema_K2::PN_ReturnValue));
				}
			}
			else if (Instruction.OpCode == EYarnOpCode::CALL_FUNC)
			{
				FString Namespace;
				FString FunctionName;
				Instruction.Operands[0].StringValue.Split(TEXT("."), &Namespace, &FunctionName);
				if (Namespace == TEXT("Number") || Namespace == TEXT("Bool"))
				{
					NewNode = CreateMathFunction(Graph, FunctionName, YarnStack, FunctionResultNodes);
				}
				else
				{
					if (Instruction.Operands[0].StringValue == TEXT("int"))
					{
						NewNode = CreateCustomYarnFunction(Graph, TEXT("integer"), YarnStack, FunctionResultNodes);
					}
					else
					{
						NewNode = CreateCustomYarnFunction(Graph, Instruction.Operands[0].StringValue, YarnStack, FunctionResultNodes);
					}
				}
				
				FYarnOperand FunctionResult;
				FunctionResult.Type = EYarnOperandType::FunctionResult;
				FunctionResult.StringValue = Instruction.Operands[0].StringValue;
				FunctionResult.Guid = Instruction.Operands[0].Guid;
				YarnStack.Push(FunctionResult);
					
				FunctionResultNodes.Add(Instruction.Operands[0].StringValue + Instruction.Operands[0].Guid.ToString(), NewNode);
			}
			else if (Instruction.OpCode == EYarnOpCode::JUMP_IF_FALSE)
			{
				const FYarnOperand& YarnOperand = YarnStack.Top();
				NewNode = CreateBranchNode(Graph);
				auto* BranchNode = Cast<UK2Node_IfThenElse>(NewNode);
				if (YarnOperand.Type != EYarnOperandType::FunctionResult)
				{
					BranchNode->GetConditionPin()->DefaultValue = YarnOperand.StringValue;
				}
				else
				{
					BranchNode->GetConditionPin()
						->MakeLinkTo(FunctionResultNodes.FindAndRemoveChecked(YarnOperand.StringValue)->FindPinChecked(UEdGraphSchema_K2::PN_ReturnValue));
				}

				Labels.Add(Instruction.Operands[0].StringValue + "false");
				Labels.Add(Instruction.Operands[0].StringValue);
			}
			else if (Instruction.OpCode == EYarnOpCode::RUN_NODE)
			{
				const FYarnOperand& YarnOperand = YarnStack.Pop();
				
				NewNode = CreateRerouteNode(Graph);
				Labels.Add(YarnOperand.StringValue);
			}

			if (!NewNode)
			{
				continue;
			}
			
			NewNode->CreateNewGuid();
			NewNode->PostPlacedNewNode();
			NewNode->ReconstructNode();
			NewNode->NodePosX = 0;
			NewNode->NodePosY = 0;
			NewNode->SnapToGrid(16);
			UEdGraphPin* NewExecPin = NewNode->FindPin(UEdGraphSchema_K2::PN_Execute);

			if (auto* KnotNode = Cast<UK2Node_Knot>(NewNode))
			{
				NewExecPin = KnotNode->GetInputPin();
				NewExecPin->PinType.PinCategory = UEdGraphSchema_K2::PC_Exec;
				KnotNode->GetOutputPin()->PinType.PinCategory = UEdGraphSchema_K2::PC_Exec;
			}
			
			if (!NewExecPin)
			{
				Graph->AddNode(NewNode, true, false);
				continue;
			}

			if (NewExecPin->LinkedTo.Num() > 0)
			{
				NewExecPin = NewExecPin->LinkedTo[0]->GetOwningNode()->FindPinChecked(UEdGraphSchema_K2::PN_Execute);
			}

			// If choices or branch
			if (Labels.Num() > 0)
			{
				int32 LabelsCounter = 0;
				for (int32 PinIndex = 0; PinIndex < NewNode->Pins.Num(); PinIndex++)
				{
					UEdGraphPin* Pin = NewNode->Pins[PinIndex];
					if (Pin->Direction == EGPD_Input || Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Exec)
					{
						continue;
					}

					ConnectOutPinsWithLabel(LabelsToOutPins, LabelsToInPins, Labels[LabelsCounter], LabelsCounter, Pin);
					LabelsCounter++;
				}
			}

			if (!NextLabel.IsEmpty())
			{
				LabelsToInPins.Add(NextLabel, NewExecPin);

				auto* PinsArray = LabelsToOutPins.Find(NextLabel);

				if (PinsArray)
				{
					for (auto PinInfo: PinsArray->PinInfos)
					{
						NewExecPin->MakeLinkTo(PinInfo.Pin);
					}
				}

				NextLabel = TEXT("");

				if (InstructionIndex == 0 || LastNode->IsA<UDialogStartNode>())
				{
					auto* LastThenPin = LastNode->FindPin(UEdGraphSchema_K2::PN_Then);

					if (LastThenPin)
					{
						NewExecPin->MakeLinkTo(LastThenPin);
					}
				}
			}
			else
			{
				auto* LastThenPin = LastNode->FindPin(UEdGraphSchema_K2::PN_Then);

				if (LastThenPin)
				{
					NewExecPin->MakeLinkTo(LastThenPin);
				}
				else if (auto* KnotNode = Cast<UK2Node_Knot>(LastNode))
				{
					NewExecPin->MakeLinkTo(KnotNode->GetOutputPin());
				}
			}
		
			Graph->AddNode(NewNode, true, false);

			LastNode = NewNode;
		}
	}
}

FString UYarnParser::AddVariableToBlueprint(UEdGraph* Graph, const FString& VariableName, const EYarnOperandType VariableType, const FString& DefaultValue)
{
	auto * Blueprint = Cast<UBlueprint>(Graph->GetOuter());

	if (!Blueprint)
	{
		return TEXT("");
	}

	UEdGraphNode::FCreatePinParams PinParams;

	FEdGraphPinType PinType;
	

	if (VariableType == EYarnOperandType::FloatValue)
	{
		PinType = FEdGraphPinType(UEdGraphSchema_K2::PC_Real, UEdGraphSchema_K2::PC_Double, nullptr, PinParams.ContainerType, PinParams.bIsReference, PinParams.ValueTerminalType);
	}
	else if (VariableType == EYarnOperandType::BoolValue)
	{
		PinType = FEdGraphPinType(UEdGraphSchema_K2::PC_Boolean, {}, nullptr, PinParams.ContainerType, PinParams.bIsReference, PinParams.ValueTerminalType);
	}
	else if (VariableType == EYarnOperandType::StringValue)
	{
		PinType = FEdGraphPinType(UEdGraphSchema_K2::PC_String, {}, nullptr, PinParams.ContainerType, PinParams.bIsReference, PinParams.ValueTerminalType);
	}
	
	FBlueprintEditorUtils::AddMemberVariable(Blueprint, *VariableName, PinType);

	return VariableName;
}

UK2Node_VariableGet* UYarnParser::CreateVariableGetNodeFromVariableName(UEdGraph* Graph, const FString& VariableName)
{
	auto* NewNode = NewObject<UK2Node_VariableGet>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->VariableReference.SetSelfMember(*VariableName);

	return NewNode;
}

UK2Node_VariableSet* UYarnParser::CreateVariableSetNodeFromInstruction(UEdGraph* Graph, const FString& VariableName)
{
	auto* NewNode = NewObject<UK2Node_VariableSet>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	NewNode->VariableReference.SetSelfMember(*VariableName);
	NewNode->CreateNewGuid();
	NewNode->PostPlacedNewNode();
	NewNode->ReconstructNode();
	NewNode->NodePosX = 0;
	NewNode->NodePosY = 0;
	NewNode->SnapToGrid(16);

	return NewNode;
}

UK2Node_IfThenElse* UYarnParser::CreateBranchNode(UEdGraph* Graph)
{
	auto* NewNode = NewObject<UK2Node_IfThenElse>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CreateNewGuid();
	NewNode->PostPlacedNewNode();
	NewNode->ReconstructNode();
	return NewNode;
}

UK2Node_Knot* UYarnParser::CreateRerouteNode(UEdGraph* Graph)
{
	auto* NewNode = NewObject<UK2Node_Knot>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CreateNewGuid();
	NewNode->PostPlacedNewNode();
	NewNode->ReconstructNode();
	
	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateCustomYarnCommand(UEdGraph* Graph, const FString& FunctionName, const TArray<FString>& Params, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	// Need to iterate in reverse, last element in array is first param for function
	TArray<FYarnOperand> ConvertedParams;

	for (const FString& Param: Params)
	{
		FYarnOperand Operand;
		Operand.Type = EYarnOperandType::StringValue;
		Operand.StringValue = Param;
		ConvertedParams.Add(Operand);
	}
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	UFunction* BlueprintFunction = UVNMYarnSettings::Get()->YarnCommandLibrary->FindFunctionByName(*FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	int32 ParamIndex = 0;
	for (int32 PinIndex = 0; PinIndex < NewNode->Pins.Num(); PinIndex++)
	{
		UEdGraphPin* Pin = NewNode->Pins[PinIndex];
		if (Pin->Direction == EGPD_Output
			|| Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Exec
			|| Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Object
			|| Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Struct)
		{
			continue;
		}

		const auto& Param = ConvertedParams[ParamIndex++];
		
		SetupPinWithParam(Graph, Pin, Param, FunctionResultNodes);
	}
	
	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateCustomYarnFunction(UEdGraph* Graph, const FString& FunctionName, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;

	// Need to iterate in reverse, last element in array is first param for function
	TArray<FYarnOperand> Params;

	for (int32 i = 0; i < NumParams; i++)
	{
		Params.Add(Stack.Pop());
	}
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	UFunction* BlueprintFunction = UVNMYarnSettings::Get()->YarnFunctionLibrary->FindFunctionByName(*FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	int32 ParamIndex = Params.Num() - 1;
	for (int32 PinIndex = 0; PinIndex < NewNode->Pins.Num(); PinIndex++)
	{
		UEdGraphPin* Pin = NewNode->Pins[PinIndex];
		if (Pin->Direction == EGPD_Output
			|| Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Exec
			|| Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Object
			|| Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Struct)
		{
			continue;
		}

		const auto& Param = Params[ParamIndex--];
		
		SetupPinWithParam(Graph, Pin, Param, FunctionResultNodes);
	}
	
	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathFunction(UEdGraph* Graph, const FString& FunctionName, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	if (FunctionName == TEXT("Add"))
	{
		return CreateMathAddFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("Minus"))
	{
		return CreateMathMinusFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("Multiply"))
	{
		return CreateMathMultiplyFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("Divide"))
	{
		return CreateMathDivideFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("Modulo"))
	{
		return CreateMathModuloFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("EqualTo"))
	{
		return CreateMathEqualToFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("NotEqualTo"))
	{
		return CreateMathNotEqualToFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("GreaterThan"))
	{
		return CreateMathGreaterThanFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("LessThan"))
	{
		return CreateMathLessThanFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("GreaterThanOrEqualTo"))
	{
		return CreateMathGreaterThanOrEqualToFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("LessThanOrEqualTo"))
	{
		return CreateMathLessThanOrEqualToFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("Or"))
	{
		return CreateMathBoolOrFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("Xor"))
	{
		return CreateMathBoolXorFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("And"))
	{
		return CreateMathBoolAndFunction(Graph, Stack, FunctionResultNodes);
	}
	else if (FunctionName == TEXT("Not"))
	{
		return CreateMathBoolNotFunction(Graph, Stack, FunctionResultNodes);
	}

	return nullptr;
}

UK2Node_CallFunction* UYarnParser::CreateMathAddFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, Add_DoubleDouble);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathMinusFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, Subtract_DoubleDouble);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathMultiplyFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, Multiply_DoubleDouble);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathDivideFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, Divide_DoubleDouble);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathModuloFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, Percent_FloatFloat);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathEqualToFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, EqualEqual_DoubleDouble);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathNotEqualToFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, NotEqual_DoubleDouble);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathGreaterThanFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, Greater_DoubleDouble);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathLessThanFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, Less_DoubleDouble);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathLessThanOrEqualToFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, LessEqual_DoubleDouble);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathGreaterThanOrEqualToFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, GreaterEqual_DoubleDouble);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathBoolOrFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, BooleanOR);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);
	
	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathBoolXorFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, BooleanXOR);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathBoolAndFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param2 = Stack.Pop();
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, BooleanAND);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);
	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("B"), EGPD_Input), Param2, FunctionResultNodes);

	return NewNode;
}

UK2Node_CallFunction* UYarnParser::CreateMathBoolNotFunction(UEdGraph* Graph, TArray<FYarnOperand>& Stack, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	const float NumParams = Stack.Pop().FloatValue;
	const FYarnOperand Param1 = Stack.Pop();
	
	auto* NewNode = NewObject<UK2Node_CallFunction>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, Not_PreBool);
	UFunction* BlueprintFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(FunctionName);
	
	NewNode->SetFromFunction(BlueprintFunction);
	NewNode->AllocateDefaultPins();

	SetupPinWithParam(Graph, NewNode->FindPinChecked(TEXT("A"), EGPD_Input), Param1, FunctionResultNodes);

	return NewNode;
}

UDialogTextNode* UYarnParser::CreateTextNodeFromInstruction(
	UEdGraph* Graph,
	const FYarnInstruction& Instruction,
	TMap<FString, FString> IdToTextMap,
	TArray<FYarnOperand>& Stack,
	TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	auto* NewNode = NewObject<UDialogTextNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	FString CharacterId;
	FString DialogText;

	const FString TextLabel = Instruction.Operands[0].StringValue;

	const FString Text = IdToTextMap[TextLabel];
	if (Text.Contains(TEXT(":")))
	{
		Text.Split(TEXT(":"), &CharacterId, &DialogText);
	}
	else
	{
		DialogText = Text;
	}
	NewNode->DialogText = FText::FromString(DialogText);

	NewNode->DialogText = ReplaceYarnMarkUpWithUnrealMarkUp(NewNode->DialogText);

	if (!DialogText.IsEmpty())
	{
		NewNode->CharacterId = *CharacterId;
	}

	const int32 WildcardSlots = FMath::TruncToInt(Instruction.Operands[1].FloatValue);

	if (WildcardSlots > 0)
	{
		NewNode->bUseDialogTextPin = true;
		NewNode->CreateNewGuid();
		NewNode->PostPlacedNewNode();
		NewNode->ReconstructNode();
		
		auto* FormatTextNode = NewObject<UK2Node_FormatText>(Graph);
		FormatTextNode->CreateNewGuid();
		FormatTextNode->PostPlacedNewNode();
		FormatTextNode->ReconstructNode();
		FormatTextNode->NodePosX = 0;
		FormatTextNode->NodePosY = 0;
		FormatTextNode->SnapToGrid(16);
		Graph->AddNode(FormatTextNode);

		FormatTextNode->GetFormatPin()->DefaultTextValue = NewNode->DialogText;
		FormatTextNode->ReconstructNode();

		for (int32 WildcardIndex = 0; WildcardIndex < WildcardSlots; WildcardIndex++)
		{
			FormatTextNode->AddArgumentPin();
			auto* WildcardArgumentPin = FormatTextNode->FindArgumentPin(*FString::FromInt(WildcardIndex));
			const FYarnOperand YarnOperand = Stack.Pop();
			if (YarnOperand.Type != EYarnOperandType::FunctionResult)
			{
				if (!YarnOperand.StringValue.StartsWith(TEXT("$")))
				{
					WildcardArgumentPin->DefaultValue = YarnOperand.StringValue;
				}
				else
				{
					auto* VariableGetNode = CreateVariableGetNodeFromVariableName(Graph, YarnOperand.StringValue.Right(YarnOperand.StringValue.Len()-1));
			
					VariableGetNode->CreateNewGuid();
					VariableGetNode->PostPlacedNewNode();
					VariableGetNode->ReconstructNode();
					VariableGetNode->NodePosX = 0;
					VariableGetNode->NodePosY = 0;
					VariableGetNode->SnapToGrid(16);
					Graph->AddNode(VariableGetNode);
			
					WildcardArgumentPin->MakeLinkTo(VariableGetNode->GetValuePin());
				}
			}
			else
			{
				WildcardArgumentPin->MakeLinkTo(
					FunctionResultNodes.FindAndRemoveChecked(YarnOperand.StringValue + YarnOperand.Guid.ToString())
					->FindPinChecked(UEdGraphSchema_K2::PN_ReturnValue));
			}
			
			FormatTextNode->PinConnectionListChanged(WildcardArgumentPin);
		}

		NewNode->FindPin(TEXT("DialogText"), EGPD_Input)->MakeLinkTo(FormatTextNode->FindPin(TEXT("Result"), EGPD_Output));
	}

	return NewNode;
}

UDialogEndNode* UYarnParser::CreateDialogEndNodeFromInstruction(UEdGraph* Graph, const FYarnInstruction& Instruction)
{
	auto* NewNode = NewObject<UDialogEndNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	return NewNode;
}

UDialogChoiceNode* UYarnParser::CreateDialogChoiceNodeFromInstruction(
	UEdGraph* Graph,
	const TArray<FYarnInstruction>& Instructions,
	TMap<FString, FString> IdToTextMap,
	TArray<FString>& Labels,
	TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	Labels.Empty();
	auto* NewNode = NewObject<UDialogChoiceNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->bMakeChoiceConditional = true;

	for (const auto& Instruction : Instructions)
	{
		const FString Text = IdToTextMap[Instruction.Operands[0].StringValue];
		const FString Label = Instruction.Operands[1].StringValue;

		NewNode->Choices.Add(ReplaceYarnMarkUpWithUnrealMarkUp(FText::FromString(Text)));
		Labels.Add(Label);
	}
	
	NewNode->CreateNewGuid();
	NewNode->PostPlacedNewNode();
	NewNode->ReconstructNode();

	int32 BooleanPinIndex = 0;
	for (int32 PinIndex = 0; PinIndex < NewNode->Pins.Num(); PinIndex++)
	{
		UEdGraphPin* Pin = NewNode->Pins[PinIndex];
		if (Pin->Direction == EGPD_Output || Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Boolean)
		{
			continue;
		}

		const auto& Instruction = Instructions[BooleanPinIndex++];

		if (Instruction.Operands[3].BoolValue)
		{
			const auto& YarnOperand = Instruction.Operands[4];
			if (YarnOperand.Type != EYarnOperandType::FunctionResult)
			{
				Pin->DefaultValue = YarnOperand.StringValue;
			}
			else
			{
				Pin->MakeLinkTo(
					FunctionResultNodes.FindAndRemoveChecked(YarnOperand.StringValue + YarnOperand.Guid.ToString())
					->FindPinChecked(UEdGraphSchema_K2::PN_ReturnValue)
					);
			}
		}
		else
		{
			Pin->DefaultValue = TEXT("true");
		}
	}
	
	return NewNode;
}

UK2Node* UYarnParser::CreateDialogNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	const FString DialogNodeIdentifier = CommandParams[0];
	CommandParams.RemoveAt(0);
	if (DialogNodeIdentifier == TEXT("window"))
	{
		return CreateDialogWindowNodeFromCommandParams(Graph, CommandParams);
	}
	else if (DialogNodeIdentifier == TEXT("widget"))
	{
		const FString WidgetOperator = CommandParams[0];
		CommandParams.RemoveAt(0);

		if (WidgetOperator == TEXT("show"))
		{
			return CreateWidgetShowNodeFromCommandParams(Graph, CommandParams);
		}
		else if (WidgetOperator == TEXT("hide"))
		{
			return CreateWidgetHideNodeFromCommandParams(Graph, CommandParams);
		}
	}
	else if (DialogNodeIdentifier == TEXT("memory"))
	{
		const FString MemoryOperator = CommandParams[0];
		CommandParams.RemoveAt(0);

		if (MemoryOperator == TEXT("set"))
		{
			return CreateDialogMemorySetNodeFromCommandParams(Graph, CommandParams);
		}
		else if (MemoryOperator == TEXT("get"))
		{
			return CreateDialogMemoryGetNodeFromCommandParams(Graph, CommandParams);
		}
	}

	return nullptr;
}

UDialogWindowNode* UYarnParser::CreateDialogWindowNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogWindowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);	

	NewNode->bShouldHide = CommandParams[0] == TEXT("true") ? true : false;
	NewNode->bSetToAutomatic = CommandParams[1] == TEXT("true") ? true : false;
	NewNode->TransitionEvent = CommandParams.IsValidIndex(2)
		? static_cast<ETransitionEvent>(StaticEnum<ETransitionEvent>()->GetValueByNameString(*CommandParams[1]))
		: ETransitionEvent::No_Transition;
	NewNode->bDontWaitForTransitionToFinish = CommandParams.IsValidIndex(3)
		? CommandParams[2] == TEXT("true") ? true : false
		: false;
	NewNode->CustomTransitionEventName = CommandParams.IsValidIndex(4)
		? *CommandParams[3]
		: TEXT("");
	
	return NewNode;
}

UWidgetShowNode* UYarnParser::CreateWidgetShowNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UWidgetShowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	NewNode->ActivatableWidgetClass = FindObject<UClass>(ANY_PACKAGE, *FString::Printf(TEXT("%s_C"), *CommandParams[0]));

	if (CommandParams.IsValidIndex(1))
	{
		NewNode->bWaitForWidgetToCloseAgain = (CommandParams[1] == TEXT("true")) ? true : false;
	}

	return NewNode;
}

UWidgetHideNode* UYarnParser::CreateWidgetHideNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UWidgetHideNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	NewNode->ActivatableWidgetClass = FindObject<UClass>(ANY_PACKAGE, *FString::Printf(TEXT("%s_C"), *CommandParams[0]));

	return NewNode;
}

UDialogMemoryGetNode* UYarnParser::CreateDialogMemoryGetNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogMemoryGetNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	NewNode->DialogId = *CommandParams[0];
	NewNode->DialogMemoryValueId = *CommandParams[1];

	const FString VariableName = CommandParams[2];
	auto* VariableSetNode = CreateVariableSetNodeFromInstruction(Graph, VariableName);
	VariableSetNode->CreateNewGuid();
	VariableSetNode->PostPlacedNewNode();
	VariableSetNode->ReconstructNode();
	VariableSetNode->NodePosX = 0;
	VariableSetNode->NodePosY = 0;
	VariableSetNode->SnapToGrid(16);
	Graph->AddNode(VariableSetNode);
	
	auto* Property = VariableSetNode->GetPropertyForVariable();

	if (Property->IsA<FBoolProperty>())
	{
		NewNode->Type = EMemoryType::Bool;
	}
	else if (Property->IsA<FByteProperty>())
	{
		NewNode->Type = EMemoryType::Byte;
	}
	else if (Property->IsA<FFloatProperty>())
	{
		NewNode->Type = EMemoryType::Float;
	}
	else if (Property->IsA<FIntProperty>())
	{
		NewNode->Type = EMemoryType::Integer;
	}
	else if (Property->IsA<FInt64Property>())
	{
		NewNode->Type = EMemoryType::Integer64;
	}
	else if (Property->IsA<FStrProperty>())
	{
		NewNode->Type = EMemoryType::String;
	}

	NewNode->CreateNewGuid();
	NewNode->PostPlacedNewNode();
	NewNode->ReconstructNode();

	NewNode->FindPin(TEXT("Value"))->MakeLinkTo(VariableSetNode->FindPinChecked(VariableName, EGPD_Input));
	
	return NewNode;
}

UDialogMemorySetNode* UYarnParser::CreateDialogMemorySetNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogMemorySetNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	NewNode->DialogId = *CommandParams[0];
	NewNode->DialogMemoryValueId = *CommandParams[1];
	
	const FString VariableName = CommandParams[2];
	auto* VariableGetNode = CreateVariableGetNodeFromVariableName(Graph, VariableName);
	VariableGetNode->CreateNewGuid();
	VariableGetNode->PostPlacedNewNode();
	VariableGetNode->ReconstructNode();
	VariableGetNode->NodePosX = 0;
	VariableGetNode->NodePosY = 0;
	VariableGetNode->SnapToGrid(16);
	Graph->AddNode(VariableGetNode);

	auto* Property = VariableGetNode->GetPropertyForVariable();

	if (Property->IsA<FBoolProperty>())
	{
		NewNode->Type = EMemoryType::Bool;
	}
	else if (Property->IsA<FByteProperty>())
	{
		NewNode->Type = EMemoryType::Byte;
	}
	else if (Property->IsA<FFloatProperty>())
	{
		NewNode->Type = EMemoryType::Float;
	}
	else if (Property->IsA<FIntProperty>())
	{
		NewNode->Type = EMemoryType::Integer;
	}
	else if (Property->IsA<FInt64Property>())
	{
		NewNode->Type = EMemoryType::Integer64;
	}
	else if (Property->IsA<FStrProperty>())
	{
		NewNode->Type = EMemoryType::String;
	}
	
	NewNode->CreateNewGuid();
	NewNode->PostPlacedNewNode();
	NewNode->ReconstructNode();
		
	NewNode->FindPin(TEXT("Value"))->MakeLinkTo(VariableGetNode->GetValuePin());
	
	return NewNode;
}

UK2Node* UYarnParser::CreateCharacterNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	const FString CharacterNodeIdentifier = CommandParams[0];
	CommandParams.RemoveAt(0);
	if (CharacterNodeIdentifier == TEXT("show"))
	{
		return CreateCharacterShowNodeFromCommandParams(Graph, CommandParams);
	}
	else if (CharacterNodeIdentifier == TEXT("hide"))
	{
		return CreateCharacterHideNodeFromCommandParams(Graph, CommandParams);
	}
	else if (CharacterNodeIdentifier == TEXT("move"))
	{
		return CreateCharacterMoveNodeFromCommandParams(Graph, CommandParams);
	}
	else if (CharacterNodeIdentifier == TEXT("rename"))
	{
		if (CommandParams[0] == TEXT("interactive"))
		{
			CommandParams.RemoveAt(0);
			return CreateCharacterInteractiveRenameNodeFromCommandParams(Graph, CommandParams);
		}
		
		return CreateCharacterRenameNodeFromCommandParams(Graph, CommandParams);
	}
	else if (CharacterNodeIdentifier == TEXT("layer"))
	{
		const FString LayerOperator = CommandParams[0];
		CommandParams.RemoveAt(0);

		if (LayerOperator == TEXT("add"))
		{
			return CreateCharacterAddLayerNodeFromCommandParams(Graph, CommandParams);
		}
		else if (LayerOperator == TEXT("remove"))
		{
			return CreateCharacterRemoveLayerNodeFromCommandParams(Graph, CommandParams);
		}
	}
	else if (CharacterNodeIdentifier == TEXT("memory"))
	{
		const FString MemoryOperator = CommandParams[0];
		CommandParams.RemoveAt(0);

		if (MemoryOperator == TEXT("set"))
		{
			return CreateCharacterMemorySetNodeFromCommandParams(Graph, CommandParams);
		}
		else if (MemoryOperator == TEXT("get"))
		{
			return CreateCharacterMemoryGetNodeFromCommandParams(Graph, CommandParams);
		}
	}

	return nullptr;
}

UCharacterShowNode* UYarnParser::CreateCharacterShowNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCharacterShowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CharacterId = *CommandParams[0];
	NewNode->EmotionId = *CommandParams[1];
	NewNode->CharacterPositioning = CommandParams.IsValidIndex(2)
		? static_cast<ECharacterPositioning>(StaticEnum<ECharacterPositioning>()->GetValueByNameString(*CommandParams[2]))
		: ECharacterPositioning::CENTER;
	NewNode->TransitionEvent = CommandParams.IsValidIndex(3)
		? static_cast<ETransitionEvent>(StaticEnum<ETransitionEvent>()->GetValueByNameString(*CommandParams[3]))
		: ETransitionEvent::No_Transition;
	NewNode->bDontWaitForTransitionToFinish = CommandParams.IsValidIndex(4)
		? CommandParams[4] == TEXT("true") ? true : false
		: false;
	NewNode->CustomTransitionEventName = CommandParams.IsValidIndex(5)
		? *CommandParams[5]
		: TEXT("");
	
	return NewNode;
}

UCharacterHideNode* UYarnParser::CreateCharacterHideNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCharacterHideNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CharacterId = *CommandParams[0];
	NewNode->TransitionEvent = CommandParams.IsValidIndex(1)
		? static_cast<ETransitionEvent>(StaticEnum<ETransitionEvent>()->GetValueByNameString(*CommandParams[1]))
		: ETransitionEvent::No_Transition;
	NewNode->bDontWaitForTransitionToFinish = CommandParams.IsValidIndex(2)
		? CommandParams[2] == TEXT("true") ? true : false
		: false;
	NewNode->CustomTransitionEventName = CommandParams.IsValidIndex(3)
		? *CommandParams[3]
		: TEXT("");

	return NewNode;
}

UCharacterMoveNode* UYarnParser::CreateCharacterMoveNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCharacterMoveNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	NewNode->CharacterId = *CommandParams[0];
	NewNode->CharacterPositioning = CommandParams.IsValidIndex(1)
		? static_cast<ECharacterPositioning>(StaticEnum<ECharacterPositioning>()->GetValueByNameString(*CommandParams[1]))
		: ECharacterPositioning::CENTER;
	NewNode->bMoveWithAnimation = CommandParams.IsValidIndex(2)
		? CommandParams[2] == TEXT("true") ? true : false
		: false;

	return NewNode;
}

UCharacterRenameNode* UYarnParser::CreateCharacterRenameNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCharacterRenameNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CharacterId = *CommandParams[0];
	NewNode->NewCharacterName = FText::FromString(*CommandParams[1]);
	
	return NewNode;
}

UCharacterInteractiveRenameNode* UYarnParser::CreateCharacterInteractiveRenameNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCharacterInteractiveRenameNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CharacterId = *CommandParams[0];

	return NewNode;
}

UCharacterAddLayerNode* UYarnParser::CreateCharacterAddLayerNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCharacterAddLayerNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CharacterId = *CommandParams[0];
	NewNode->LayerId = *CommandParams[1];
	NewNode->ImageId = *CommandParams[2];
	
	return NewNode;
}

UCharacterRemoveLayerNode* UYarnParser::CreateCharacterRemoveLayerNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCharacterRemoveLayerNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CharacterId = *CommandParams[0];
	NewNode->LayerId = *CommandParams[1];

	return NewNode;
}

UCharacterMemoryGetNode* UYarnParser::CreateCharacterMemoryGetNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCharacterMemoryGetNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	NewNode->CharacterId = *CommandParams[0];
	NewNode->CharacterMemoryValueId = *CommandParams[1];

	const FString VariableName = CommandParams[2];
	auto* VariableSetNode = CreateVariableSetNodeFromInstruction(Graph, VariableName);
	VariableSetNode->CreateNewGuid();
	VariableSetNode->PostPlacedNewNode();
	VariableSetNode->ReconstructNode();
	VariableSetNode->NodePosX = 0;
	VariableSetNode->NodePosY = 0;
	VariableSetNode->SnapToGrid(16);
	Graph->AddNode(VariableSetNode);

	auto* Property = VariableSetNode->GetPropertyForVariable();

	if (Property->IsA<FBoolProperty>())
	{
		NewNode->Type = EMemoryType::Bool;
	}
	else if (Property->IsA<FByteProperty>())
	{
		NewNode->Type = EMemoryType::Byte;
	}
	else if (Property->IsA<FFloatProperty>())
	{
		NewNode->Type = EMemoryType::Float;
	}
	else if (Property->IsA<FIntProperty>())
	{
		NewNode->Type = EMemoryType::Integer;
	}
	else if (Property->IsA<FInt64Property>())
	{
		NewNode->Type = EMemoryType::Integer64;
	}
	else if (Property->IsA<FStrProperty>())
	{
		NewNode->Type = EMemoryType::String;
	}

	NewNode->CreateNewGuid();
	NewNode->PostPlacedNewNode();
	NewNode->ReconstructNode();

	NewNode->FindPin(TEXT("Value"))->MakeLinkTo(VariableSetNode->FindPinChecked(VariableName, EGPD_Input));
	
	return NewNode;
}

UCharacterMemorySetNode* UYarnParser::CreateCharacterMemorySetNodeFromCommandParams(UEdGraph* Graph, const TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCharacterMemorySetNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	NewNode->CharacterId = *CommandParams[0];
	NewNode->CharacterMemoryValueId = *CommandParams[1];
	
	const FString VariableName = CommandParams[2];
	auto* VariableGetNode = CreateVariableGetNodeFromVariableName(Graph, VariableName);
	VariableGetNode->CreateNewGuid();
	VariableGetNode->PostPlacedNewNode();
	VariableGetNode->ReconstructNode();
	VariableGetNode->NodePosX = 0;
	VariableGetNode->NodePosY = 0;
	VariableGetNode->SnapToGrid(16);
	Graph->AddNode(VariableGetNode);

	auto* Property = VariableGetNode->GetPropertyForVariable();

	if (Property->IsA<FBoolProperty>())
	{
		NewNode->Type = EMemoryType::Bool;
	}
	else if (Property->IsA<FByteProperty>())
	{
		NewNode->Type = EMemoryType::Byte;
	}
	else if (Property->IsA<FFloatProperty>())
	{
		NewNode->Type = EMemoryType::Float;
	}
	else if (Property->IsA<FIntProperty>())
	{
		NewNode->Type = EMemoryType::Integer;
	}
	else if (Property->IsA<FInt64Property>())
	{
		NewNode->Type = EMemoryType::Integer64;
	}
	else if (Property->IsA<FStrProperty>())
	{
		NewNode->Type = EMemoryType::String;
	}
	
	NewNode->CreateNewGuid();
	NewNode->PostPlacedNewNode();
	NewNode->ReconstructNode();
		
	NewNode->FindPin(TEXT("Value"))->MakeLinkTo(VariableGetNode->GetValuePin());
	
	return NewNode;
}

UK2Node* UYarnParser::CreateCharacter3DNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	const FString CharacterNodeIdentifier = CommandParams[0];
	CommandParams.RemoveAt(0);
	if (CharacterNodeIdentifier == TEXT("show"))
	{
		return CreateCharacter3DShowNodeFromCommandParams(Graph, CommandParams);
	}
	else if (CharacterNodeIdentifier == TEXT("hide"))
	{
		return CreateCharacter3DHideNodeFromCommandParams(Graph, CommandParams);
	}

	return nullptr;
}

UCharacter3DShowNode* UYarnParser::CreateCharacter3DShowNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCharacter3DShowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CharacterId = *CommandParams[0];
	NewNode->EmotionId = *CommandParams[1];
	NewNode->DialogSceneId = *CommandParams[2];
	NewNode->SpawnLocation = *CommandParams[3];
	
	return NewNode;
}

UCharacter3DHideNode* UYarnParser::CreateCharacter3DHideNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCharacter3DHideNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	NewNode->CharacterId = *CommandParams[0];
	
	return NewNode;
}

UK2Node* UYarnParser::CreateCgNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	const FString CgNodeIdentifier = CommandParams[0];
	CommandParams.RemoveAt(0);
	if (CgNodeIdentifier == TEXT("show"))
	{
		return CreateCgShowNodeFromCommandParams(Graph, CommandParams);
	}
	else if (CgNodeIdentifier == TEXT("hide"))
	{
		return CreateCgHideNodeFromCommandParams(Graph, CommandParams);
	}
	else if (CgNodeIdentifier == TEXT("layer"))
	{
		const FString LayerOperator = CommandParams[0];
		CommandParams.RemoveAt(0);

		if (LayerOperator == TEXT("add"))
		{
			return CreateCgAddLayerNodeFromCommandParams(Graph, CommandParams);
		}
		else if (LayerOperator == TEXT("remove"))
		{
			return CreateCgRemoveLayerNodeFromCommandParams(Graph, CommandParams);
		}
	}
	
	return nullptr;
}

UCgShowNode* UYarnParser::CreateCgShowNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCgShowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CgId = *CommandParams[0];
	NewNode->TransitionEvent = CommandParams.IsValidIndex(1)
		? static_cast<ETransitionEvent>(StaticEnum<ETransitionEvent>()->GetValueByNameString(*CommandParams[1]))
		: ETransitionEvent::No_Transition;
	NewNode->bDontWaitForTransitionToFinish = CommandParams.IsValidIndex(2)
		? CommandParams[2] == TEXT("true") ? true : false
		: false;
	NewNode->CustomTransitionEventName = CommandParams.IsValidIndex(3)
		? *CommandParams[3]
		: TEXT("");
	
	return NewNode;
}

UCgHideNode* UYarnParser::CreateCgHideNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCgHideNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->TransitionEvent = CommandParams.IsValidIndex(0)
		? static_cast<ETransitionEvent>(StaticEnum<ETransitionEvent>()->GetValueByNameString(*CommandParams[0]))
		: ETransitionEvent::No_Transition;
	NewNode->bDontWaitForTransitionToFinish = CommandParams.IsValidIndex(1)
		? CommandParams[1] == TEXT("true") ? true : false
		: false;
	NewNode->CustomTransitionEventName = CommandParams.IsValidIndex(2)
		? *CommandParams[2]
		: TEXT("");
	
	return NewNode;
}

UCgAddLayerNode* UYarnParser::CreateCgAddLayerNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCgAddLayerNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CgId = *CommandParams[0];
	NewNode->LayerId = *CommandParams[1];
	NewNode->ImageId = *CommandParams[2];
	
	return NewNode;
}

UCgRemoveLayerNode* UYarnParser::CreateCgRemoveLayerNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UCgRemoveLayerNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CgId = *CommandParams[0];
	NewNode->LayerId = *CommandParams[1];
	
	return NewNode;
}

UK2Node* UYarnParser::CreateSceneBackgroundNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	const FString SceneBackgroundNodeIdentifier = CommandParams[0];
	CommandParams.RemoveAt(0);
	if (SceneBackgroundNodeIdentifier == TEXT("show"))
	{
		return CreateSceneBackgroundShowNodeFromCommandParams(Graph, CommandParams);
	}
	else if (SceneBackgroundNodeIdentifier == TEXT("hide"))
	{
		return CreateSceneBackgroundHideNodeFromCommandParams(Graph, CommandParams);
	}
	else if (SceneBackgroundNodeIdentifier == TEXT("layer"))
	{
		const FString LayerOperator = CommandParams[0];
		CommandParams.RemoveAt(0);

		if (LayerOperator == TEXT("add"))
		{
			return CreateSceneBackgroundAddLayerNodeFromCommandParams(Graph, CommandParams);
		}
		else if (LayerOperator == TEXT("remove"))
		{
			return CreateSceneBackgroundRemoveLayerNodeFromCommandParams(Graph, CommandParams);
		}
	}
	
	return nullptr;
}

USceneBackgroundShowNode* UYarnParser::CreateSceneBackgroundShowNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<USceneBackgroundShowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->SceneBackgroundId = *CommandParams[0];
	NewNode->TransitionEvent = CommandParams.IsValidIndex(1)
		? static_cast<ETransitionEvent>(StaticEnum<ETransitionEvent>()->GetValueByNameString(*CommandParams[1]))
		: ETransitionEvent::No_Transition;
	NewNode->bDontWaitForTransitionToFinish = CommandParams.IsValidIndex(2)
		? CommandParams[2] == TEXT("true") ? true : false
		: false;
	NewNode->CustomTransitionEventName = CommandParams.IsValidIndex(3)
		? *CommandParams[3]
		: TEXT("");
	
	return NewNode;
}

USceneBackgroundHideNode* UYarnParser::CreateSceneBackgroundHideNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<USceneBackgroundHideNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->TransitionEvent = CommandParams.IsValidIndex(0)
		? static_cast<ETransitionEvent>(StaticEnum<ETransitionEvent>()->GetValueByNameString(*CommandParams[0]))
		: ETransitionEvent::No_Transition;
	NewNode->bDontWaitForTransitionToFinish = CommandParams.IsValidIndex(1)
		? CommandParams[1] == TEXT("true") ? true : false
		: false;
	NewNode->CustomTransitionEventName = CommandParams.IsValidIndex(2)
		? *CommandParams[2]
		: TEXT("");
	
	return NewNode;
}

USceneBackgroundAddLayerNode* UYarnParser::CreateSceneBackgroundAddLayerNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<USceneBackgroundAddLayerNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->SceneBackgroundId = *CommandParams[0];
	NewNode->LayerId = *CommandParams[1];
	NewNode->ImageId = *CommandParams[2];
	
	return NewNode;
}

USceneBackgroundRemoveLayerNode* UYarnParser::CreateSceneBackgroundRemoveLayerNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<USceneBackgroundRemoveLayerNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->SceneBackgroundId = *CommandParams[0];
	NewNode->LayerId = *CommandParams[1];
	
	return NewNode;
}

UK2Node* UYarnParser::CreateDialogSceneNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	const FString DialogSceneNodeIdentifier = CommandParams[0];
	CommandParams.RemoveAt(0);
	if (DialogSceneNodeIdentifier == TEXT("show"))
	{
		return CreateDialogSceneShowNodeFromCommandParams(Graph, CommandParams);
	}
	else if (DialogSceneNodeIdentifier == TEXT("hide"))
	{
		return CreateDialogSceneHideNodeFromCommandParams(Graph, CommandParams);
	}
	else if (DialogSceneNodeIdentifier == TEXT("camera"))
	{
		return CreateDialogSceneSwitchCameraNodeFromCommandParams(Graph, CommandParams);
	}
	
	return nullptr;
}

UDialogSceneShowNode* UYarnParser::CreateDialogSceneShowNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogSceneShowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->DialogSceneId = *CommandParams[0];
	NewNode->CameraName = *CommandParams[1];
	
	return NewNode;
}

UDialogSceneHideNode* UYarnParser::CreateDialogSceneHideNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogSceneHideNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	return NewNode;
}

UDialogSceneSwitchCameraNode* UYarnParser::CreateDialogSceneSwitchCameraNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogSceneSwitchCameraNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->DialogSceneId = *CommandParams[0];
	NewNode->CameraName = *CommandParams[1];
	NewNode->bDontWaitForTransitionToFinish = CommandParams.IsValidIndex(2)
		? CommandParams[2] == TEXT("true") ? true : false
		: false;
	
	return NewNode;
}

UK2Node* UYarnParser::CreateDialogAudioNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	const FString AudioNodeIdentifier = CommandParams[0];
	CommandParams.RemoveAt(0);
	if (AudioNodeIdentifier == TEXT("play"))
	{
		const FString AudioTypeIdentifier = CommandParams[0];
		CommandParams.RemoveAt(0);
		if (AudioNodeIdentifier == TEXT("bgm"))
		{
			return CreateDialogAudioPlayBGMNodeFromCommandParams(Graph, CommandParams);
		}
		else if (AudioNodeIdentifier == TEXT("sfx"))
		{
			return CreateDialogAudioPlaySoundEffectNodeFromCommandParams(Graph, CommandParams);
		}
		else if (AudioNodeIdentifier == TEXT("charactervo"))
		{
			return CreateDialogAudioPlayCharacterVoiceOverNodeFromCommandParams(Graph, CommandParams);
		}
		else if (AudioNodeIdentifier == TEXT("dialogvo"))
		{
			return CreateDialogAudioPlayDialogVoiceOverNodeFromCommandParams(Graph, CommandParams);
		}
	}
	else if (AudioNodeIdentifier == TEXT("stop"))
	{
		const FString AudioTypeIdentifier = CommandParams[0];
		CommandParams.RemoveAt(0);
		if (AudioNodeIdentifier == TEXT("bgm"))
		{
			return CreateDialogAudioStopBGMNodeFromCommandParams(Graph, CommandParams);
		}
		else if (AudioNodeIdentifier == TEXT("sfx"))
		{
			return CreateDialogAudioStopSoundEffectNodeFromCommandParams(Graph, CommandParams);
		}
		else if (AudioNodeIdentifier == TEXT("vo"))
		{
			return CreateDialogAudioStopVoiceOverNodeFromCommandParams(Graph, CommandParams);
		}
	}
	
	return nullptr;
}

UDialogAudioPlayBGMNode* UYarnParser::CreateDialogAudioPlayBGMNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogAudioPlayBGMNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->BackgroundMusicId = *CommandParams[0];
	NewNode->Volume = FCString::Atof(*CommandParams[1]);
	NewNode->Pitch = FCString::Atof(*CommandParams[2]);
	NewNode->StartTime = FCString::Atof(*CommandParams[3]);
	NewNode->bWaitForAudioToFinish = CommandParams.IsValidIndex(4)
		? CommandParams[4] == TEXT("true") ? true : false
	: false;
	NewNode->bIsLooping = CommandParams.IsValidIndex(5)
		? CommandParams[5] == TEXT("true") ? true : false
		: false;
	
	return NewNode;
}

UDialogAudioPlaySoundEffectNode* UYarnParser::CreateDialogAudioPlaySoundEffectNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogAudioPlaySoundEffectNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->SoundEffectId = *CommandParams[0];
	NewNode->Volume = FCString::Atof(*CommandParams[1]);
	NewNode->Pitch = FCString::Atof(*CommandParams[2]);
	NewNode->StartTime = FCString::Atof(*CommandParams[3]);
	NewNode->bWaitForAudioToFinish = CommandParams.IsValidIndex(4)
		? CommandParams[4] == TEXT("true") ? true : false
	: false;
	
	return NewNode;
}

UDialogAudioPlayCharacterVoiceOverNode* UYarnParser::CreateDialogAudioPlayCharacterVoiceOverNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogAudioPlayCharacterVoiceOverNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->CharacterId = *CommandParams[0];
	NewNode->VoiceOverId = *CommandParams[1];
	NewNode->Volume = FCString::Atof(*CommandParams[2]);
	NewNode->Pitch = FCString::Atof(*CommandParams[3]);
	NewNode->StartTime = FCString::Atof(*CommandParams[4]);
	NewNode->bWaitForAudioToFinish = CommandParams.IsValidIndex(5)
		? CommandParams[5] == TEXT("true") ? true : false
	: false;
	
	return NewNode;
}

UDialogAudioPlayDialogVoiceOverNode* UYarnParser::CreateDialogAudioPlayDialogVoiceOverNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogAudioPlayDialogVoiceOverNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->DialogId = *CommandParams[0];
	NewNode->VoiceOverId = *CommandParams[1];
	NewNode->Volume = FCString::Atof(*CommandParams[2]);
	NewNode->Pitch = FCString::Atof(*CommandParams[3]);
	NewNode->StartTime = FCString::Atof(*CommandParams[4]);
	NewNode->bWaitForAudioToFinish = CommandParams.IsValidIndex(5)
		? CommandParams[5] == TEXT("true") ? true : false
	: false;
	
	return NewNode;
}

UDialogAudioStopBGMNode* UYarnParser::CreateDialogAudioStopBGMNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogAudioStopBGMNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	return NewNode;
}

UDialogAudioStopSoundEffectNode* UYarnParser::CreateDialogAudioStopSoundEffectNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogAudioStopSoundEffectNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	return NewNode;
}

UDialogAudioStopVoiceOverNode* UYarnParser::CreateDialogAudioStopVoiceOverNodeFromCommandParams(UEdGraph* Graph, TArray<FString>& CommandParams)
{
	auto* NewNode = NewObject<UDialogAudioStopVoiceOverNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	return NewNode;
}

void UYarnParser::SetupPinWithParam(UEdGraph* Graph, UEdGraphPin* Pin, const FYarnOperand& Param, TMap<FString, UEdGraphNode*>& FunctionResultNodes)
{
	if (Param.Type == EYarnOperandType::StringValue)
	{
		if (!Param.StringValue.StartsWith(TEXT("$")))
		{
			Pin->DefaultValue = Param.StringValue;
		}
		else
		{
			auto* VariableGetNode = CreateVariableGetNodeFromVariableName(Graph, Param.StringValue.Right(Param.StringValue.Len()-1));
			
			VariableGetNode->CreateNewGuid();
			VariableGetNode->PostPlacedNewNode();
			VariableGetNode->ReconstructNode();
			VariableGetNode->NodePosX = 0;
			VariableGetNode->NodePosY = 0;
			VariableGetNode->SnapToGrid(16);
			Graph->AddNode(VariableGetNode);
			
			Pin->MakeLinkTo(VariableGetNode->GetValuePin());
		}
	}
	else if (Param.Type == EYarnOperandType::FunctionResult)
	{
		auto* FunctionNode = FunctionResultNodes.FindAndRemoveChecked(Param.StringValue + Param.Guid.ToString());

		Pin->MakeLinkTo(FunctionNode->FindPinChecked(UEdGraphSchema_K2::PN_ReturnValue));
	}
	else
	{
		Pin->DefaultValue = Param.StringValue;
	}
}
