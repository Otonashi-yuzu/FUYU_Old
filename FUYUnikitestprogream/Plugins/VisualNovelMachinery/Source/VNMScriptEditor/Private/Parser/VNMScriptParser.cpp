// Fill out your copyright notice in the Description page of Project Settings.


#include "Parser/VNMScriptParser.h"

#include "CgAddLayerNode.h"
#include "CgHideNode.h"
#include "CgRemoveLayerNode.h"
#include "CgShowNode.h"
#include "Character3DHideNode.h"
#include "Character3DShowNode.h"
#include "CharacterAddLayerNode.h"
#include "CharacterHideNode.h"
#include "CharacterRemoveLayerNode.h"
#include "CharacterShowNode.h"
#include "DialogAudioPlayBGMNode.h"
#include "DialogAudioPlayCharacterVoiceOverNode.h"
#include "DialogAudioPlayDialogVoiceOverNode.h"
#include "DialogAudioPlaySoundEffectNode.h"
#include "DialogAudioStopBGMNode.h"
#include "DialogAudioStopSoundEffectNode.h"
#include "DialogAudioStopVoiceOverNode.h"
#include "DialogBlueprint.h"
#include "DialogEndNode.h"
#include "DialogSceneHideNode.h"
#include "DialogSceneShowNode.h"
#include "DialogSceneSwitchCameraNode.h"
#include "DialogStartNode.h"
#include "DialogWindowNode.h"
#include "SceneBackgroundAddLayerNode.h"
#include "SceneBackgroundHideNode.h"
#include "SceneBackgroundRemoveLayerNode.h"
#include "SceneBackgroundShowNode.h"
#include "BlueprintEditor.h"
#include "BlueprintEditorModes.h"
#include "CharacterInteractiveRenameNode.h"
#include "CharacterMemoryGetNode.h"
#include "CharacterMemorySetNode.h"
#include "CharacterMoveNode.h"
#include "CharacterRenameNode.h"
#include "DialogChoiceNode.h"
#include "DialogInputNode.h"
#include "DialogMemoryGetNode.h"
#include "DialogMemorySetNode.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MathExpression.h"
#include "K2Node_VariableGet.h"
#include "K2Node_VariableSet.h"
#include "LogCategoryVNMScriptEditor.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "WidgetHideNode.h"
#include "WidgetShowNode.h"
#include "Kismet/KismetStringLibrary.h"
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
}

