// Copyright (c) 2022 Al_Fe


#include "DialogTextNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "CharacterShowNode.h"
#include "DialogAudioPlayCharacterVoiceOverNode.h"
#include "DialogAudioPlayDialogVoiceOverNode.h"
#include "DialogTextNodeGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"
#include "VNMSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UDialogTextNode::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    FName PropertyName = (PropertyChangedEvent.Property != NULL)
                             ? PropertyChangedEvent.Property->GetFName()
                             : NAME_None;
    if (PropertyName == GET_MEMBER_NAME_CHECKED(UDialogTextNode, bUseDialogTextPin))
    {
        ReconstructNode();
        GetGraph()->NotifyGraphChanged();
    }

    Super::PostEditChangeProperty(PropertyChangedEvent);
}

void UDialogTextNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);

    if (bUseDialogTextPin)
    {
        CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Text, {}, nullptr, TEXT("DialogText"));
    }
    
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UDialogTextNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogTextNode.Title", "Dialog Text");
}

FText UDialogTextNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogTextNode.Tooltip", "This node is used to display dialog text!");
}

TSharedPtr<SGraphNode> UDialogTextNode::CreateVisualWidget()
{
    return SNew(SDialogTextNodeGraphNodeWidget, this);
}
FLinearColor UDialogTextNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->DialogTextNodeColor;
}

FSlateIcon UDialogTextNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Dialog", "NodeIcon.Dialog");
    return Icon;
}

