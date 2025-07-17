// Copyright (c) 2022 Al_Fe


#include "DialogAudioStopSoundEffectNode.h"

#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DialogAudioStopSoundEffectGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UDialogAudioStopSoundEffectNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UDialogAudioStopSoundEffectNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogAudioStopSoundEffectNode.Title", "Dialog Audio Stop Sound Effect");
}

FText UDialogAudioStopSoundEffectNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogAudioStopSoundEffectNode.Tooltip", "This node is used to stop the currently playing Sound Effect.");
}

FLinearColor UDialogAudioStopSoundEffectNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CgNodeColor;
}

FSlateIcon UDialogAudioStopSoundEffectNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Audio", "NodeIcon.Audio");
    return Icon;
}

TSharedPtr<SGraphNode> UDialogAudioStopSoundEffectNode::CreateVisualWidget()
{
    return SNew(SDialogAudioStopSoundEffectGraphNodeWidget, this);
}

bool UDialogAudioStopSoundEffectNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogAudioStopSoundEffectNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, StopSoundEffect);
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