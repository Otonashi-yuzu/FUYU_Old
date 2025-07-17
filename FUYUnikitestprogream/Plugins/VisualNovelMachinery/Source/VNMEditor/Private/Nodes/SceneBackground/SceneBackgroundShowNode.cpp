// Copyright (c) 2022 Al_Fe


#include "SceneBackgroundShowNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "SceneBackgroundShowGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void USceneBackgroundShowNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText USceneBackgroundShowNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.SceneBackgroundShowNode.Title", "Scene Background Show");
}

FText USceneBackgroundShowNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.SceneBackgroundShowNode.Tooltip", "This node is used to show the specified scene background!");
}

FLinearColor USceneBackgroundShowNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->SceneBackgroundNodeColor;
}

FSlateIcon USceneBackgroundShowNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.SceneBackground", "NodeIcon.SceneBackground");
    return Icon;
}

TSharedPtr<SGraphNode> USceneBackgroundShowNode::CreateVisualWidget()
{
    return SNew(SSceneBackgroundShowGraphNodeWidget, this);
}

bool USceneBackgroundShowNode::ShouldShowNodeProperties() const
{
    return true;
}

void USceneBackgroundShowNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, ShowSceneBackground);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* MakeShowSceneBackgroundDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeShowSceneBackgroundDataStruct->StructType = FShowSceneBackgroundData::StaticStruct();
    MakeShowSceneBackgroundDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeShowSceneBackgroundDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeShowSceneBackgroundDataStruct, this);
    
    //Input
    MakeShowSceneBackgroundDataStruct->FindPin(TEXT("SceneBackgroundId"))->DefaultValue = SceneBackgroundId.ToString();
    MakeShowSceneBackgroundDataStruct->FindPin(TEXT("AnimationPlaybackMultiplier"))->DefaultValue = FString::SanitizeFloat(AnimationPlaybackMultiplier);
    MakeShowSceneBackgroundDataStruct->FindPin(TEXT("TransitionEvent"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ETransitionEvent"), static_cast<uint8>(TransitionEvent));

    if (TransitionEvent != ETransitionEvent::No_Transition)
    {
        MakeShowSceneBackgroundDataStruct->FindPin(TEXT("bDontWaitForTransitionToFinish"))->DefaultValue = bDontWaitForTransitionToFinish ? TEXT("true") : TEXT("false");
    }

    if (TransitionEvent == ETransitionEvent::Custom)
    {
        MakeShowSceneBackgroundDataStruct->FindPin(TEXT("CustomTransitionName"))->DefaultValue = CustomTransitionEventName;
    }
    MakeShowSceneBackgroundDataStruct->FindPin(TEXT("ShowSceneBackgroundData"))->MakeLinkTo(CallFunction->FindPin(TEXT("ShowSceneBackgroundData")));
    
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

bool USceneBackgroundShowNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("SceneBackgroundId");
}

#undef LOCTEXT_NAMESPACE
