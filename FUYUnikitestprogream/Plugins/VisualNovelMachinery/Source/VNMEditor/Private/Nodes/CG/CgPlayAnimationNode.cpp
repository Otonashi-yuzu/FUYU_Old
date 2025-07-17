// Copyright (c) 2022 Al_Fe


#include "CgPlayAnimationNode.h"

#include "CgPlayAnimationGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UCgPlayAnimationNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UCgPlayAnimationNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.CgPlayAnimationNode.Title", "CG Play Animation");
}

FText UCgPlayAnimationNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.CgPlayAnimationNode.Tooltip", "This node is used to play an animation for the specified CG!");
}

FLinearColor UCgPlayAnimationNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CgNodeColor;
}

FSlateIcon UCgPlayAnimationNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Cg", "NodeIcon.Cg");
    return Icon;
}

TSharedPtr<SGraphNode> UCgPlayAnimationNode::CreateVisualWidget()
{
    return SNew(SCgPlayAnimationGraphNodeWidget, this);
}

bool UCgPlayAnimationNode::ShouldShowNodeProperties() const
{
    return true;
}

void UCgPlayAnimationNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, PlayCgAnimation);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* MakePlayCgAnimationDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakePlayCgAnimationDataStruct->StructType = FPlayCgAnimationData::StaticStruct();
    MakePlayCgAnimationDataStruct->bMadeAfterOverridePinRemoval = true;
    MakePlayCgAnimationDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakePlayCgAnimationDataStruct, this);
    
    //Input
    MakePlayCgAnimationDataStruct->FindPin(TEXT("bPlayBackwards"))->DefaultValue = bPlayBackwards ? TEXT("true") : TEXT("false");
    MakePlayCgAnimationDataStruct->FindPin(TEXT("TransitionEvent"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ETransitionEvent"), static_cast<uint8>(TransitionEvent));
    MakePlayCgAnimationDataStruct->FindPin(TEXT("AnimationPlaybackMultiplier"))->DefaultValue = FString::FromInt(AnimationPlaybackMultiplier);

    if (TransitionEvent != ETransitionEvent::No_Transition)
    {
        MakePlayCgAnimationDataStruct->FindPin(TEXT("bDontWaitForTransitionToFinish"))->DefaultValue = bDontWaitForTransitionToFinish ? TEXT("true") : TEXT("false");
    }

    if (TransitionEvent == ETransitionEvent::Custom)
    {
        MakePlayCgAnimationDataStruct->FindPin(TEXT("CustomTransitionName"))->DefaultValue = CustomTransitionEventName;
    }
    
    MakePlayCgAnimationDataStruct->FindPin(TEXT("PlayCgAnimationData"))->MakeLinkTo(CallFunction->FindPin(TEXT("PlayCgAnimationData")));
    
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

bool UCgPlayAnimationNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("CgId");
}

#undef LOCTEXT_NAMESPACE