void UVNMScriptParser::CreateDialogBlueprintFromStringArray(UDialogBlueprint* DialogBlueprint, UDialogStartNode* StartNode, const TArray<FString>& DialogLines)
{
	UEdGraphNode* LastNode = StartNode;

	
	auto* Graph = DialogBlueprint->GetLastEditedUberGraph();

	TMap<FString, FPinsArrayStruct> LabelsToOutPins;
	TMap<FString, UEdGraphPin*> LabelsToInPins;

	TArray<FString> Variables;

	Graph->Modify();

	FString NextLabel;

	for (FString Line : DialogLines)
	{
		Line.ReplaceInline(TEXT("\t"), TEXT(""));
		Line.TrimStartAndEndInline();
		TArray<FString> Labels;
		UK2Node* NewNode = nullptr;

		// Comment
		if (Line.StartsWith("#"))
		{
			continue;
		}

		// Label
		if (Line.StartsWith(":"))
		{
			NextLabel = Line.Right(Line.Len()-1);

			auto* LastThenPin = LastNode->FindPin(UEdGraphSchema_K2::PN_Then);

			if (LastThenPin && LastThenPin->LinkedTo.Num() == 0)
			{
				FPinsArrayStruct& PinsArray = LabelsToOutPins.FindOrAdd(NextLabel);
				FPinInfoStruct PinInfo;
				PinInfo.Pin = LastThenPin;
				PinInfo.Index = 0;
				PinsArray.PinInfos.AddUnique(PinInfo);

				auto** LabelPin = LabelsToInPins.Find(NextLabel);
				if (LabelPin)
				{
					(*LabelPin)->MakeLinkTo(LastThenPin);
				}
			}
			
			continue;
		}

		// Goto
		if (Line.StartsWith("->"))
		{
			FString Unused;
			FString Label;
			Line.Split(" ", &Unused, &Label);
			
			auto* LastThenPin = LastNode->FindPin(UEdGraphSchema_K2::PN_Then);

			if (LastThenPin)
			{
				FPinsArrayStruct& PinsArray = LabelsToOutPins.FindOrAdd(Label);
				FPinInfoStruct PinInfo;
				PinInfo.Pin = LastThenPin;
				PinInfo.Index = 0;
				PinsArray.PinInfos.AddUnique(PinInfo);

				auto** LabelPin = LabelsToInPins.Find(Label);
				if (LabelPin)
				{
					(*LabelPin)->MakeLinkTo(LastThenPin);
				}
			}

			continue;
		}

		if (Line.StartsWith("var"))
		{
			Variables.Add(AddVariableToBlueprint(Graph, Line));
			continue;
		}

		// Flow nodes
		if (Line.StartsWith("branch"))
		{
			NewNode = CreateBranchNodeFromLine(Graph, Line, Variables, Labels);
		}

		// Dialog nodes
		else if (Line.StartsWith("dialog.text"))
		{
			NewNode = CreateDialogTextNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("dialog.end"))
		{
			NewNode = CreateDialogEndNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("dialog.window.control"))
		{
			NewNode = CreateDialogWindowNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("dialog.choice.conditional"))
		{
			NewNode = CreateDialogChoiceConditionalNodeFromLine(Graph, Line, Labels);
		}
		else if (Line.StartsWith("dialog.choice"))
		{
			NewNode = CreateDialogChoiceNodeFromLine(Graph, Line, Labels);
		}
		else if (Line.StartsWith("dialog.memory.set"))
		{
			NewNode = CreateDialogMemorySetNodeFromLine(Graph, Line);
		}

		// Widget
		else if (Line.StartsWith("widget.show"))
		{
			NewNode = CreateWidgetShowNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("widget.hide"))
		{
			NewNode = CreateWidgetHideNodeFromLine(Graph, Line);
		}

		// Character nodes
		else if (Line.StartsWith("character.show"))
		{
			NewNode = CreateCharacterShowNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("character.hide"))
		{
			NewNode = CreateCharacterHideNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("character.move"))
		{
			NewNode = CreateCharacterMoveNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("character.rename.interactive"))
		{
			NewNode = CreateCharacterInteractiveRenameNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("character.rename"))
		{
			NewNode = CreateCharacterRenameNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("character.addlayer"))
		{
			NewNode = CreateCharacterAddLayerNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("character.removelayer"))
		{
			NewNode = CreateCharacterRemoveLayerNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("character.memory.set"))
		{
			NewNode = CreateCharacterMemorySetNodeFromLine(Graph, Line);
		}

		// Character 3D nodes
		else if (Line.StartsWith("character3d.show"))
		{
			NewNode = CreateCharacter3DShowNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("character3d.hide"))
		{
			NewNode = CreateCharacter3DHideNodeFromLine(Graph, Line);
		}

		// Cg nodes
		else if (Line.StartsWith("cg.show"))
		{
			NewNode = CreateCgShowNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("cg.hide"))
		{
			NewNode = CreateCgHideNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("cg.addlayer"))
		{
			NewNode = CreateCgAddLayerNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("cg.removelayer"))
		{
			NewNode = CreateCgRemoveLayerNodeFromLine(Graph, Line);
		}

		// Scene Background nodes
		else if (Line.StartsWith("scenebackground.show"))
		{
			NewNode = CreateSceneBackgroundShowNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("scenebackground.hide"))
		{
			NewNode = CreateSceneBackgroundHideNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("scenebackground.addlayer"))
		{
			NewNode = CreateSceneBackgroundAddLayerNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("scenebackground.removelayer"))
		{
			NewNode = CreateSceneBackgroundRemoveLayerNodeFromLine(Graph, Line);
		}

		// Dialog Scene nodes
		else if (Line.StartsWith("dialogscene.show"))
		{
			NewNode = CreateDialogSceneShowNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("dialogscene.hide"))
		{
			NewNode = CreateDialogSceneHideNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("dialogscene.switchcamera"))
		{
			NewNode = CreateDialogSceneSwitchCameraNodeFromLine(Graph, Line);
		}

		// Dialog Audio nodes
		else if (Line.StartsWith("audio.play.bgm"))
		{
			NewNode = CreateDialogAudioPlayBGMNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("audio.play.sfx"))
		{
			NewNode = CreateDialogAudioPlaySoundEffectNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("audio.play.character.voiceover"))
		{
			NewNode = CreateDialogAudioPlayCharacterVoiceOverNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("audio.play.dialog.voiceover"))
		{
			NewNode = CreateDialogAudioPlayDialogVoiceOverNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("audio.stop.bgm"))
		{
			NewNode = CreateDialogAudioStopBGMNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("audio.stop.sfx"))
		{
			NewNode = CreateDialogAudioStopSoundEffectNodeFromLine(Graph, Line);
		}
		else if (Line.StartsWith("audio.stop.voiceover"))
		{
			NewNode = CreateDialogAudioStopVoiceOverNodeFromLine(Graph, Line);
		}

		else
		{
			if (!Line.Contains(TEXT("=")))
			{
				continue;
			}

			NewNode = CreateVariableSetNodeFromLine(Graph, Line);
		}

		
		NewNode->CreateNewGuid();
		NewNode->PostPlacedNewNode();
		NewNode->ReconstructNode();
		NewNode->NodePosX = 0;
		NewNode->NodePosY = 0;
		NewNode->SnapToGrid(16);
		UEdGraphPin* NewExecPin = NewNode->FindPinChecked(UEdGraphSchema_K2::PN_Execute);

		if (NewExecPin->LinkedTo.Num() > 0)
		{
			NewExecPin = NewExecPin->LinkedTo[0]->GetOwningNode()->FindPinChecked(UEdGraphSchema_K2::PN_Execute);
		}

		// If choices or branch
		if (Labels.Num() > 0)
		{
			int32 LabelsCounter = 0;
			for (int32 i = 0; i < NewNode->Pins.Num(); i++)
			{
				auto* Pin = NewNode->Pins[i];
				if (Pin->Direction == EGPD_Input || Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Exec)
				{
					continue;
				}

				const FString Label = Labels[LabelsCounter];
				FPinsArrayStruct& PinsArray = LabelsToOutPins.FindOrAdd(Label);
				FPinInfoStruct PinInfo;
				PinInfo.Pin = Pin;
				PinInfo.Index = LabelsCounter++;
				PinsArray.PinInfos.AddUnique(PinInfo);

				auto** LabelPin = LabelsToInPins.Find(Label);
				if (LabelPin)
				{
					(*LabelPin)->MakeLinkTo(Pin);
				}
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
		}
		else
		{
			auto* LastThenPin = LastNode->FindPin(UEdGraphSchema_K2::PN_Then);

			if (LastThenPin)
			{
				NewExecPin->MakeLinkTo(LastThenPin);
			}
		}
		
		Graph->AddNode(NewNode, true, false);

		LastNode = NewNode;
	}

	FormatDialogBlueprint(DialogBlueprint, StartNode);
}

void UVNMScriptParser::FormatDialogBlueprint(UDialogBlueprint* DialogBlueprint, UDialogStartNode* StartNode)
{
	UEdGraphNode* CurrentNode = StartNode;

	TArray<FNodeColumn> Columns;

	struct FNodeChoiceInfo
	{
		UEdGraphNode* Node;
		int32 NextChoiceIndex;
		int32 ColumnIndex;
	};

	TArray<FNodeChoiceInfo> ChoicesStack;

	int32 CurrentColumnIndex = 0;
	
	while (CurrentNode)
	{
		const int32 FoundColumnIndex = FindIndexOfNode(Columns, CurrentNode); 
		if (FoundColumnIndex != INDEX_NONE)
		{
			if (ChoicesStack.Num() > 0)
			{
				FNodeChoiceInfo ChoiceInfo = ChoicesStack.Pop();
				
				TArray<UEdGraphPin*> OutputPins = GetOutputExecutionPins(ChoiceInfo.Node);

				if (OutputPins.IsValidIndex(ChoiceInfo.NextChoiceIndex))
				{
					auto* NextOutputPin = OutputPins[ChoiceInfo.NextChoiceIndex];
					if (!NextOutputPin || NextOutputPin->LinkedTo.Num() == 0)
					{
						CurrentNode = nullptr;
						continue;
					}
					
					CurrentNode = NextOutputPin->LinkedTo[0]->GetOwningNode();
					CurrentColumnIndex = ChoiceInfo.ColumnIndex + 1;
				}
				
				if (OutputPins.IsValidIndex(ChoiceInfo.NextChoiceIndex + 1))
				{
					ChoiceInfo.NextChoiceIndex += 1;
					ChoicesStack.Add(ChoiceInfo);
				}

				continue;
			}
			else
			{
				UE_LOG(LogVNMScriptEditor, Error, TEXT("UVNMScriptParser::FormatDialogBlueprint: While trying to format found infinite loop! Aborting!"));
				CurrentNode = nullptr;
				break;
			}
		}
		
		if (!Columns.IsValidIndex(CurrentColumnIndex))
		{
			Columns.Add(FNodeColumn());
		}

		FNodeColumn& Column = Columns[CurrentColumnIndex];
		int32 IndexInColumn = INDEX_NONE;

		if (!Column.Nodes.Contains(CurrentNode))
		{
			IndexInColumn = Column.Nodes.Add(CurrentNode);
		}
		else
		{
			IndexInColumn = Column.Nodes.IndexOfByKey(CurrentNode);
		}

		if (CurrentNode->IsA<UDialogChoiceNode>() || CurrentNode->IsA<UK2Node_IfThenElse>())
		{
			FNodeChoiceInfo ChoiceInfo;
			ChoiceInfo.Node = CurrentNode;
			ChoiceInfo.NextChoiceIndex = 1;
			ChoiceInfo.ColumnIndex = CurrentColumnIndex;

			TArray<UEdGraphPin*> OutputPins = GetOutputExecutionPins(CurrentNode);

			if (OutputPins.Num() == 0)
			{
				CurrentNode = nullptr;
				continue;
			}

			if (OutputPins.IsValidIndex(1))
			{
				ChoicesStack.Add(ChoiceInfo);
			}

			if (auto* BranchNode = Cast<UK2Node_IfThenElse>(CurrentNode))
			{
				auto& PreviousColumn = Columns[CurrentColumnIndex-1];
				if (BranchNode->GetConditionPin()->LinkedTo.Num() > 0)
				{
					if (PreviousColumn.Nodes.Num() < IndexInColumn - 2 || PreviousColumn.Nodes.Num() == 1)
					{
						PreviousColumn.Nodes.Add(BranchNode->GetConditionPin()->LinkedTo[0]->GetOwningNode());
					}
					else
					{
						PreviousColumn.Nodes.Insert(BranchNode->GetConditionPin()->LinkedTo[0]->GetOwningNode(), FMath::Max(1, IndexInColumn - 1));
					}
				}
			}
			else if (auto* ChoiceNode = Cast<UDialogChoiceNode>(CurrentNode))
			{
				auto& PreviousColumn = Columns[CurrentColumnIndex-1];
				auto BooleanPins = GetInputBooleanPins(ChoiceNode);

				int32 PreviousBooleanPinIndex = INDEX_NONE;

				for (int32 PinIndex = 0; PinIndex < BooleanPins.Num(); PinIndex++)
				{
					auto* BooleanPin = BooleanPins[PinIndex];
					const int32 InvertedPinIndex = BooleanPins.Num() - 1 - PinIndex;

					if (BooleanPin->LinkedTo.Num() == 0)
					{
						continue;
					}

					const int32 BooleanPinIndex = PreviousBooleanPinIndex != INDEX_NONE ? PreviousBooleanPinIndex + 1 : IndexInColumn + InvertedPinIndex - 1;
					
					if (PreviousColumn.Nodes.Num() < BooleanPinIndex || PreviousColumn.Nodes.Num() == 1)
					{
						PreviousColumn.Nodes.Add(BooleanPin->LinkedTo[0]->GetOwningNode());
					}
					else
					{
						PreviousColumn.Nodes.Insert(BooleanPin->LinkedTo[0]->GetOwningNode(), FMath::Max(1, BooleanPinIndex));
					}

					PreviousBooleanPinIndex = BooleanPinIndex;
				}
			}

			CurrentNode = OutputPins[0]->LinkedTo[0]->GetOwningNode();
			CurrentColumnIndex++;
			continue;
		}

		if (CurrentNode->IsA<UK2Node_VariableSet>())
		{
			auto* VariableSetNode = Cast<UK2Node_VariableSet>(CurrentNode);

			
			auto* InputPin = VariableSetNode->FindPinChecked(VariableSetNode->GetVarName(), EGPD_Input);
			if (InputPin->LinkedTo.Num() > 0)
			{
				Columns[CurrentColumnIndex - 1].Nodes.Add(InputPin->LinkedTo[0]->GetOwningNode());
			}
		}
		else if (CurrentNode->IsA<UDialogMemorySetNode>() || CurrentNode->IsA<UCharacterMemorySetNode>())
		{
			auto* InputPin = CurrentNode->FindPinChecked(TEXT("Value"), EGPD_Input);
			if (InputPin->LinkedTo.Num() > 0)
			{
				Columns[CurrentColumnIndex - 1].Nodes.Add(InputPin->LinkedTo[0]->GetOwningNode());
			}
		}

		auto* ThenPin = CurrentNode->FindPin(UEdGraphSchema_K2::PN_Then);

		if (!ThenPin || ThenPin->LinkedTo.Num() == 0)
		{
			if (ChoicesStack.Num() > 0)
			{
				FNodeChoiceInfo ChoiceInfo = ChoicesStack.Pop();
				
				TArray<UEdGraphPin*> OutputPins = GetOutputExecutionPins(ChoiceInfo.Node);

				if (OutputPins.IsValidIndex(ChoiceInfo.NextChoiceIndex))
				{
					auto* NextOutputPin = OutputPins[ChoiceInfo.NextChoiceIndex];
					if (!NextOutputPin || NextOutputPin->LinkedTo.Num() == 0)
					{
						CurrentNode = nullptr;
						continue;
					}
					
					CurrentNode = NextOutputPin->LinkedTo[0]->GetOwningNode();
					CurrentColumnIndex = ChoiceInfo.ColumnIndex + 1;
				}
				
				if (OutputPins.IsValidIndex(ChoiceInfo.NextChoiceIndex + 1))
				{
					ChoiceInfo.NextChoiceIndex += 1;
					ChoicesStack.Add(ChoiceInfo);
				}

				continue;
			}
			
			CurrentNode = nullptr;
			continue;
		}

		CurrentNode = ThenPin->LinkedTo[0]->GetOwningNode();
		CurrentColumnIndex++;
	}
	
	constexpr int32 NodeSize = 350;

	constexpr EGraphAlignment Alignment = EGraphAlignment::Center;
	
	for (int32 ColumnIndex = 0; ColumnIndex < Columns.Num(); ColumnIndex++)
	{
		FNodeColumn& Column = Columns[ColumnIndex];
		for (int32 NodeIndex = 0; NodeIndex < Column.Nodes.Num(); NodeIndex++)
		{
			UEdGraphNode* Node = Column.Nodes[NodeIndex];

			switch (Alignment)
			{
			case EGraphAlignment::Top:
				{
					Node->NodePosX = NodeSize * ColumnIndex;
					Node->NodePosY = NodeSize * NodeIndex;
				}
				break;
			case EGraphAlignment::Center:
				{
					const int32 ColumnHeight = Column.Nodes.Num() * 350;
					Node->NodePosX = NodeSize * ColumnIndex;
					Node->NodePosY = (NodeSize * NodeIndex) - (ColumnHeight / 2);
				}
				break;
			case EGraphAlignment::Bottom:
				{
					const int32 ColumnHeight = Column.Nodes.Num() * 350;
					Node->NodePosX = NodeSize * ColumnIndex;
					Node->NodePosY = NodeSize * NodeIndex - ColumnHeight;
				}
				break;
			}

		}
	}
}

TArray<UEdGraphPin*> UVNMScriptParser::GetOutputExecutionPins(UEdGraphNode* Node)
{
	TArray<UEdGraphPin*> Pins;

	for (auto* Pin: Node->Pins)
	{
		if (Pin->Direction == EGPD_Input || Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Exec)
		{
			continue;
		}

		Pins.Add(Pin);
	}

	return Pins;
}

TArray<UEdGraphPin*> UVNMScriptParser::GetInputBooleanPins(UEdGraphNode* Node)
{
	TArray<UEdGraphPin*> Pins;

	for (auto* Pin: Node->Pins)
	{
		if (Pin->Direction == EGPD_Output || Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Boolean)
		{
			continue;
		}

		Pins.Add(Pin);
	}

	return Pins;
}

FString UVNMScriptParser::AddVariableToBlueprint(UEdGraph* Graph, const FString& Line)
{
	auto * Blueprint = Cast<UBlueprint>(Graph->GetOuter());

	if (!Blueprint)
	{
		return TEXT("");
	}
	
	TArray<FString> Tokens;
	Line.ParseIntoArrayWS(Tokens);

	const FString VariableTypeString = Tokens[1];
	const FString VariableName = Tokens[2];

	UEdGraphNode::FCreatePinParams PinParams;

	FEdGraphPinType PinType;
	

	if (VariableTypeString == TEXT("int"))
	{
		PinType = FEdGraphPinType(UEdGraphSchema_K2::PC_Int, {}, nullptr, PinParams.ContainerType, PinParams.bIsReference, PinParams.ValueTerminalType);
	}
	else if (VariableTypeString == TEXT("bool"))
	{
		PinType = FEdGraphPinType(UEdGraphSchema_K2::PC_Boolean, {}, nullptr, PinParams.ContainerType, PinParams.bIsReference, PinParams.ValueTerminalType);
	}
	else if (VariableTypeString == TEXT("float"))
	{
		PinType = FEdGraphPinType(UEdGraphSchema_K2::PC_Real, UEdGraphSchema_K2::PC_Float, nullptr, PinParams.ContainerType, PinParams.bIsReference, PinParams.ValueTerminalType);
	}
	else if (VariableTypeString == TEXT("string"))
	{
		PinType = FEdGraphPinType(UEdGraphSchema_K2::PC_String, {}, nullptr, PinParams.ContainerType, PinParams.bIsReference, PinParams.ValueTerminalType);
	}
	
	FBlueprintEditorUtils::AddMemberVariable(Blueprint, *VariableName, PinType);

	return VariableName;
}

UK2Node_VariableGet* UVNMScriptParser::CreateVariableGetNodeFromLine(UEdGraph* Graph, const FString& VariableName)
{
	auto* NewNode = NewObject<UK2Node_VariableGet>(Graph);
	NewNode->SetFlags(RF_Transactional);

	NewNode->VariableReference.SetSelfMember(*VariableName);

	return NewNode;
}

UK2Node_VariableSet* UVNMScriptParser::CreateVariableSetNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UK2Node_VariableSet>(Graph);
	NewNode->SetFlags(RF_Transactional);

	FString VariableName;
	FString Value;
	Line.Split(TEXT("="), &VariableName, &Value);
	VariableName.TrimStartAndEndInline();
	Value.TrimStartAndEndInline();
	
	NewNode->VariableReference.SetSelfMember(*VariableName);
	NewNode->CreateNewGuid();
	NewNode->PostPlacedNewNode();
	NewNode->ReconstructNode();
	NewNode->NodePosX = 0;
	NewNode->NodePosY = 0;
	NewNode->SnapToGrid(16);

	auto* InputPin = NewNode->FindPinChecked(VariableName, EGPD_Input);

	if (Value.Contains(TEXT("\"")))
	{
		InputPin->DefaultValue = Value.TrimQuotes();
	}
	else if (Value.Contains(TEXT("+"))
		|| Value.Contains(TEXT("-"))
		|| Value.Contains(TEXT("*"))
		|| Value.Contains(TEXT("/"))
		|| Value.Contains(TEXT("&&"))
		|| Value.Contains(TEXT("||"))
		|| Value.Contains(TEXT("<"))
		|| Value.Contains(TEXT("<="))
		|| Value.Contains(TEXT(">"))
		|| Value.Contains(TEXT(">="))
		|| Value.Contains(TEXT("==")))
	{
		UK2Node_MathExpression* MathExpressionNode = NewObject<UK2Node_MathExpression>(Graph);
		MathExpressionNode->SetFlags(RF_Transactional);

		MathExpressionNode->Expression = Value;
		
		MathExpressionNode->CreateNewGuid();
		MathExpressionNode->AllocateDefaultPins();
		MathExpressionNode->PostPlacedNewNode();
		MathExpressionNode->ReconstructNode();
		MathExpressionNode->NodePosX = 0;
		MathExpressionNode->NodePosY = 0;
		MathExpressionNode->SnapToGrid(16);
		Graph->AddNode(MathExpressionNode);

		MathExpressionNode->FindPin(UEdGraphSchema_K2::PN_ReturnValue, EGPD_Output)->MakeLinkTo(InputPin);
	}
	else if (Value.StartsWith(TEXT("dialog.memory.get")))
	{
		const FName PinCategory = InputPin->PinType.PinCategory;
		EMemoryType MemoryType = EMemoryType::Bool;
		if (PinCategory == UEdGraphSchema_K2::PC_Boolean)
		{
			MemoryType = EMemoryType::Bool;
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Byte)
		{
			MemoryType = EMemoryType::Byte;
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Float)
		{
			MemoryType = EMemoryType::Float;
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Int)
		{
			MemoryType = EMemoryType::Integer;
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Int64)
		{
			MemoryType = EMemoryType::Integer64;
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_String)
		{
			MemoryType = EMemoryType::String;
		}
		auto* MemoryGetNode = CreateDialogMemoryGetNodeFromLine(Graph, Value, MemoryType);
		MemoryGetNode->CreateNewGuid();
		MemoryGetNode->PostPlacedNewNode();
		MemoryGetNode->ReconstructNode();
		MemoryGetNode->NodePosX = 0;
		MemoryGetNode->NodePosY = 0;
		MemoryGetNode->SnapToGrid(16);
		Graph->AddNode(MemoryGetNode);
		
		MemoryGetNode->FindPin(TEXT("Value"))->MakeLinkTo(InputPin);
	}
	else if (Value.StartsWith(TEXT("character.memory.get")))
	{
		const FName PinCategory = InputPin->PinType.PinCategory;
		EMemoryType MemoryType = EMemoryType::Bool;
		if (PinCategory == UEdGraphSchema_K2::PC_Boolean)
		{
			MemoryType = EMemoryType::Bool;
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Byte)
		{
			MemoryType = EMemoryType::Byte;
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Float)
		{
			MemoryType = EMemoryType::Float;
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Int)
		{
			MemoryType = EMemoryType::Integer;
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Int64)
		{
			MemoryType = EMemoryType::Integer64;
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_String)
		{
			MemoryType = EMemoryType::String;
		}
		
		auto* MemoryGetNode = CreateCharacterMemoryGetNodeFromLine(Graph, Value, MemoryType);
		MemoryGetNode->CreateNewGuid();
		MemoryGetNode->PostPlacedNewNode();
		MemoryGetNode->ReconstructNode();
		MemoryGetNode->NodePosX = 0;
		MemoryGetNode->NodePosY = 0;
		MemoryGetNode->SnapToGrid(16);
		Graph->AddNode(MemoryGetNode);
		
		MemoryGetNode->FindPin(TEXT("Value"))->MakeLinkTo(InputPin);
	}
	else if (Value.StartsWith(TEXT("dialog.input")))
	{
		UDialogInputNode* DialogInputNode = NewObject<UDialogInputNode>(Graph);
		DialogInputNode->SetFlags(RF_Transactional);
		
		DialogInputNode->CreateNewGuid();
		DialogInputNode->AllocateDefaultPins();
		DialogInputNode->PostPlacedNewNode();
		DialogInputNode->ReconstructNode();
		DialogInputNode->NodePosX = 0;
		DialogInputNode->NodePosY = 0;
		DialogInputNode->SnapToGrid(16);
		Graph->AddNode(DialogInputNode);

		// todo handle execution lines
		
		const FName PinCategory = InputPin->PinType.PinCategory;
		UFunction* ConversionFunction = nullptr;
		FName PinName;
		if (PinCategory == UEdGraphSchema_K2::PC_String)
		{
			DialogInputNode->FindPin(TEXT("PlayerInput"))->MakeLinkTo(InputPin);
			DialogInputNode->FindPin(UEdGraphSchema_K2::PN_Then)->MakeLinkTo(NewNode->GetExecPin());
			return NewNode;
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Boolean)
		{
			const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, Conv_StringToBool);
			PinName = TEXT("InString");
			ConversionFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Byte)
		{
			const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, Conv_StringToByte);
			PinName = TEXT("InString");
			ConversionFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Float)
		{
			const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetStringLibrary, Conv_StringToDouble);
			PinName = TEXT("InString");
			ConversionFunction = UKismetStringLibrary::StaticClass()->FindFunctionByName(FunctionName);
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Int)
		{
			const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UKismetStringLibrary, Conv_StringToInt);
			PinName = TEXT("InString");
			ConversionFunction = UKismetStringLibrary::StaticClass()->FindFunctionByName(FunctionName);
		}
		else if (PinCategory == UEdGraphSchema_K2::PC_Int64)
		{
			const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, Conv_StringToInt64);
			PinName = TEXT("InString");
			ConversionFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);
		}

		if (!ConversionFunction) {
			return NewNode;
		}

		auto* ConversionNode = NewObject<UK2Node_CallFunction>(Graph);
		ConversionNode->SetFlags(RF_Transactional);
		
		ConversionNode->CreateNewGuid();
		ConversionNode->SetFromFunction(ConversionFunction);
		ConversionNode->AllocateDefaultPins();
		ConversionNode->PostPlacedNewNode();
		ConversionNode->ReconstructNode();
		ConversionNode->NodePosX = 0;
		ConversionNode->NodePosY = 0;
		ConversionNode->SnapToGrid(16);
		Graph->AddNode(ConversionNode);


		DialogInputNode->FindPin(TEXT("PlayerInput"))->MakeLinkTo(ConversionNode->FindPin(PinName));
		DialogInputNode->FindPin(UEdGraphSchema_K2::PN_Then)->MakeLinkTo(NewNode->GetExecPin());
		InputPin->MakeLinkTo(ConversionNode->GetReturnValuePin());
	}
	else
	{
		InputPin->DefaultValue = Value;
	}
	
	return NewNode;
}

