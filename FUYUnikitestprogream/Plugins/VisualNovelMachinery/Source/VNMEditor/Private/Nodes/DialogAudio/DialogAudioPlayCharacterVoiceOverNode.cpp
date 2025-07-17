// Copyright (c) 2022 Al_Fe


#include "DialogAudioPlayCharacterVoiceOverNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DialogAudioPlayCharacterVoiceOverGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UDialogAudioPlayCharacterVoiceOverNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UDialogAudioPlayCharacterVoiceOverNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogAudioPlayCharacterVoiceOverNode.Title", "Dialog Audio Play Character Voice Over");
}

FText UDialogAudioPlayCharacterVoiceOverNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogAudioPlayCharacterVoiceOverNode.Tooltip", "This node is used to play character voice over!");
}

FLinearColor UDialogAudioPlayCharacterVoiceOverNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->DialogAudioColor;
}

FSlateIcon UDialogAudioPlayCharacterVoiceOverNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Audio", "NodeIcon.Audio");
    return Icon;
}

TSharedPtr<SGraphNode> UDialogAudioPlayCharacterVoiceOverNode::CreateVisualWidget()
{
    return SNew(SDialogAudioPlayCharacterVoiceOverGraphNodeWidget, this);
}

bool UDialogAudioPlayCharacterVoiceOverNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogAudioPlayCharacterVoiceOverNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, PlayCharacterVoiceOver);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* PlayDialogAudioCharacterVoiceOverData = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    PlayDialogAudioCharacterVoiceOverData->StructType = FPlayDialogAudioCharacterVoiceOverData::StaticStruct();
    PlayDialogAudioCharacterVoiceOverData->bMadeAfterOverridePinRemoval = true;
    PlayDialogAudioCharacterVoiceOverData->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(PlayDialogAudioCharacterVoiceOverData, this);
    
    //Input
    PlayDialogAudioCharacterVoiceOverData->FindPin(TEXT("DialogAudioId"))->DefaultValue = VoiceOverId.ToString();
    PlayDialogAudioCharacterVoiceOverData->FindPin(TEXT("CharacterId"))->DefaultValue = CharacterId.ToString();
    PlayDialogAudioCharacterVoiceOverData->FindPin(TEXT("Volume"))->DefaultValue = FString::FromInt(Volume);
    PlayDialogAudioCharacterVoiceOverData->FindPin(TEXT("Pitch"))->DefaultValue = FString::FromInt(Pitch);
    PlayDialogAudioCharacterVoiceOverData->FindPin(TEXT("StartTime"))->DefaultValue = FString::FromInt(StartTime);
    PlayDialogAudioCharacterVoiceOverData->FindPin(TEXT("FadeTime"))->DefaultValue = FString::FromInt(FadeInTime);
    PlayDialogAudioCharacterVoiceOverData->FindPin(TEXT("AudioFadeCurve"))->DefaultValue = UEnumUtility::EnumToString(TEXT("EAudioFaderCurve"), static_cast<uint8>(AudioFadeCurve));
    PlayDialogAudioCharacterVoiceOverData->FindPin(TEXT("bWaitForAudioToFinish"))->DefaultValue = bWaitForAudioToFinish ? TEXT("true") : TEXT("false");
    
    PlayDialogAudioCharacterVoiceOverData->FindPin(TEXT("PlayDialogAudioCharacterVoiceOverData"))->MakeLinkTo(CallFunction->FindPin(TEXT("PlayDialogAudioCharacterVoiceOverData")));
    
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

bool UDialogAudioPlayCharacterVoiceOverNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("VoiceOverId")
    || PropertyName == TEXT("CharacterId");
}

#undef LOCTEXT_NAMESPACE
