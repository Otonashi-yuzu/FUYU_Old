// Copyright (c) 2022 Al_Fe


#include "CgHideNode.h"

#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "CgHideGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UCgHideNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UCgHideNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.CgHideNode.Title", "CG Hide");
}

FText UCgHideNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.CgHideNode.Tooltip", "This node is used to hide the currently shown CG.");
}

FLinearColor UCgHideNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CgNodeColor;
}

FSlateIcon UCgHideNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Cg", "NodeIcon.Cg");
    return Icon;
}

TSharedPtr<SGraphNode> UCgHideNode::CreateVisualWidget()
{
    return SNew(SCgHideGraphNodeWidget, this);
}

bool UCgHideNode::ShouldShowNodeProperties() const
{
    return true;
}

void UCgHideNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, HideCg);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    UK2Node_MakeStruct* MakeHideCgDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeHideCgDataStruct->StructType = FHideCgData::StaticStruct();
    MakeHideCgDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeHideCgDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeHideCgDataStruct, this);

    //Input Pins
    MakeHideCgDataStruct->FindPin(TEXT("TransitionEvent"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ETransitionEvent"), static_cast<uint8>(TransitionEvent));
    MakeHideCgDataStruct->FindPin(TEXT("AnimationPlaybackMultiplier"))->DefaultValue = FString::FromInt(AnimationPlaybackMultiplier);

    if (TransitionEvent != ETransitionEvent::No_Transition)
    {
        MakeHideCgDataStruct->FindPin(TEXT("bDontWaitForTransitionToFinish"))->DefaultValue = bDontWaitForTransitionToFinish ? TEXT("true") : TEXT("false");
    }

    if (TransitionEvent == ETransitionEvent::Custom)
    {
        MakeHideCgDataStruct->FindPin(TEXT("CustomTransitionName"))->DefaultValue = CustomTransitionEventName;
    }
    
    MakeHideCgDataStruct->FindPin(TEXT("HideCgData"))->MakeLinkTo(CallFunction->FindPin(TEXT("HideCgData")));

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

#undef LOCTEXT_NAMESPACE