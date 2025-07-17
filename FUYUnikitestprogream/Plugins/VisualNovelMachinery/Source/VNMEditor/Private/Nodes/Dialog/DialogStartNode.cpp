// Copyright (c) 2022 Al_Fe


#include "DialogStartNode.h"

#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DialogChoiceNode.h"
#include "K2Node_SwitchName.h"
#include "K2Node_CallFunction.h"
#include "KismetCompiler.h"
#include "VNMEditorModule.h"
#include "VisualNovelNodeFunctionsLibrary.h"

#define LOCTEXT_NAMESPACE "VNM"

UDialogStartNode::UDialogStartNode()
{
    bOverrideFunction = false;
    bIsEditable = false;
    bCanRenameNode = false;
    bInternalEvent = true;
    CustomFunctionName = "StartDialogNode";
}

void UDialogStartNode::AllocateDefaultPins()
{
    EventReference.SetExternalMember("DialogEntryPoint_NotCalled", GetClass());
    
    Super::AllocateDefaultPins();

    FindPin(UK2Node_Event::DelegateOutputName)->bHidden = true;
    
    FindPinChecked(TEXT("NodeToLoadTo"))->bHidden = true;
}

FText UDialogStartNode::GetNodeTitle(ENodeTitleType::Type titleType) const
{
    return LOCTEXT("Nodes.DialogStartNode.Title", "Dialog Start");
}

FText UDialogStartNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogStartNode.Tooltip", "This node is used to start the dialog!");
}

FSlateIcon UDialogStartNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Start", "NodeIcon.Start");
    return Icon;
}

bool UDialogStartNode::CanDuplicateNode() const
{
    return false;
}

bool UDialogStartNode::CanUserDeleteNode() const
{
    return false;
}

void UDialogStartNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    auto* ThenPin = FindPinChecked(UEdGraphSchema_K2::PN_Then);
    
    TArray<UK2Node*> FoundDialogNodes;
    GetAllConnectedDialogNodes(ThenPin, FoundDialogNodes);

    auto* ResultSwitchNode = CompilerContext.SpawnIntermediateNode<UK2Node_SwitchName>(this, SourceGraph);
    ResultSwitchNode->bHasDefaultPin = true;
    
    for (auto* DialogNode: FoundDialogNodes)
    {
        ResultSwitchNode->PinNames.Add(*DialogNode->NodeGuid.ToString());
    }
    
    ResultSwitchNode->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(ResultSwitchNode, this);
    FindPinChecked(TEXT("NodeToLoadTo"))->MakeLinkTo(ResultSwitchNode->GetSelectionPin());

    for (auto* DialogNode: FoundDialogNodes)
    {
        auto* Pin = ResultSwitchNode->FindPin(*DialogNode->NodeGuid.ToString());
        Pin->MakeLinkTo(DialogNode->GetExecPin());
    }
    
    CompilerContext.MovePinLinksToIntermediate(*ThenPin, *ResultSwitchNode->GetDefaultPin());
    ThenPin->MakeLinkTo(ResultSwitchNode->GetExecPin());
}

void UDialogStartNode::GetAllConnectedDialogNodes(UEdGraphPin* EntryPin, TArray<UK2Node*>& FoundDialogNodes)
{
    TArray<UEdGraphNode*> NodesAlreadyProcessed;
    
    GetAllConnectedDialogNodesInternal(EntryPin, FoundDialogNodes, NodesAlreadyProcessed);
}

void UDialogStartNode::GetAllConnectedDialogNodesInternal(UEdGraphPin* EntryPin,
    TArray<UK2Node*>& FoundDialogNodes, TArray<UEdGraphNode*>& AlreadyProcessedNodes)
{
    if (!EntryPin)
    {
        return;
    }

    auto LinkedPins = EntryPin->LinkedTo;

    if (LinkedPins.Num() == 0)
    {
        return;
    }

    auto* NextNodeEntryPin = LinkedPins[0];
    auto* NextNode = NextNodeEntryPin->GetOwningNode();

    if (AlreadyProcessedNodes.Contains(NextNode))
    {
        return;
    }

    AlreadyProcessedNodes.Add(NextNode);

    if (auto* DialogNode = Cast<UDialogTextNode>(NextNodeEntryPin->GetOwningNode()))
    {
        FoundDialogNodes.Add(DialogNode);
    }
    
    if (auto* ChoiceNode = Cast<UDialogChoiceNode>(NextNodeEntryPin->GetOwningNode()))
    {
        FoundDialogNodes.Add(ChoiceNode);
    }
    
    if (auto* CallFunctionNode = Cast<UK2Node_CallFunction>(NextNodeEntryPin->GetOwningNode()))
    {
        if (CallFunctionNode->GetTargetFunction())
        {
            const FString FunctionName = CallFunctionNode->GetTargetFunction()->GetName();
            if (FunctionName == GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, DisplayDialogText).ToString()
                || FunctionName == GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, DisplayDialogChoices).ToString())
            {
                FoundDialogNodes.Add(CallFunctionNode);
            }
        }
        }

    for (auto* Pin: NextNode->Pins)
    {
        if (Pin->Direction != EEdGraphPinDirection::EGPD_Output || Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Exec)
        {
            continue;
        }

        GetAllConnectedDialogNodesInternal(Pin, FoundDialogNodes, AlreadyProcessedNodes);            
    }
}

void UDialogStartNode::DialogEntryPoint_NotCalled(FName NodeToLoadTo)
{
    // Will not be executed, it is just there so that Unreal understands the signature for the node
}

#undef LOCTEXT_NAMESPACE
