// Copyright (c) 2022 Al_Fe


#include "DialogAudioStopBGMNode.h"

#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DialogAudioStopBGMGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UDialogAudioStopBGMNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UDialogAudioStopBGMNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogAudioStopBGMNode.Title", "Dialog Audio Stop Background Music");
}

FText UDialogAudioStopBGMNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogAudioStopBGMNode.Tooltip", "This node is used to stop the currently playing Background Music.");
}

FLinearColor UDialogAudioStopBGMNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CgNodeColor;
}

FSlateIcon UDialogAudioStopBGMNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Audio", "NodeIcon.Audio");
    return Icon;
}

TSharedPtr<SGraphNode> UDialogAudioStopBGMNode::CreateVisualWidget()
{
    return SNew(SDialogAudioStopBGMGraphNodeWidget, this);
}

bool UDialogAudioStopBGMNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogAudioStopBGMNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, StopBackgroundMusic);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    UK2Node_MakeStruct* StopDialogAudioData = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    StopDialogAudioData->StructType = FStopDialogAudioData::StaticStruct();
    StopDialogAudioData->bMadeAfterOverridePinRemoval = true;
    StopDialogAudioData->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(StopDialogAudioData, this);

    //Input Pins
    StopDialogAudioData->FindPin(TEXT("FadeTime"))->DefaultValue = FString::FromInt(FadeOutTime);
    StopDialogAudioData->FindPin(TEXT("AudioFadeCurve"))->DefaultValue = UEnumUtility::EnumToString(TEXT("EAudioFaderCurve"), static_cast<uint8>(AudioFadeCurve));
    
    StopDialogAudioData->FindPin(TEXT("StopDialogAudioData"))->MakeLinkTo(CallFunction->FindPin(TEXT("StopDialogAudioData")));

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