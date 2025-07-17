// Copyright (c) 2022 Al_Fe


#include "CharacterMemorySetNode.h"

#include "VNMEditorSettings.h"
#include "CharacterMemorySetGraphNodeWidget.h"
#include "MemoryInternalFunctions.h"
#include "K2Node_CallFunction.h"
#include "KismetCompiler.h"

#define LOCTEXT_NAMESPACE "VNM"

#if WITH_EDITOR
void UCharacterMemorySetNode::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FName PropertyName = (PropertyChangedEvent.Property != NULL)
							 ? PropertyChangedEvent.Property->GetFName()
							 : NAME_None;
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UCharacterMemorySetNode, bUsePinsForIds))
	{
		ReconstructNode();
		GetGraph()->NotifyGraphChanged();
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void UCharacterMemorySetNode::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();
	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
	
	check(Pins.Num() == 0);
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
    
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
    
	CreatePin(EGPD_Input, PinCategory, PinSubCategory, nullptr, TEXT("Value"));
}

FText UCharacterMemorySetNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.CharacterMemorySetNode.Title", "Character Memory Set");
}

FText UCharacterMemorySetNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.CharacterMemoryGetNode.Tooltip", "This node is used to get a character memory value!");
}

FLinearColor UCharacterMemorySetNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->MemoryNodesColor;
}

FSlateIcon UCharacterMemorySetNode::GetIconAndTint(FLinearColor& OutColor) const
{
	OutColor = FLinearColor::White;
    
	static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Memory", "NodeIcon.Memory");
	return Icon;
}

TSharedPtr<SGraphNode> UCharacterMemorySetNode::CreateVisualWidget()
{
    return SNew(SCharacterMemorySetGraphNodeWidget, this);
}

bool UCharacterMemorySetNode::ShouldShowNodeProperties() const
{
	return true;
}

void UCharacterMemorySetNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
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
		FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, SetCharacterMemoryBoolValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Integer:
		FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, SetCharacterMemoryIntegerValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Integer64:
		FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, SetCharacterMemoryInteger64Value);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Float:
		FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, SetCharacterMemoryFloatValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::String:
		FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, SetCharacterMemoryStringValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
    	break;
    case EMemoryType::Byte:
    	FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, SetCharacterMemoryByteValue);
    	BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
    	break;
    default:
        CompilerContext.MessageLog.Error(*LOCTEXT("UnsupportedMemoryType", "The memory type is not supported by Character Memory Set Node.").ToString(), this);
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
	
	//Exec pins
	UEdGraphPin* NodeExec = GetExecPin();
	UEdGraphPin* NodeThen = FindPin(UEdGraphSchema_K2::PN_Then);

	UEdGraphPin* InternalExec = CallFunction->GetExecPin();
	CompilerContext.MovePinLinksToIntermediate(*NodeExec, *InternalExec);

	UEdGraphPin* InternalThen = CallFunction->GetThenPin();
	CompilerContext.MovePinLinksToIntermediate(*NodeThen, *InternalThen);

    //After we are done we break all links to this node (not the internally created one)
    BreakAllNodeLinks();
}

bool UCharacterMemorySetNode::IsDiffableProperty(const FName& PropertyName) const
{
	return PropertyName == TEXT("CharacterId")
	|| PropertyName == TEXT("CharacterMemoryValueId")
	|| PropertyName == TEXT("Type");
}

#undef LOCTEXT_NAMESPACE
