// Copyright (c) 2022 Al_Fe


#include "DialogAudioPlaySoundEffectNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DialogAudioPlaySoundEffectGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UDialogAudioPlaySoundEffectNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UDialogAudioPlaySoundEffectNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogAudioPlaySoundEffectNode.Title", "Dialog Audio Play Sound Effect");
}

FText UDialogAudioPlaySoundEffectNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogAudioPlaySoundEffectNode.Tooltip", "This node is used to play a sound effect!");
}

FLinearColor UDialogAudioPlaySoundEffectNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->DialogAudioColor;
}

FSlateIcon UDialogAudioPlaySoundEffectNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Audio", "NodeIcon.Audio");
    return Icon;
}

TSharedPtr<SGraphNode> UDialogAudioPlaySoundEffectNode::CreateVisualWidget()
{
    return SNew(SDialogAudioPlaySoundEffectGraphNodeWidget, this);
}

bool UDialogAudioPlaySoundEffectNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogAudioPlaySoundEffectNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, PlaySoundEffect);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* PlayAudioDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    PlayAudioDataStruct->StructType = FPlayDialogAudioData::StaticStruct();
    PlayAudioDataStruct->bMadeAfterOverridePinRemoval = true;
    PlayAudioDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(PlayAudioDataStruct, this);
    
    //Input
    PlayAudioDataStruct->FindPin(TEXT("DialogAudioId"))->DefaultValue = SoundEffectId.ToString();
    PlayAudioDataStruct->FindPin(TEXT("Volume"))->DefaultValue = FString::FromInt(Volume);
    PlayAudioDataStruct->FindPin(TEXT("Pitch"))->DefaultValue = FString::FromInt(Pitch);
    PlayAudioDataStruct->FindPin(TEXT("StartTime"))->DefaultValue = FString::FromInt(StartTime);
    PlayAudioDataStruct->FindPin(TEXT("FadeTime"))->DefaultValue = FString::FromInt(FadeInTime);
    PlayAudioDataStruct->FindPin(TEXT("AudioFadeCurve"))->DefaultValue = UEnumUtility::EnumToString(TEXT("EAudioFaderCurve"), static_cast<uint8>(AudioFadeCurve));
    PlayAudioDataStruct->FindPin(TEXT("bWaitForAudioToFinish"))->DefaultValue = bWaitForAudioToFinish ? TEXT("true") : TEXT("false");
    
    PlayAudioDataStruct->FindPin(TEXT("PlayDialogAudioData"))->MakeLinkTo(CallFunction->FindPin(TEXT("PlayDialogAudioData")));
    
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

bool UDialogAudioPlaySoundEffectNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("SoundEffectId");
}

#undef LOCTEXT_NAMESPACE
