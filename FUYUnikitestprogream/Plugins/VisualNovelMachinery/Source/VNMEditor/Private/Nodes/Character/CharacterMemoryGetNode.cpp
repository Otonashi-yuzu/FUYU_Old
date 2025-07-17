// Copyright (c) 2022 Al_Fe


#include "CharacterMemoryGetNode.h"


#include "MemoryInternalFunctions.h"
#include "K2Node_CallFunction.h"
#include "KismetCompiler.h"
#include "VNMEditorSettings.h"
#include "VNMSettings.h"
#include "CharacterMemoryGetGraphNodeWidget.h"

#define LOCTEXT_NAMESPACE "VNM"

#if WITH_EDITOR
void UCharacterMemoryGetNode::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    FName PropertyName = (PropertyChangedEvent.Property != NULL)
                             ? PropertyChangedEvent.Property->GetFName()
                             : NAME_None;
    if (PropertyName == GET_MEMBER_NAME_CHECKED(UCharacterMemoryGetNode, bUsePinsForIds))
    {
        ReconstructNode();
        GetGraph()->NotifyGraphChanged();
    }

    Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void UCharacterMemoryGetNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    check(Pins.Num() == 0);
    
    if (bUsePinsForIds)
    {
        CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Name, {}, nullptr, TEXT("CharacterId"));
        CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Name, {}, nullptr, TEXT("CharacterMemoryId"));
    }

    if (CharacterId.IsNone() || CharacterMemoryValueId.IsNone())
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

FText UCharacterMemoryGetNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.CharacterMemoryGetNode.Title", "Character Memory Get");
}

FText UCharacterMemoryGetNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.CharacterMemoryGetNode.Tooltip", "This node is used to get a character memory value!");
}

FLinearColor UCharacterMemoryGetNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->MemoryNodesColor;
}

FSlateIcon UCharacterMemoryGetNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Memory", "NodeIcon.Memory");
    return Icon;
}

TSharedPtr<SGraphNode> UCharacterMemoryGetNode::CreateVisualWidget()
{
    return SNew(SCharacterMemoryGetGraphNodeWidget, this);
}

bool UCharacterMemoryGetNode::IsNodePure() const
{
    return true;
}

bool UCharacterMemoryGetNode::ShouldShowNodeProperties() const
{
    return true;
}

void UCharacterMemoryGetNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    if (CharacterId.IsNone() || CharacterMemoryValueId.IsNone())
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
		FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, GetCharacterMemoryBoolValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Integer:
		FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, GetCharacterMemoryIntegerValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Integer64:
		FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, GetCharacterMemoryInteger64Value);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Float:
		FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, GetCharacterMemoryFloatValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::String:
		FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, GetCharacterMemoryStringValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Byte:
        FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, GetCharacterMemoryByteValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    default:
        CompilerContext.MessageLog.Error(*LOCTEXT("UnsupportedMemoryType", "The memory type is not supported by Character Memory Get Node.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);

    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    // Input
    if (bUsePinsForIds)
    {
        CompilerContext.MovePinLinksToIntermediate(*FindPin(TEXT("CharacterId")), *CallFunction->FindPin(TEXT("CharacterId")));
        CompilerContext.MovePinLinksToIntermediate(*FindPin(TEXT("CharacterMemoryId")), *CallFunction->FindPin(TEXT("CharacterMemoryId")));
    }
    else
    {
        CallFunction->FindPin(TEXT("CharacterId"))->DefaultValue = CharacterId.ToString();
        CallFunction->FindPin(TEXT("CharacterMemoryId"))->DefaultValue = CharacterMemoryValueId.ToString();
    }
    
    // Output
    CompilerContext.MovePinLinksToIntermediate(*FindPin(TEXT("Value")), *CallFunction->FindPin(TEXT("Value")));

    //After we are done we break all links to this node (not the internally created one)
    BreakAllNodeLinks();
}

bool UCharacterMemoryGetNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("CharacterId")
    || PropertyName == TEXT("CharacterMemoryValueId")
    || PropertyName == TEXT("Type");
}

#undef LOCTEXT_NAMESPACE