bool UDialogTextNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogTextNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    
    UEdGraphPin* NodeExec = GetExecPin();
    UCharacterShowNode* CharacterShowNode = nullptr;
    UDialogAudioPlayCharacterVoiceOverNode* DialogAudioPlayCharacterVoiceOverNode = nullptr;
    UDialogAudioPlayDialogVoiceOverNode* DialogAudioPlayDialogVoiceOverNode = nullptr;
    if (!EmotionId.IsNone())
    {
        CharacterShowNode = CompilerContext.SpawnIntermediateNode<UCharacterShowNode>(this, SourceGraph);
        CharacterShowNode->AllocateDefaultPins();
        CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CharacterShowNode, this);

        UEdGraphPin* InternalExec = CharacterShowNode->GetExecPin();
        CompilerContext.MovePinLinksToIntermediate(*NodeExec, *InternalExec);
        CharacterShowNode->CharacterId = CharacterId;
        CharacterShowNode->EmotionId = EmotionId;
        CharacterShowNode->TransitionEvent = TransitionEvent;
        CharacterShowNode->AnimationPlaybackMultiplier = AnimationPlaybackMultiplier;
        CharacterShowNode->CustomTransitionEventName = CustomTransitionEventName;
        CharacterShowNode->CharacterPositioning = CharacterPositioning;
        CharacterShowNode->CustomCharacterPosition = CustomCharacterPosition;
        CharacterShowNode->CharacterFlipState = CharacterFlipState;
        CharacterShowNode->ZOrderIndex = ZOrderIndex;
        CharacterShowNode->bDontWaitForTransitionToFinish = bDontWaitForTransitionToFinish;
        CharacterShowNode->Layers = Layers;
    }
    
    if (bUseVoiceOver && !VoiceOverId.IsNone() && bUseCharacterVoiceOver)
    {
        DialogAudioPlayCharacterVoiceOverNode = CompilerContext.SpawnIntermediateNode<UDialogAudioPlayCharacterVoiceOverNode>(this, SourceGraph);
        DialogAudioPlayCharacterVoiceOverNode->AllocateDefaultPins();
        CompilerContext.MessageLog.NotifyIntermediateObjectCreation(DialogAudioPlayCharacterVoiceOverNode, this);

        UEdGraphPin* InternalExec = DialogAudioPlayCharacterVoiceOverNode->GetExecPin();
        if (CharacterShowNode)
        {
            CharacterShowNode->FindPin(UEdGraphSchema_K2::PN_Then)->MakeLinkTo(InternalExec);
        }
        else
        {
            CompilerContext.MovePinLinksToIntermediate(*NodeExec, *InternalExec);
        }
        DialogAudioPlayCharacterVoiceOverNode->VoiceOverId = VoiceOverId;
        DialogAudioPlayCharacterVoiceOverNode->CharacterId = CharacterId;
        DialogAudioPlayCharacterVoiceOverNode->Volume = Volume;
        DialogAudioPlayCharacterVoiceOverNode->Pitch = Pitch;
        DialogAudioPlayCharacterVoiceOverNode->StartTime = StartTime;
    }
    else if (bUseVoiceOver && !VoiceOverId.IsNone() && bUseDialogVoiceOver)
    {
        DialogAudioPlayDialogVoiceOverNode = CompilerContext.SpawnIntermediateNode<UDialogAudioPlayDialogVoiceOverNode>(this, SourceGraph);
        DialogAudioPlayDialogVoiceOverNode->AllocateDefaultPins();
        CompilerContext.MessageLog.NotifyIntermediateObjectCreation(DialogAudioPlayDialogVoiceOverNode, this);

        UEdGraphPin* InternalExec = DialogAudioPlayDialogVoiceOverNode->GetExecPin();
        if (CharacterShowNode)
        {
            CharacterShowNode->FindPin(UEdGraphSchema_K2::PN_Then)->MakeLinkTo(InternalExec);
        }
        else
        {
            CompilerContext.MovePinLinksToIntermediate(*NodeExec, *InternalExec);
        }
        DialogAudioPlayDialogVoiceOverNode->VoiceOverId = VoiceOverId;
        DialogAudioPlayDialogVoiceOverNode->DialogId = DialogId;
        DialogAudioPlayDialogVoiceOverNode->Volume = Volume;
        DialogAudioPlayDialogVoiceOverNode->Pitch = Pitch;
        DialogAudioPlayDialogVoiceOverNode->StartTime = StartTime;
    }

    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, DisplayDialogText);
    UFunction* DisplayDialogTextFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!DisplayDialogTextFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* DisplayDialogTextFunctionNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    DisplayDialogTextFunctionNode->NodeGuid = NodeGuid;

    DisplayDialogTextFunctionNode->SetFromFunction(DisplayDialogTextFunction);
    DisplayDialogTextFunctionNode->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(DisplayDialogTextFunctionNode, this);

    // Input
    UK2Node_MakeStruct* MakeDisplayDialogTextStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeDisplayDialogTextStruct->StructType = FDisplayDialogTextData::StaticStruct();
    MakeDisplayDialogTextStruct->bMadeAfterOverridePinRemoval = true;
    MakeDisplayDialogTextStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeDisplayDialogTextStruct, this);

    
    if (!bUseDialogTextPin)
    {
        MakeDisplayDialogTextStruct->FindPin(TEXT("TextToDisplay"))->DefaultTextValue = DialogText;
    }
    else
    {
        CompilerContext.MovePinLinksToIntermediate(*FindPin(TEXT("DialogText")), *MakeDisplayDialogTextStruct->FindPin(TEXT("TextToDisplay")));
    }
    MakeDisplayDialogTextStruct->FindPin(TEXT("CharacterId"))->DefaultValue = CharacterId.ToString();
    MakeDisplayDialogTextStruct->FindPin(TEXT("NodeGUID"))->DefaultValue = DisplayDialogTextFunctionNode->NodeGuid.ToString();
    MakeDisplayDialogTextStruct->FindPin(TEXT("TextJustification"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ETextJustify"), static_cast<uint8>(TextJustification.GetValue()));
    MakeDisplayDialogTextStruct->FindPin(TEXT("CharacterNameAlignment"))->DefaultValue = UEnumUtility::EnumToString(TEXT("EHorizontalAlignment"), static_cast<uint8>(CharacterNameAlignment.GetValue()));
    MakeDisplayDialogTextStruct->FindPin(TEXT("bSkipTypewriting"))->DefaultValue = bSkipTypewriting ? TEXT("true") : TEXT("false");
    MakeDisplayDialogTextStruct->FindPin(TEXT("TypewritingSpeedMultiplier"))->DefaultValue = FString::SanitizeFloat(TypewritingSpeedMultiplier);
    MakeDisplayDialogTextStruct->FindPin(TEXT("DisplayDialogTextData"))->MakeLinkTo(DisplayDialogTextFunctionNode->FindPin(TEXT("DisplayDialogTextData")));

    //Exec pins
    UEdGraphPin* NodeThen = FindPin(UEdGraphSchema_K2::PN_Then);
    UEdGraphPin* DisplayDialogTextFunctionNodeExecPin = DisplayDialogTextFunctionNode->GetExecPin();

    
    if (bUseVoiceOver && !VoiceOverId.IsNone())
    {
        if (DialogAudioPlayCharacterVoiceOverNode)
        {
            DialogAudioPlayCharacterVoiceOverNode->FindPin(UEdGraphSchema_K2::PN_Then)->MakeLinkTo(DisplayDialogTextFunctionNodeExecPin);
        }
        else if (DialogAudioPlayDialogVoiceOverNode)
        {
            DialogAudioPlayDialogVoiceOverNode->FindPin(UEdGraphSchema_K2::PN_Then)->MakeLinkTo(DisplayDialogTextFunctionNodeExecPin);
        }
    }
    else if (!EmotionId.IsNone())
    {
        CharacterShowNode->FindPin(UEdGraphSchema_K2::PN_Then)->MakeLinkTo(DisplayDialogTextFunctionNodeExecPin);
    }
    else
    {
        CompilerContext.MovePinLinksToIntermediate(*NodeExec, *DisplayDialogTextFunctionNodeExecPin);
    }

    UEdGraphPin* InternalThen = DisplayDialogTextFunctionNode->GetThenPin();
    CompilerContext.MovePinLinksToIntermediate(*NodeThen, *InternalThen);

    //After we are done we break all links to this node (not the internally created one)
    BreakAllNodeLinks();
}

#if WITH_EDITOR
bool UDialogTextNode::CanEditChange(const FProperty* InProperty) const
{
    // If other logic prevents editing, we want to respect that
    const bool ParentVal = Super::CanEditChange(InProperty);

    if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UDialogTextNode, VoiceOverId))
    {
        return ParentVal && bUseVoiceOver && (bUseCharacterVoiceOver || bUseDialogVoiceOver);
    }

    if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UDialogTextNode, Volume))
    {
        return ParentVal && !VoiceOverId.IsNone() && bUseVoiceOver;
    }
    
    if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UDialogTextNode, Pitch))
    {
        return ParentVal && !VoiceOverId.IsNone() && bUseVoiceOver;
    }
    
    if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UDialogTextNode, StartTime))
    {
        return ParentVal && !VoiceOverId.IsNone() && bUseVoiceOver;
    }

    return ParentVal;
}
#endif

bool UDialogTextNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("DialogId")
    || PropertyName == TEXT("DialogText")
    || PropertyName == TEXT("CharacterId")
    || PropertyName == TEXT("EmotionId");
}

TArray<FString> UDialogTextNode::GetVoiceOverIds() const
{
    TArray<FString> Ids;
    Ids.Add(TEXT("None"));
    if (bUseCharacterVoiceOver)
    {
        Ids.Append(UVNMSettings::GetVNMSettings()->GetVoiceOverIdsByCharacterIdAsString(CharacterId));
    }
    else if (bUseDialogVoiceOver)
    {
        Ids.Append(UVNMSettings::GetVNMSettings()->GetVoiceOverIdsByDialogIdAsString(DialogId));
    }
    return Ids;
}

TArray<FString> UDialogTextNode::GetCustomCharacterPositions() const
{
    auto CustomCharacterPositionOptions = UVNMSettings::GetVNMSettings()->GetCustomCharacterPositions();

    TArray<FString> StringPositions;

    for (const auto& CustomCharacterPositionOption : CustomCharacterPositionOptions)
    {
        StringPositions.Add(CustomCharacterPositionOption.ToString());
    }

    return StringPositions;
}

#undef LOCTEXT_NAMESPACE
