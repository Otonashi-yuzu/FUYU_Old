// Copyright (c) 2022 Al_Fe


#include "DialogAudioPlayDialogVoiceOverNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DialogAudioPlayDialogVoiceOverGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"
#include "VNMSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UDialogAudioPlayDialogVoiceOverNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UDialogAudioPlayDialogVoiceOverNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogAudioPlayDialogVoiceOverNode.Title", "Dialog Audio Play Dialog Voice Over");
}

FText UDialogAudioPlayDialogVoiceOverNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogAudioPlayDialogVoiceOverNode.Tooltip", "This node is used to play Dialog voice over!");
}

FLinearColor UDialogAudioPlayDialogVoiceOverNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->DialogAudioColor;
}

FSlateIcon UDialogAudioPlayDialogVoiceOverNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Audio", "NodeIcon.Audio");
    return Icon;
}

TSharedPtr<SGraphNode> UDialogAudioPlayDialogVoiceOverNode::CreateVisualWidget()
{
    return SNew(SDialogAudioPlayDialogVoiceOverGraphNodeWidget, this);
}

bool UDialogAudioPlayDialogVoiceOverNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogAudioPlayDialogVoiceOverNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, PlayDialogVoiceOver);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* PlayDialogAudioDialogVoiceOverData = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    PlayDialogAudioDialogVoiceOverData->StructType = FPlayDialogAudioDialogVoiceOverData::StaticStruct();
    PlayDialogAudioDialogVoiceOverData->bMadeAfterOverridePinRemoval = true;
    PlayDialogAudioDialogVoiceOverData->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(PlayDialogAudioDialogVoiceOverData, this);
    
    //Input
    PlayDialogAudioDialogVoiceOverData->FindPin(TEXT("DialogAudioId"))->DefaultValue = VoiceOverId.ToString();
    PlayDialogAudioDialogVoiceOverData->FindPin(TEXT("DialogId"))->DefaultValue = DialogId.ToString();
    PlayDialogAudioDialogVoiceOverData->FindPin(TEXT("Volume"))->DefaultValue = FString::FromInt(Volume);
    PlayDialogAudioDialogVoiceOverData->FindPin(TEXT("Pitch"))->DefaultValue = FString::FromInt(Pitch);
    PlayDialogAudioDialogVoiceOverData->FindPin(TEXT("StartTime"))->DefaultValue = FString::FromInt(StartTime);
    PlayDialogAudioDialogVoiceOverData->FindPin(TEXT("FadeTime"))->DefaultValue = FString::FromInt(FadeInTime);
    PlayDialogAudioDialogVoiceOverData->FindPin(TEXT("AudioFadeCurve"))->DefaultValue = UEnumUtility::EnumToString(TEXT("EAudioFaderCurve"), static_cast<uint8>(AudioFadeCurve));
    PlayDialogAudioDialogVoiceOverData->FindPin(TEXT("bWaitForAudioToFinish"))->DefaultValue = bWaitForAudioToFinish ? TEXT("true") : TEXT("false");
    
    PlayDialogAudioDialogVoiceOverData->FindPin(TEXT("PlayDialogAudioDialogVoiceOverData"))->MakeLinkTo(CallFunction->FindPin(TEXT("PlayDialogAudioDialogVoiceOverData")));
    
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

bool UDialogAudioPlayDialogVoiceOverNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("VoiceOverId")
    || PropertyName == TEXT("DialogId");
}

#undef LOCTEXT_NAMESPACE