UK2Node_IfThenElse* UVNMScriptParser::CreateBranchNodeFromLine(UEdGraph* Graph, const FString& Line, const TArray<FString>& Variables, TArray<FString>& Labels)
{
	Labels.Empty();
	auto* NewNode = NewObject<UK2Node_IfThenElse>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);

	NewNode->AllocateDefaultPins();
	
	Labels.Add(Tokens[1]);
	Labels.Add(Tokens[2]);

	const FString Condition = Tokens[3];
	if (Condition == TEXT("true") || Condition == TEXT("false"))
	{
		NewNode->GetConditionPin()->DefaultValue = Condition;
	}
	else
	{
		auto* VariableGetNode = CreateVariableGetNodeFromLine(Graph, Condition);
		VariableGetNode->CreateNewGuid();
		VariableGetNode->PostPlacedNewNode();
		VariableGetNode->ReconstructNode();
		VariableGetNode->NodePosX = 0;
		VariableGetNode->NodePosY = 0;
		VariableGetNode->SnapToGrid(16);
		Graph->AddNode(VariableGetNode);
		
		NewNode->GetConditionPin()->MakeLinkTo(VariableGetNode->GetValuePin());
	}
	
	return NewNode;
}

UDialogTextNode* UVNMScriptParser::CreateDialogTextNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogTextNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);

	NewNode->DialogText = FText::FromString(Tokens.Top());

	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("character"))
		{
			NewNode->CharacterId = *Value;
		}
		else if (Id == TEXT("emotion"))
		{
			NewNode->EmotionId = *Value;
		}
		else if (Id == TEXT("charactervoiceover"))
		{
			NewNode->bUseVoiceOver = true;
			NewNode->bUseCharacterVoiceOver = true;
			NewNode->VoiceOverId = *Value;
		}
		else if (Id == TEXT("dialogvoiceover"))
		{
			NewNode->bUseVoiceOver = true;
			NewNode->bUseDialogVoiceOver = true;
			NewNode->VoiceOverId = *Value;
		}
		else if (Id == TEXT("volume"))
		{
			NewNode->Volume = FCString::Atof(*Value);
		}
		else if (Id == TEXT("pitch"))
		{
			NewNode->Pitch = FCString::Atof(*Value);
		}
		else if (Id == TEXT("starttime"))
		{
			NewNode->StartTime = FCString::Atof(*Value);
		}
	}

	return NewNode;
}

