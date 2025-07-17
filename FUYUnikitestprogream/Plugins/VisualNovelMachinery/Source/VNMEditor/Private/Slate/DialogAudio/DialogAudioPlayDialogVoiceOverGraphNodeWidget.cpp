// Copyright (c) 2022 Al_Fe

#include "DialogAudioPlayDialogVoiceOverGraphNodeWidget.h"

#include "DialogAudioPlayDialogVoiceOverNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "TransitionEvent.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SDialogAudioPlayDialogVoiceOverGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;    

    auto* DialogAudioPlayVoiceOverNode = Cast<UDialogAudioPlayDialogVoiceOverNode>(GraphNode);    
    DialogAudioPlayVoiceOverNode->DialogId = UVNMSettings::GetVNMSettings()->GetDialogDefinitionByClass(DialogAudioPlayVoiceOverNode->GetBlueprint()->GeneratedClass.Get()).DialogueId;
    
    UpdateGraphNode();
}

void SDialogAudioPlayDialogVoiceOverGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* DialogAudioPlayVoiceOverNode = Cast<UDialogAudioPlayDialogVoiceOverNode>(GraphNode);    
    
    auto VoiceOverIdsNonShared = UVNMSettings::GetVNMSettings()->GetVoiceOverIdsByDialogId(DialogAudioPlayVoiceOverNode->DialogId);

    VoiceOverIds.Empty();
    VoiceOverIds.Add(MakeShared<FName>("None"));

    for (auto CgId: VoiceOverIdsNonShared)
    {
        VoiceOverIds.Add(MakeShared<FName>(CgId));
    }

    int32 SelectedVoiceOverId = 0;

    if (!VoiceOverIdsNonShared.Find(DialogAudioPlayVoiceOverNode->VoiceOverId, SelectedVoiceOverId))
    {
        SelectedVoiceOverId = 0;
    }
    else
    {
        SelectedVoiceOverId++;
    }


    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.VoiceOverId", "Voice Over Id"))
            #if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
            .TextStyle(FAppStyle::Get(), "Graph.Node.PinName")
#else
            .TextStyle(FEditorStyle::Get(), "Graph.Node.PinName")
#endif
            .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    LeftNodeBox->AddSlot()
        .AutoHeight()
        .Padding(FMargin { 36, 4, 4, 4 })
    [
        SNew(SNameComboBox)
        .ContentPadding(FMargin { 6.0f, 2.0f })
        .OptionsSource(&VoiceOverIds)
        .InitiallySelectedItem(VoiceOverIds[SelectedVoiceOverId])
        .OnSelectionChanged(this, &SDialogAudioPlayDialogVoiceOverGraphNodeWidget::OnVoiceOverIdSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}

void SDialogAudioPlayDialogVoiceOverGraphNodeWidget::OnVoiceOverIdSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogAudioPlayVoiceOverNode = Cast<UDialogAudioPlayDialogVoiceOverNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogAudioPlayDialogVoiceOverNodeVoiceOverIdChanged", "Changed Voice Over Id on Dialog Audio Play Dialog Voice Over Node"), DialogAudioPlayVoiceOverNode);
    DialogAudioPlayVoiceOverNode->Modify();
    DialogAudioPlayVoiceOverNode->VoiceOverId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogAudioPlayVoiceOverNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
