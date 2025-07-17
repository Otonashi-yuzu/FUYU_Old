// Copyright (c) 2022 Al_Fe


#include "CharacterPlayAnimationNode.h"

#include "CharacterPlayAnimationGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UCharacterPlayAnimationNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UCharacterPlayAnimationNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.CharacterPlayAnimationNode.Title", "Character Play Animation");
}

FText UCharacterPlayAnimationNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.CharacterPlayAnimationNode.Tooltip", "This node is used to play an animation using the specified character!");
}

FLinearColor UCharacterPlayAnimationNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CharacterNodesColor;
}

FSlateIcon UCharacterPlayAnimationNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Character", "NodeIcon.Character");
    return Icon;
}

TSharedPtr<SGraphNode> UCharacterPlayAnimationNode::CreateVisualWidget()
{
    return SNew(SCharacterPlayAnimationGraphNodeWidget, this);
}

bool UCharacterPlayAnimationNode::ShouldShowNodeProperties() const
{
    return true;
}

void UCharacterPlayAnimationNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, PlayCharacterAnimation);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* MakePlayCharacterAnimationDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakePlayCharacterAnimationDataStruct->StructType = FPlayCharacterAnimationData::StaticStruct();
    MakePlayCharacterAnimationDataStruct->bMadeAfterOverridePinRemoval = true;
    MakePlayCharacterAnimationDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakePlayCharacterAnimationDataStruct, this);

    
    //Input
    MakePlayCharacterAnimationDataStruct->FindPin(TEXT("CharacterId"))->DefaultValue = CharacterId.ToString();
    MakePlayCharacterAnimationDataStruct->FindPin(TEXT("bPlayBackwards"))->DefaultValue = bPlayBackwards ? TEXT("true") : TEXT("false");
    MakePlayCharacterAnimationDataStruct->FindPin(TEXT("TransitionEvent"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ETransitionEvent"), static_cast<uint8>(TransitionEvent));
    MakePlayCharacterAnimationDataStruct->FindPin(TEXT("AnimationPlaybackMultiplier"))->DefaultValue = FString::FromInt(AnimationPlaybackMultiplier);

    if (TransitionEvent != ETransitionEvent::No_Transition)
    {
        MakePlayCharacterAnimationDataStruct->FindPin(TEXT("bDontWaitForTransitionToFinish"))->DefaultValue = bDontWaitForTransitionToFinish ? TEXT("true") : TEXT("false");
    }

    if (TransitionEvent == ETransitionEvent::Custom)
    {
        MakePlayCharacterAnimationDataStruct->FindPin(TEXT("CustomTransitionName"))->DefaultValue = CustomTransitionEventName;
    }
    
    MakePlayCharacterAnimationDataStruct->FindPin(TEXT("PlayCharacterAnimationData"))->MakeLinkTo(CallFunction->FindPin(TEXT("PlayCharacterAnimationData")));

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

bool UCharacterPlayAnimationNode::IsDiffableProperty(const FName& PropertyName) const
{    
    return PropertyName == TEXT("CharacterId")
    || PropertyName == TEXT("EmotionId");
}

#undef LOCTEXT_NAMESPACE