UDialogEndNode* UVNMScriptParser::CreateDialogEndNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogEndNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}

		if (Id == TEXT("nextdialog"))
		{
			NewNode->NextDialogId = *Value;
		}
	}
	
	return NewNode;
}

UDialogWindowNode* UVNMScriptParser::CreateDialogWindowNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogWindowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}

		if (Id == TEXT("automatic"))
		{
			NewNode->bSetToAutomatic = true;
		}
		else if (Id == TEXT("manual"))
		{
			NewNode->bSetToAutomatic = false;
		}
		else if (Id == TEXT("show"))
		{
			NewNode->bShouldHide = false;
		}
		else if (Id == TEXT("hide"))
		{
			NewNode->bShouldHide = true;
		}
	}
	
	return NewNode;
}

UWidgetShowNode* UVNMScriptParser::CreateWidgetShowNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UWidgetShowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	NewNode->ActivatableWidgetClass = FindObject<UClass>(ANY_PACKAGE, *FString::Printf(TEXT("%s_C"), *Tokens[1]));

	if (Tokens.IsValidIndex(2))
	{
		NewNode->bWaitForWidgetToCloseAgain = (Tokens[2] == TEXT("true")) ? true : false;
	}

	return NewNode;
}

UWidgetHideNode* UVNMScriptParser::CreateWidgetHideNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UWidgetHideNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	NewNode->ActivatableWidgetClass = FindObject<UClass>(ANY_PACKAGE, *FString::Printf(TEXT("%s_C"), *Tokens[1]));

	return NewNode;
}

