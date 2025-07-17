// Copyright (c) 2022 Al_Fe


#include "DialogMemorySetNode.h"

#include "VNMEditorSettings.h"
#include "DialogMemorySetGraphNodeWidget.h"
#include "MemoryInternalFunctions.h"
#include "K2Node_CallFunction.h"
#include "KismetCompiler.h"

#define LOCTEXT_NAMESPACE "VNM"

#if WITH_EDITOR
void UDialogMemorySetNode::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FName PropertyName = (PropertyChangedEvent.Property != NULL)
							 ? PropertyChangedEvent.Property->GetFName()
							 : NAME_None;
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UDialogMemorySetNode, bUsePinsForIds))
	{
		ReconstructNode();
		GetGraph()->NotifyGraphChanged();
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void UDialogMemorySetNode::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();
	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
	
	check(Pins.Num() == 0);
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);

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
    
	CreatePin(EGPD_Input, PinCategory, PinSubCategory, nullptr, TEXT("Value"));
}

FText UDialogMemorySetNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogMemorySetNode.Title", "Dialog Memory Set");
}

FText UDialogMemorySetNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogMemoryGetNode.Tooltip", "This node is used to get a Dialog memory value!");
}

FLinearColor UDialogMemorySetNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->MemoryNodesColor;
}

FSlateIcon UDialogMemorySetNode::GetIconAndTint(FLinearColor& OutColor) const
{
	OutColor = FLinearColor::White;
    
	static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Memory", "NodeIcon.Memory");
	return Icon;
}

TSharedPtr<SGraphNode> UDialogMemorySetNode::CreateVisualWidget()
{
    return SNew(SDialogMemorySetGraphNodeWidget, this);
}

bool UDialogMemorySetNode::ShouldShowNodeProperties() const
{
	return true;
}

void UDialogMemorySetNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
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
        FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, SetDialogMemoryBoolValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Integer:
        FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, SetDialogMemoryIntegerValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Integer64:
        FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, SetDialogMemoryInteger64Value);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::Float:
        FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, SetDialogMemoryFloatValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
        break;
    case EMemoryType::String:
        FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, SetDialogMemoryStringValue);
        BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
    	break;
    case EMemoryType::Byte:
    	FunctionName = GET_FUNCTION_NAME_CHECKED(UMemoryInternalFunctions, SetDialogMemoryByteValue);
    	BlueprintFunction = UMemoryInternalFunctions::StaticClass()->FindFunctionByName(FunctionName);
    	break;
    default:
        CompilerContext.MessageLog.Error(*LOCTEXT("UnsupportedMemoryType", "The memory type is not supported by Dialog Memory Set Node.").ToString(), this);
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

bool UDialogMemorySetNode::IsDiffableProperty(const FName& PropertyName) const
{
	return PropertyName == TEXT("DialogId")
	|| PropertyName == TEXT("DialogMemoryValueId")
	|| PropertyName == TEXT("Type");
}

#undef LOCTEXT_NAMESPACE
