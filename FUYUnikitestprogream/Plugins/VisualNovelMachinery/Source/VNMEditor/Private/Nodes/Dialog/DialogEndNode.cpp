// Copyright (c) 2022 Al_Fe


#include "DialogEndNode.h"


#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DialogObject.h"
#include "K2Node_CallFunction.h"
#include "KismetCompiler.h"
#include "VNMEditorSettings.h"
#include "DialogEndGraphNodeWidget.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"

#define LOCTEXT_NAMESPACE "VNM"

void UDialogEndNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
}

FText UDialogEndNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogEndNode.Title", "Dialog End");
}

FText UDialogEndNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogEndNode.Tooltip", "This node goes at the end of a dialog sequence to end it!");
}

FLinearColor UDialogEndNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->DialogEndNodeColor;
}

FSlateIcon UDialogEndNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.End", "NodeIcon.End");
    return Icon;
}

TSharedPtr<SGraphNode> UDialogEndNode::CreateVisualWidget()
{
    return SNew(SDialogEndGraphNodeWidget, this);
}

void UDialogEndNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UDialogObject, EndDialog);
    UFunction* BlueprintFunction = UDialogObject::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* EndDialogFunctionNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);

    EndDialogFunctionNode->SetFromFunction(BlueprintFunction);
    EndDialogFunctionNode->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(EndDialogFunctionNode, this);

    EndDialogFunctionNode->FindPin(TEXT("NextDialogObjectId"))->DefaultValue = NextDialogId.ToString();

    //Exec pins
    UEdGraphPin* NodeExec = GetExecPin();

    UEdGraphPin* InternalExec = EndDialogFunctionNode->GetExecPin();
    CompilerContext.MovePinLinksToIntermediate(*NodeExec, *InternalExec);

    //After we are done we break all links to this node (not the internally created one)
    BreakAllNodeLinks();

}

bool UDialogEndNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("NextDialogId");
}

#undef LOCTEXT_NAMESPACE