UDialogChoiceNode* UVNMScriptParser::CreateDialogChoiceNodeFromLine(UEdGraph* Graph, const FString& Line, TArray<FString>& Labels)
{
	Labels.Empty();
	auto* NewNode = NewObject<UDialogChoiceNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);

	for (int32 i = 1; i < Tokens.Num(); i = i + 2)
	{
		const FString Text = Tokens[i];
		const FString Label = Tokens[i+1];

		NewNode->Choices.Add(FText::FromString(Text));
		Labels.Add(Label);
	}
	
	return NewNode;
}

UDialogChoiceNode* UVNMScriptParser::CreateDialogChoiceConditionalNodeFromLine(UEdGraph* Graph, const FString& Line, TArray<FString>& Labels)
{
	
	Labels.Empty();
	auto* NewNode = NewObject<UDialogChoiceNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);

	TArray<FString> ConditionVariables;

	NewNode->bMakeChoiceConditional = true;

	for (int32 i = 1; i < Tokens.Num(); i = i + 3)
	{
		ConditionVariables.Add(Tokens[i]);
		const FString Text = Tokens[i+1];
		const FString Label = Tokens[i+2];

		NewNode->Choices.Add(FText::FromString(Text));
		Labels.Add(Label);
	}

	int32 CurrentConditionVariableIndex = 0;
	NewNode->PostPlacedNewNode();
	NewNode->ReconstructNode();
	
	for (auto* Pin : NewNode->Pins)
	{
		if (Pin->Direction == EGPD_Output || Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Boolean)
		{
			continue;
		}

		FString VariableName = ConditionVariables[CurrentConditionVariableIndex++];
		if (VariableName == TEXT("true") || VariableName == TEXT("false"))
		{
			Pin->DefaultValue = VariableName;
			continue;
		}
		
		auto* VariableGetNode = CreateVariableGetNodeFromLine(Graph, VariableName);
		VariableGetNode->CreateNewGuid();
		VariableGetNode->PostPlacedNewNode();
		VariableGetNode->ReconstructNode();
		VariableGetNode->NodePosX = 0;
		VariableGetNode->NodePosY = 0;
		VariableGetNode->SnapToGrid(16);
		Graph->AddNode(VariableGetNode);

		Pin->MakeLinkTo(VariableGetNode->GetValuePin());
	}
	
	return NewNode;
}

