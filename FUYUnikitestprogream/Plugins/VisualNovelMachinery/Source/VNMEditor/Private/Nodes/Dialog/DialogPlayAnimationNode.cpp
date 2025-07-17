// Copyright (c) 2022 Al_Fe


#include "DialogPlayAnimationNode.h"

#include "DialogPlayAnimationGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UDialogPlayAnimationNode::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();
	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();

	// Add exec pins
	check(Pins.Num() == 0);
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UDialogPlayAnimationNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("Nodes.DialogPlayAnimationNode.Title", "Dialog Window Play Animation");
}

FText UDialogPlayAnimationNode::GetTooltipText() const
{
	return LOCTEXT("Nodes.DialogPlayAnimationNode.Tooltip", "This node is used to play an animation using the dialog window!");
}

FLinearColor UDialogPlayAnimationNode::GetNodeTitleColor() const
{
	return UVNMEditorSettings::GetVNMEditorSettings()->DialogWindowNodeColor;
}

FSlateIcon UDialogPlayAnimationNode::GetIconAndTint(FLinearColor& OutColor) const
{
	OutColor = FLinearColor::White;

	static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Window", "NodeIcon.Window");
	return Icon;
}

TSharedPtr<SGraphNode> UDialogPlayAnimationNode::CreateVisualWidget()
{
	return SNew(SDialogPlayAnimationGraphNodeWidget, this);
}

bool UDialogPlayAnimationNode::ShouldShowNodeProperties() const
{
	return true;
}

void UDialogPlayAnimationNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, PlayDialogWindowAnimation);
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

	UK2Node_MakeStruct* MakePlayDialogWindowAnimationDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
	MakePlayDialogWindowAnimationDataStruct->StructType = FPlayDialogWindowAnimationData::StaticStruct();
	MakePlayDialogWindowAnimationDataStruct->bMadeAfterOverridePinRemoval = true;
	MakePlayDialogWindowAnimationDataStruct->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakePlayDialogWindowAnimationDataStruct, this);

	//Input
	MakePlayDialogWindowAnimationDataStruct->FindPin(TEXT("bPlayBackwards"))->DefaultValue = bPlayBackwards ? TEXT("true") : TEXT("false");;
	MakePlayDialogWindowAnimationDataStruct->FindPin(TEXT("TransitionEvent"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ETransitionEvent"), static_cast<uint8>(TransitionEvent));

	if (TransitionEvent != ETransitionEvent::No_Transition)
	{
		MakePlayDialogWindowAnimationDataStruct->FindPin(TEXT("bDontWaitForTransitionToFinish"))->DefaultValue = bDontWaitForTransitionToFinish ? TEXT("true") : TEXT("false");
	}

	if (TransitionEvent == ETransitionEvent::Custom)
	{
		MakePlayDialogWindowAnimationDataStruct->FindPin(TEXT("CustomTransitionName"))->DefaultValue = CustomTransitionEventName;
	}
	
	MakePlayDialogWindowAnimationDataStruct->FindPin(TEXT("PlayDialogWindowAnimationData"))->MakeLinkTo(CallFunction->FindPin(TEXT("PlayDialogWindowAnimationData")));

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

bool UDialogPlayAnimationNode::IsDiffableProperty(const FName& PropertyName) const
{
	return false;
}

#undef LOCTEXT_NAMESPACE
