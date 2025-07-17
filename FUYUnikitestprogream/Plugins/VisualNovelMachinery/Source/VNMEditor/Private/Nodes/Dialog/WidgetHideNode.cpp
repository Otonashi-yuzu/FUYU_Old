// Copyright (c) 2022 Al_Fe


#include "WidgetHideNode.h"


#include "BaseVNMActivatableWidget.h"
#include "WidgetHideGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UWidgetHideNode::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();
	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();

	// Add exec pins
	check(Pins.Num() == 0);
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UWidgetHideNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("Nodes.WidgetHideNode.Title", "Widget Hide");
}

FText UWidgetHideNode::GetTooltipText() const
{
	return LOCTEXT("Nodes.WidgetHideNode.Tooltip", "This node is used to hide a VNM Activatable Widget!");
}

FLinearColor UWidgetHideNode::GetNodeTitleColor() const
{
	return UVNMEditorSettings::GetVNMEditorSettings()->DialogTextNodeColor;
}

FSlateIcon UWidgetHideNode::GetIconAndTint(FLinearColor& OutColor) const
{
	OutColor = FLinearColor::White;

	static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Window", "NodeIcon.Window");
	return Icon;
}

TSharedPtr<SGraphNode> UWidgetHideNode::CreateVisualWidget()
{
	return SNew(SWidgetHideGraphNodeWidget, this);
}

bool UWidgetHideNode::ShouldShowNodeProperties() const
{
	return true;
}

void UWidgetHideNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, HideWidget);
	UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

	if (!BlueprintFunction)
	{
		CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
		return;
	}

	UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);

	CallFunction->SetFromFunction(BlueprintFunction);
	CallFunction->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

	UK2Node_MakeStruct* MakeWidgetHideDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
	MakeWidgetHideDataStruct->StructType = FWidgetHideData::StaticStruct();
	MakeWidgetHideDataStruct->bMadeAfterOverridePinRemoval = true;
	MakeWidgetHideDataStruct->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeWidgetHideDataStruct, this);

	//Input
	MakeWidgetHideDataStruct->FindPin(TEXT("ActivatableWidgetClass"))->DefaultObject = ActivatableWidgetClass;
	MakeWidgetHideDataStruct->FindPin(TEXT("WidgetHideData"))->MakeLinkTo(CallFunction->FindPin(TEXT("WidgetHideData")));

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

bool UWidgetHideNode::IsDiffableProperty(const FName& PropertyName) const
{
	return PropertyName == TEXT("bSetToAutomatic")
		|| PropertyName == TEXT("bShouldHide");
}

#undef LOCTEXT_NAMESPACE