UDialogMemoryGetNode* UVNMScriptParser::CreateDialogMemoryGetNodeFromLine(UEdGraph* Graph, const FString& Line, const EMemoryType MemoryType)
{
	auto* NewNode = NewObject<UDialogMemoryGetNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	NewNode->DialogId = *Tokens[1];
	NewNode->DialogMemoryValueId = *Tokens[2];
	NewNode->Type = MemoryType;

	return NewNode;
}

UDialogMemorySetNode* UVNMScriptParser::CreateDialogMemorySetNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogMemorySetNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	NewNode->DialogId = *Tokens[1];
	NewNode->DialogMemoryValueId = *Tokens[2];
	const FString VariableName = Tokens[3];
	
	auto* VariableGetNode = CreateVariableGetNodeFromLine(Graph, VariableName);
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

UCharacterShowNode* UVNMScriptParser::CreateCharacterShowNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCharacterShowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->CharacterId = *Value;
		}
		else if (Id == TEXT("emotion"))
		{
			NewNode->EmotionId = *Value;
		}
		else if (Id == TEXT("position"))
		{
			auto Positions = CharacterPositioningTools::GetCharacterPositioningStrings();
			NewNode->CharacterPositioning = static_cast<ECharacterPositioning>(Positions.IndexOfByKey(Value));
		}
		else if (Id == TEXT("transition"))
		{
			auto Positions = TransitionEventTools::GetTransitionEventStrings();
			NewNode->TransitionEvent = static_cast<ETransitionEvent>(Positions.IndexOfByKey(Value));
		}
		else if (Id == TEXT("customtransition"))
		{
			NewNode->TransitionEvent = ETransitionEvent::Custom;
			NewNode->CustomTransitionEventName = Value;
		}
		else if (Id == TEXT("dontwait"))
		{
			NewNode->bDontWaitForTransitionToFinish = true;
		}
	}
	
	return NewNode;
}

