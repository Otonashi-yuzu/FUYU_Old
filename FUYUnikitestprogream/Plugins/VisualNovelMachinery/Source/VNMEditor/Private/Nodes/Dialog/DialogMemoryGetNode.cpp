// Copyright (c) 2022 Al_Fe


#include "DialogMemoryGetNode.h"


#include "MemoryInternalFunctions.h"
#include "K2Node_CallFunction.h"
#include "KismetCompiler.h"
#include "VNMEditorSettings.h"
#include "VNMSettings.h"
#include "DialogMemoryGetGraphNodeWidget.h"

#define LOCTEXT_NAMESPACE "VNM"

void UDialogMemoryGetNode::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    FName PropertyName = (PropertyChangedEvent.Property != NULL)
                             ? PropertyChangedEvent.Property->GetFName()
                             : NAME_None;
    if (PropertyName == GET_MEMBER_NAME_CHECKED(UDialogMemoryGetNode, bUsePinsForIds))
    {
        ReconstructNode();
        GetGraph()->NotifyGraphChanged();
    }

    Super::PostEditChangeProperty(PropertyChangedEvent);
}

void UDialogMemoryGetNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    check(Pins.Num() == 0);

    if (bUsePinsForIds)
    {
        CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Name, {}, nullptr, TEXT("DialogId"));
        CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Name, {}, nullptr, TEXT("DialogMemoryId"));
    }

    if (DialogId.IsNone() || DialogMemoryValueId.IsNone())
    {
        return;
    }

    FName PinCategory = UEdGraphSchema_K2::PC_Boolean;
	FName PinSubCategory = {};

    switch (Type)
    {
    case EMemoryType::Bool:
        PinCategory = UEdGraphSchema_K2::PC_Boolean;
        break;
    case EMemoryType::Integer:
        PinCategory = UEdGraphSchema_K2::PC_Int;
        break;
    case EMemoryType::Integer64:
        PinCategory = UEdGraphSchema_K2::PC_Int64;
        break;
    case EMemoryType::Float:
        PinCategory = UEdGraphSchema_K2::PC_Real;
        PinSubCategory = UEdGraphSchema_K2::PC_Float;
        break;
    case EMemoryType::String:
        PinCategory = UEdGraphSchema_K2::PC_String;
        break;
    case EMemoryType::Byte: 
        PinCategory = UEdGraphSchema_K2::PC_Byte;
        break;
    }
    
    // Add exec pins
    CreatePin(EGPD_Output, PinCategory, PinSubCategory, nullptr, TEXT("Value"));
}

FText UDialogMemoryGetNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogMemoryGetNode.Title", "Dialog Memory Get");
}

FText UDialogMemoryGetNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogMemoryGetNode.Tooltip", "This node is used to get a dialog memory value!");
}

FLinearColor UDialogMemoryGetNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->MemoryNodesColor;
}

FSlateIcon UDialogMemoryGetNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Memory", "NodeIcon.Memory");
    return Icon;
}

TSharedPtr<SGraphNode> UDialogMemoryGetNode::CreateVisualWidget()
{
    return SNew(SDialogMemoryGetGraphNodeWidget, this);
}

bool UDialogMemoryGetNode::IsNodePure() const
{
    return true;
}

bool UDialogMemoryGetNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogMemoryGetNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    if (DialogId.IsNone() || DialogMemoryValueId.IsNone())
    {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    //This is just a hard reference to the static method that lives in the BlueprintLibrary. Probably not the best of ways.
    UFunction* BlueprintFunction;
    FName FunctionName;

    switch (Type)
    {
    case EMemoryType::Bool:
        FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, GetDialogMemoryBoolValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Integer:
        FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, GetDialogMemoryIntegerValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Integer64:
        FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, GetDialogMemoryInteger64Value);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Float:
        FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, GetDialogMemoryFloatValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::String:
        FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, GetDialogMemoryStringValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Byte:
        FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, GetDialogMemoryByteValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    default:
        CompilerContext.MessageLog.Error(*LOCTEXT("UnsupportedMemoryType", "The memory type is not supported by Dialog Memory Get Node.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);

    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    // Input
    if (bUsePinsForIds)
    {
        CompilerContext.MovePinLinksToIntermediate(*FindPin(TEXT("DialogId")), *CallFunction->FindPin(TEXT("DialogId")));
        CompilerContext.MovePinLinksToIntermediate(*FindPin(TEXT("DialogMemoryId")), *CallFunction->FindPin(TEXT("DialogMemoryId")));
    }
    else
    {
        CallFunction->FindPin(TEXT("DialogId"))->DefaultValue = DialogId.ToString();
        CallFunction->FindPin(TEXT("DialogMemoryId"))->DefaultValue = DialogMemoryValueId.ToString();
    }
    
    // Output
    CompilerContext.MovePinLinksToIntermediate(*FindPin(TEXT("Value")), *CallFunction->FindPin(TEXT("Value")));

    //After we are done we break all links to this node (not the internally created one)
    BreakAllNodeLinks();
}

bool UDialogMemoryGetNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("DialogId")
    || PropertyName == TEXT("DialogMemoryValueId")
    || PropertyName == TEXT("Type");
}

#undef LOCTEXT_NAMESPACE
