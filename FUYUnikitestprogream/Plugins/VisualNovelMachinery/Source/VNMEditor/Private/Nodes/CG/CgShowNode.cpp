// Copyright (c) 2022 Al_Fe


#include "CgShowNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "CgShowGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UCgShowNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UCgShowNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.CgShowNode.Title", "CG Show");
}

FText UCgShowNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.CgShowNode.Tooltip", "This node is used to show the specified CG!");
}

FLinearColor UCgShowNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CgNodeColor;
}

FSlateIcon UCgShowNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Cg", "NodeIcon.Cg");
    return Icon;
}

TSharedPtr<SGraphNode> UCgShowNode::CreateVisualWidget()
{
    return SNew(SCgShowGraphNodeWidget, this);
}

bool UCgShowNode::ShouldShowNodeProperties() const
{
    return true;
}

void UCgShowNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, ShowCg);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* MakeShowCgDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeShowCgDataStruct->StructType = FShowCgData::StaticStruct();
    MakeShowCgDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeShowCgDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeShowCgDataStruct, this);
    
    //Input
    MakeShowCgDataStruct->FindPin(TEXT("CgId"))->DefaultValue = CgId.ToString();
    MakeShowCgDataStruct->FindPin(TEXT("TransitionEvent"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ETransitionEvent"), static_cast<uint8>(TransitionEvent));
    MakeShowCgDataStruct->FindPin(TEXT("AnimationPlaybackMultiplier"))->DefaultValue = FString::FromInt(AnimationPlaybackMultiplier);

    if (TransitionEvent != ETransitionEvent::No_Transition)
    {
        MakeShowCgDataStruct->FindPin(TEXT("bDontWaitForTransitionToFinish"))->DefaultValue = bDontWaitForTransitionToFinish ? TEXT("true") : TEXT("false");
    }

    if (TransitionEvent == ETransitionEvent::Custom)
    {
        MakeShowCgDataStruct->FindPin(TEXT("CustomTransitionName"))->DefaultValue = CustomTransitionEventName;
    }
    
    MakeShowCgDataStruct->FindPin(TEXT("ShowCgData"))->MakeLinkTo(CallFunction->FindPin(TEXT("ShowCgData")));
    
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

bool UCgShowNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("CgId");
}

#undef LOCTEXT_NAMESPACE