UCharacterHideNode* UVNMScriptParser::CreateCharacterHideNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCharacterHideNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->CharacterId = *Value;
		}
		else if (Id == TEXT("transition"))
		{
			auto Positions = TransitionEventTools::GetTransitionEventStrings();
			NewNode->TransitionEvent = static_cast<ETransitionEvent>(Positions.IndexOfByKey(Value));
		}
		else if (Id == TEXT("customtransition"))
		{
			NewNode->TransitionEvent = ETransitionEvent::Custom;
			NewNode->CustomTransitionEventName = Value;
		}
		else if (Id == TEXT("dontwait"))
		{
			NewNode->bDontWaitForTransitionToFinish = true;
		}
	}
	
	return NewNode;
}

UCharacterMoveNode* UVNMScriptParser::CreateCharacterMoveNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCharacterMoveNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->CharacterId = *Value;
		}
		else if (Id == TEXT("position"))
		{
			auto Positions = CharacterPositioningTools::GetCharacterPositioningStrings();
			NewNode->CharacterPositioning = static_cast<ECharacterPositioning>(Positions.IndexOfByKey(Value));
		}
		else if (Id == TEXT("animated"))
		{
			NewNode->bMoveWithAnimation = true;
		}
	}
	
	return NewNode;
}

UCharacterRenameNode* UVNMScriptParser::CreateCharacterRenameNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCharacterRenameNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);

	NewNode->CharacterId = *Tokens[1];
	NewNode->NewCharacterName = FText::FromString(Tokens[2]);

	return NewNode;
}

UCharacterInteractiveRenameNode* UVNMScriptParser::CreateCharacterInteractiveRenameNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCharacterInteractiveRenameNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);

	NewNode->CharacterId = *Tokens[1];

	return NewNode;
}

UCharacterAddLayerNode* UVNMScriptParser::CreateCharacterAddLayerNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCharacterAddLayerNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->CharacterId = *Value;
		}
		else if (Id == TEXT("layer"))
		{
			NewNode->LayerId = *Value;
		}
		else if (Id == TEXT("image"))
		{
			NewNode->ImageId = *Value;
		}
	}
	
	return NewNode;
}

UCharacterRemoveLayerNode* UVNMScriptParser::CreateCharacterRemoveLayerNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCharacterRemoveLayerNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->CharacterId = *Value;
		}
		else if (Id == TEXT("layer"))
		{
			NewNode->LayerId = *Value;
		}
	}
	
	return NewNode;
}

UCharacterMemoryGetNode* UVNMScriptParser::CreateCharacterMemoryGetNodeFromLine(UEdGraph* Graph, const FString& Line, const EMemoryType MemoryType)
{
	auto* NewNode = NewObject<UCharacterMemoryGetNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	NewNode->CharacterId = *Tokens[1];
	NewNode->CharacterMemoryValueId = *Tokens[2];
	NewNode->Type = MemoryType;

	return NewNode;
}

UCharacterMemorySetNode* UVNMScriptParser::CreateCharacterMemorySetNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCharacterMemorySetNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	NewNode->CharacterId = *Tokens[1];
	NewNode->CharacterMemoryValueId = *Tokens[2];

	const FString VariableName = Tokens[3];
	
	auto* VariableGetNode = CreateVariableGetNodeFromLine(Graph, VariableName);
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

UCharacter3DShowNode* UVNMScriptParser::CreateCharacter3DShowNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCharacter3DShowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->CharacterId = *Value;
		}
		else if (Id == TEXT("emotion"))
		{
			NewNode->EmotionId = *Value;
		}
		else if (Id == TEXT("dialogscene"))
		{
			NewNode->DialogSceneId = *Value;
		}
		else if (Id == TEXT("spawnlocation"))
		{
			NewNode->SpawnLocation = *Value;
		}
	}
	
	return NewNode;
}

UCharacter3DHideNode* UVNMScriptParser::CreateCharacter3DHideNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCharacter3DHideNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->CharacterId = *Value;
		}
	}
	
	return NewNode;
}

UCgShowNode* UVNMScriptParser::CreateCgShowNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCgShowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->CgId = *Value;
		}
		else if (Id == TEXT("transition"))
		{
			auto Positions = TransitionEventTools::GetTransitionEventStrings();
			NewNode->TransitionEvent = static_cast<ETransitionEvent>(Positions.IndexOfByKey(Value));
		}
		else if (Id == TEXT("customtransition"))
		{
			NewNode->TransitionEvent = ETransitionEvent::Custom;
			NewNode->CustomTransitionEventName = Value;
		}
		else if (Id == TEXT("dontwait"))
		{
			NewNode->bDontWaitForTransitionToFinish = true;
		}
	}
	
	return NewNode;
}

UCgHideNode* UVNMScriptParser::CreateCgHideNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCgHideNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("transition"))
		{
			auto Positions = TransitionEventTools::GetTransitionEventStrings();
			NewNode->TransitionEvent = static_cast<ETransitionEvent>(Positions.IndexOfByKey(Value));
		}
		else if (Id == TEXT("customtransition"))
		{
			NewNode->TransitionEvent = ETransitionEvent::Custom;
			NewNode->CustomTransitionEventName = Value;
		}
		else if (Id == TEXT("dontwait"))
		{
			NewNode->bDontWaitForTransitionToFinish = true;
		}
	}
	
	return NewNode;
}

UCgAddLayerNode* UVNMScriptParser::CreateCgAddLayerNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCgAddLayerNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->CgId = *Value;
		}
		else if (Id == TEXT("layer"))
		{
			NewNode->LayerId = *Value;
		}
		else if (Id == TEXT("image"))
		{
			NewNode->ImageId = *Value;
		}
	}
	
	return NewNode;
}

UCgRemoveLayerNode* UVNMScriptParser::CreateCgRemoveLayerNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UCgRemoveLayerNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->CgId = *Value;
		}
		else if (Id == TEXT("layer"))
		{
			NewNode->LayerId = *Value;
		}
	}
	
	return NewNode;
}

USceneBackgroundShowNode* UVNMScriptParser::CreateSceneBackgroundShowNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<USceneBackgroundShowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->SceneBackgroundId = *Value;
		}
		else if (Id == TEXT("transition"))
		{
			auto Positions = TransitionEventTools::GetTransitionEventStrings();
			NewNode->TransitionEvent = static_cast<ETransitionEvent>(Positions.IndexOfByKey(Value));
		}
		else if (Id == TEXT("customtransition"))
		{
			NewNode->TransitionEvent = ETransitionEvent::Custom;
			NewNode->CustomTransitionEventName = Value;
		}
		else if (Id == TEXT("dontwait"))
		{
			NewNode->bDontWaitForTransitionToFinish = true;
		}
	}
	
	return NewNode;
}

