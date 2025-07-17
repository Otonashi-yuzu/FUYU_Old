// Copyright (c) 2022 Al_Fe


#include "DialogWindowNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "DialogWindowGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UDialogWindowNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UDialogWindowNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogWindowNode.Title", "Dialog Window Control");
}

FText UDialogWindowNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogWindowNode.Tooltip", "This node is used to control the dialog window!");
}

FLinearColor UDialogWindowNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->DialogWindowNodeColor;
}

FSlateIcon UDialogWindowNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Window", "NodeIcon.Window");
    return Icon;
}

TSharedPtr<SGraphNode> UDialogWindowNode::CreateVisualWidget()
{
    return SNew(SDialogWindowGraphNodeWidget, this);
}

bool UDialogWindowNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogWindowNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    UFunction* BlueprintFunction;
    if (bShouldHide)
    {
        const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, HideDialogWindow);
        BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);
    }
    else
    {
        const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, ShowDialogWindow);
        BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);
    } 

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);

    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    UK2Node_MakeStruct* MakeDialogWindowDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeDialogWindowDataStruct->StructType = FDialogWindowData::StaticStruct();
    MakeDialogWindowDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeDialogWindowDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeDialogWindowDataStruct, this);
    
    //Input
    MakeDialogWindowDataStruct->FindPin(TEXT("bSetToAutomatic"))->DefaultValue = FString::FromInt(bSetToAutomatic);
    MakeDialogWindowDataStruct->FindPin(TEXT("TransitionEvent"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ETransitionEvent"), static_cast<uint8>(TransitionEvent));
    
    if (TransitionEvent != ETransitionEvent::No_Transition)
    {
        MakeDialogWindowDataStruct->FindPin(TEXT("bDontWaitForTransitionToFinish"))->DefaultValue = bDontWaitForTransitionToFinish ? TEXT("true") : TEXT("false");
    }
    
    if (TransitionEvent == ETransitionEvent::Custom)
    {
        MakeDialogWindowDataStruct->FindPin(TEXT("CustomTransitionName"))->DefaultValue = CustomTransitionEventName;
    }
    MakeDialogWindowDataStruct->FindPin(TEXT("DialogWindowData"))->MakeLinkTo(CallFunction->FindPin(TEXT("DialogWindowData")));

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

bool UDialogWindowNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("bSetToAutomatic")
    || PropertyName == TEXT("bShouldHide");
}

#undef LOCTEXT_NAMESPACE
