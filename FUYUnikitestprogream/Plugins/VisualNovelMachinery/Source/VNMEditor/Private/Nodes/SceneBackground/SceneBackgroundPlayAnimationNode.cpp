// Copyright (c) 2022 Al_Fe


#include "SceneBackgroundPlayAnimationNode.h"

#include "SceneBackgroundPlayAnimationGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void USceneBackgroundPlayAnimationNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText USceneBackgroundPlayAnimationNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.SceneBackgroundPlayAnimationNode.Title", "Scene Background Play Animation");
}

FText USceneBackgroundPlayAnimationNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.SceneBackgroundPlayAnimationNode.Tooltip", "This node is used to play an animation for the specified scene background!");
}

FLinearColor USceneBackgroundPlayAnimationNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->SceneBackgroundNodeColor;
}

FSlateIcon USceneBackgroundPlayAnimationNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.SceneBackground", "NodeIcon.SceneBackground");
    return Icon;
}

TSharedPtr<SGraphNode> USceneBackgroundPlayAnimationNode::CreateVisualWidget()
{
    return SNew(SSceneBackgroundPlayAnimationGraphNodeWidget, this);
}

bool USceneBackgroundPlayAnimationNode::ShouldShowNodeProperties() const
{
    return true;
}

void USceneBackgroundPlayAnimationNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, PlaySceneBackgroundAnimation);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* MakeFPlaySceneBackgroundAnimationDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeFPlaySceneBackgroundAnimationDataStruct->StructType = FPlaySceneBackgroundAnimationData::StaticStruct();
    MakeFPlaySceneBackgroundAnimationDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeFPlaySceneBackgroundAnimationDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeFPlaySceneBackgroundAnimationDataStruct, this);
    
    //Input
    MakeFPlaySceneBackgroundAnimationDataStruct->FindPin(TEXT("bPlayBackwards"))->DefaultValue = bPlayBackwards ? TEXT("true") : TEXT("false");
    MakeFPlaySceneBackgroundAnimationDataStruct->FindPin(TEXT("AnimationPlaybackMultiplier"))->DefaultValue = FString::SanitizeFloat(AnimationPlaybackMultiplier);
    MakeFPlaySceneBackgroundAnimationDataStruct->FindPin(TEXT("TransitionEvent"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ETransitionEvent"), static_cast<uint8>(TransitionEvent));

    if (TransitionEvent != ETransitionEvent::No_Transition)
    {
        MakeFPlaySceneBackgroundAnimationDataStruct->FindPin(TEXT("bDontWaitForTransitionToFinish"))->DefaultValue = bDontWaitForTransitionToFinish ? TEXT("true") : TEXT("false");
    }

    if (TransitionEvent == ETransitionEvent::Custom)
    {
        MakeFPlaySceneBackgroundAnimationDataStruct->FindPin(TEXT("CustomTransitionName"))->DefaultValue = CustomTransitionEventName;
    }
    MakeFPlaySceneBackgroundAnimationDataStruct->FindPin(TEXT("PlaySceneBackgroundAnimationData"))->MakeLinkTo(CallFunction->FindPin(TEXT("PlaySceneBackgroundAnimationData")));
    
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

bool USceneBackgroundPlayAnimationNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("SceneBackgroundId");
}

#undef LOCTEXT_NAMESPACE