USceneBackgroundHideNode* UVNMScriptParser::CreateSceneBackgroundHideNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<USceneBackgroundHideNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("transition"))
		{
			auto Positions = TransitionEventTools::GetTransitionEventStrings();
			NewNode->TransitionEvent = static_cast<ETransitionEvent>(Positions.IndexOfByKey(Value));
		}
		else if (Id == TEXT("customtransition"))
		{
			NewNode->TransitionEvent = ETransitionEvent::Custom;
			NewNode->CustomTransitionEventName = Value;
		}
		else if (Id == TEXT("dontwait"))
		{
			NewNode->bDontWaitForTransitionToFinish = true;
		}
	}
	
	return NewNode;
}

USceneBackgroundAddLayerNode* UVNMScriptParser::CreateSceneBackgroundAddLayerNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<USceneBackgroundAddLayerNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->SceneBackgroundId = *Value;
		}
		else if (Id == TEXT("layer"))
		{
			NewNode->LayerId = *Value;
		}
		else if (Id == TEXT("image"))
		{
			NewNode->ImageId = *Value;
		}
	}
	
	return NewNode;
}

USceneBackgroundRemoveLayerNode* UVNMScriptParser::CreateSceneBackgroundRemoveLayerNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<USceneBackgroundRemoveLayerNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->SceneBackgroundId = *Value;
		}
		else if (Id == TEXT("layer"))
		{
			NewNode->LayerId = *Value;
		}
	}
	
	return NewNode;
}

UDialogSceneShowNode* UVNMScriptParser::CreateDialogSceneShowNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogSceneShowNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->DialogSceneId = *Value;
		}
		else if (Id == TEXT("camera"))
		{
			NewNode->CameraName = *Value;
		}
	}
	
	return NewNode;
}

UDialogSceneHideNode* UVNMScriptParser::CreateDialogSceneHideNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogSceneHideNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	return NewNode;
}

UDialogSceneSwitchCameraNode* UVNMScriptParser::CreateDialogSceneSwitchCameraNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogSceneSwitchCameraNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->DialogSceneId = *Value;
		}
		else if (Id == TEXT("camera"))
		{
			NewNode->CameraName = *Value;
		}
	}
	
	return NewNode;
}

UDialogAudioPlayBGMNode* UVNMScriptParser::CreateDialogAudioPlayBGMNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogAudioPlayBGMNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->BackgroundMusicId = *Value;
		}
		else if (Id == TEXT("volume"))
		{
			NewNode->Volume = FCString::Atof(*Value);
		}
		else if (Id == TEXT("pitch"))
		{
			NewNode->Pitch = FCString::Atof(*Value);
		}
		else if (Id == TEXT("starttime"))
		{
			NewNode->StartTime = FCString::Atof(*Value);
		}
		else if (Id == TEXT("wait"))
		{
			NewNode->bWaitForAudioToFinish = Value.ToBool();
		}
		else if (Id == TEXT("loop"))
		{
			NewNode->bIsLooping = Value.ToBool();
		}
	}
	
	return NewNode;
}

UDialogAudioPlaySoundEffectNode* UVNMScriptParser::CreateDialogAudioPlaySoundEffectNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogAudioPlaySoundEffectNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->SoundEffectId = *Value;
		}
		else if (Id == TEXT("volume"))
		{
			NewNode->Volume = FCString::Atof(*Value);
		}
		else if (Id == TEXT("pitch"))
		{
			NewNode->Pitch = FCString::Atof(*Value);
		}
		else if (Id == TEXT("starttime"))
		{
			NewNode->StartTime = FCString::Atof(*Value);
		}
		else if (Id == TEXT("wait"))
		{
			NewNode->bWaitForAudioToFinish = Value.ToBool();
		}
	}
	
	return NewNode;
}

UDialogAudioPlayCharacterVoiceOverNode* UVNMScriptParser::CreateDialogAudioPlayCharacterVoiceOverNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogAudioPlayCharacterVoiceOverNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->VoiceOverId = *Value;
		}
		else if (Id == TEXT("character"))
		{
			NewNode->CharacterId = *Value;
		}
		else if (Id == TEXT("volume"))
		{
			NewNode->Volume = FCString::Atof(*Value);
		}
		else if (Id == TEXT("pitch"))
		{
			NewNode->Pitch = FCString::Atof(*Value);
		}
		else if (Id == TEXT("starttime"))
		{
			NewNode->StartTime = FCString::Atof(*Value);
		}
		else if (Id == TEXT("wait"))
		{
			NewNode->bWaitForAudioToFinish = Value.ToBool();
		}
	}
	
	return NewNode;
}

UDialogAudioPlayDialogVoiceOverNode* UVNMScriptParser::CreateDialogAudioPlayDialogVoiceOverNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogAudioPlayDialogVoiceOverNode>(Graph);
	NewNode->SetFlags(RF_Transactional);

	TArray<FString> Switches;
	TArray<FString> Tokens;
	FCommandLine::Parse(*Line, Tokens, Switches);
	
	for (const FString& Switch: Switches)
	{
		FString Id;
		FString Value;
		
		if (!Switch.Split(TEXT("="), &Id, &Value))
		{
			Id = Switch;
		}
		if (Id == TEXT("id"))
		{
			NewNode->VoiceOverId = *Value;
		}
		else if (Id == TEXT("dialog"))
		{
			NewNode->DialogId = *Value;
		}
		else if (Id == TEXT("volume"))
		{
			NewNode->Volume = FCString::Atof(*Value);
		}
		else if (Id == TEXT("pitch"))
		{
			NewNode->Pitch = FCString::Atof(*Value);
		}
		else if (Id == TEXT("starttime"))
		{
			NewNode->StartTime = FCString::Atof(*Value);
		}
		else if (Id == TEXT("wait"))
		{
			NewNode->bWaitForAudioToFinish = Value.ToBool();
		}
	}
	
	return NewNode;
}

UDialogAudioStopBGMNode* UVNMScriptParser::CreateDialogAudioStopBGMNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogAudioStopBGMNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	return NewNode;
}

UDialogAudioStopSoundEffectNode* UVNMScriptParser::CreateDialogAudioStopSoundEffectNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogAudioStopSoundEffectNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	return NewNode;
}

UDialogAudioStopVoiceOverNode* UVNMScriptParser::CreateDialogAudioStopVoiceOverNodeFromLine(UEdGraph* Graph, const FString& Line)
{
	auto* NewNode = NewObject<UDialogAudioStopVoiceOverNode>(Graph);
	NewNode->SetFlags(RF_Transactional);
	
	return NewNode;
}
