// Copyright (c) 2022 Al_Fe


#include "DialogAudioPlayBGMNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DialogAudioPlayBGMGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UDialogAudioPlayBGMNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UDialogAudioPlayBGMNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogAudioPlayBGMNode.Title", "Dialog Audio Play Background Music");
}

FText UDialogAudioPlayBGMNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogAudioPlayBGMNode.Tooltip", "This node is used to play background music!");
}

FLinearColor UDialogAudioPlayBGMNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->DialogAudioColor;
}

FSlateIcon UDialogAudioPlayBGMNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Audio", "NodeIcon.Audio");
    return Icon;
}

TSharedPtr<SGraphNode> UDialogAudioPlayBGMNode::CreateVisualWidget()
{
    return SNew(SDialogAudioPlayBGMGraphNodeWidget, this);
}

bool UDialogAudioPlayBGMNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogAudioPlayBGMNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, PlayBackgroundMusic);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* PlayDialogAudioBackgroundMusicDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    PlayDialogAudioBackgroundMusicDataStruct->StructType = FPlayDialogAudioBackgroundMusicData::StaticStruct();
    PlayDialogAudioBackgroundMusicDataStruct->bMadeAfterOverridePinRemoval = true;
    PlayDialogAudioBackgroundMusicDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(PlayDialogAudioBackgroundMusicDataStruct, this);
    
    //Input
    PlayDialogAudioBackgroundMusicDataStruct->FindPin(TEXT("DialogAudioId"))->DefaultValue = BackgroundMusicId.ToString();
    PlayDialogAudioBackgroundMusicDataStruct->FindPin(TEXT("Volume"))->DefaultValue = FString::FromInt(Volume);
    PlayDialogAudioBackgroundMusicDataStruct->FindPin(TEXT("Pitch"))->DefaultValue = FString::FromInt(Pitch);
    PlayDialogAudioBackgroundMusicDataStruct->FindPin(TEXT("StartTime"))->DefaultValue = FString::FromInt(StartTime);
    PlayDialogAudioBackgroundMusicDataStruct->FindPin(TEXT("FadeTime"))->DefaultValue = FString::FromInt(FadeInTime);
    PlayDialogAudioBackgroundMusicDataStruct->FindPin(TEXT("AudioFadeCurve"))->DefaultValue = UEnumUtility::EnumToString(TEXT("EAudioFaderCurve"), static_cast<uint8>(AudioFadeCurve));
    PlayDialogAudioBackgroundMusicDataStruct->FindPin(TEXT("bWaitForAudioToFinish"))->DefaultValue = bWaitForAudioToFinish ? TEXT("true") : TEXT("false");
    PlayDialogAudioBackgroundMusicDataStruct->FindPin(TEXT("bIsLooping"))->DefaultValue = bIsLooping ? TEXT("true") : TEXT("false");
    
    PlayDialogAudioBackgroundMusicDataStruct->FindPin(TEXT("PlayDialogAudioBackgroundMusicData"))->MakeLinkTo(CallFunction->FindPin(TEXT("PlayDialogAudioBackgroundMusicData")));
    
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

bool UDialogAudioPlayBGMNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("BackgroundMusicId");
}

#undef LOCTEXT_NAMESPACE
