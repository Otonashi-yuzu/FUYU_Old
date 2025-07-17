// Copyright (c) 2022 Al_Fe


#include "WidgetShowNode.h"



#include "BaseVNMActivatableWidget.h"
#include "WidgetShowGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UWidgetShowNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UWidgetShowNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.WidgetShowNode.Title", "Widget Show");
}

FText UWidgetShowNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.WidgetShowNode.Tooltip", "This node is used to show a VNM Activatable Widget!");
}

FLinearColor UWidgetShowNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->DialogTextNodeColor;
}

FSlateIcon UWidgetShowNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Window", "NodeIcon.Window");
    return Icon;
}

TSharedPtr<SGraphNode> UWidgetShowNode::CreateVisualWidget()
{
    return SNew(SWidgetShowGraphNodeWidget, this);
}

bool UWidgetShowNode::ShouldShowNodeProperties() const
{
    return true;
}

void UWidgetShowNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, ShowWidget);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);

    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    UK2Node_MakeStruct* MakeWidgetShowDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeWidgetShowDataStruct->StructType = FWidgetShowData::StaticStruct();
    MakeWidgetShowDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeWidgetShowDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeWidgetShowDataStruct, this);
    
    //Input
    MakeWidgetShowDataStruct->FindPin(TEXT("ActivatableWidgetClass"))->DefaultObject = ActivatableWidgetClass;
    MakeWidgetShowDataStruct->FindPin(TEXT("bWaitForWidgetToCloseAgain"))->DefaultValue = bWaitForWidgetToCloseAgain ? TEXT("true") : TEXT("false");
    MakeWidgetShowDataStruct->FindPin(TEXT("WidgetShowData"))->MakeLinkTo(CallFunction->FindPin(TEXT("WidgetShowData")));

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

bool UWidgetShowNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("bSetToAutomatic")
    || PropertyName == TEXT("bShouldHide");
}

#undef LOCTEXT_NAMESPACE
