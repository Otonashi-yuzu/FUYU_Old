// Copyright (c) 2022 Al_Fe

#include "DialogAudioPlayCharacterVoiceOverGraphNodeWidget.h"



#include "CharacterShowNode.h"
#include "DialogAudioPlayCharacterVoiceOverNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "TransitionEvent.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SDialogAudioPlayCharacterVoiceOverGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SDialogAudioPlayCharacterVoiceOverGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* DialogAudioPlayVoiceOverNode = Cast<UDialogAudioPlayCharacterVoiceOverNode>(GraphNode);

    auto CharacterIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterIds();

    CharacterIds.Empty();
    CharacterIds.Add(MakeShared<FName>("None"));

    for (auto CharacterId: CharacterIdsNonShared)
    {
        CharacterIds.Add(MakeShared<FName>(CharacterId));
    }

    int32 SelectedCharacterId = 0;

    if (!CharacterIdsNonShared.Find(DialogAudioPlayVoiceOverNode->CharacterId, SelectedCharacterId))
    {
        SelectedCharacterId = 0;
    }
    else
    {
        SelectedCharacterId++;
    }


    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.Character", "Character"))
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
        .OptionsSource(&CharacterIds)
        .InitiallySelectedItem(CharacterIds[SelectedCharacterId])
        .OnSelectionChanged(this, &SDialogAudioPlayCharacterVoiceOverGraphNodeWidget::OnCharacterNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedCharacterId == 0)
    {
        return;
    }
    
    auto VoiceOverIdsNonShared = UVNMSettings::GetVNMSettings()->GetVoiceOverIdsByCharacterId(DialogAudioPlayVoiceOverNode->CharacterId);

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
        .OnSelectionChanged(this, &SDialogAudioPlayCharacterVoiceOverGraphNodeWidget::OnVoiceOverIdSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}

void SDialogAudioPlayCharacterVoiceOverGraphNodeWidget::OnVoiceOverIdSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogAudioPlayVoiceOverNode = Cast<UDialogAudioPlayCharacterVoiceOverNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogAudioPlayCharacterVoiceOverNodeVoiceOverIdChanged", "Changed Voice Over Id on Dialog Audio Play Character Voice Over Node"), DialogAudioPlayVoiceOverNode);
    DialogAudioPlayVoiceOverNode->Modify();
    DialogAudioPlayVoiceOverNode->VoiceOverId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogAudioPlayVoiceOverNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

void SDialogAudioPlayCharacterVoiceOverGraphNodeWidget::OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogAudioPlayVoiceOverNode = Cast<UDialogAudioPlayCharacterVoiceOverNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogAudioPlayCharacterVoiceOverNodeCharacterIdChanged", "Changed Character Id on Dialog Audio Play Character Voice Over Node"), DialogAudioPlayVoiceOverNode);
    DialogAudioPlayVoiceOverNode->Modify();
    DialogAudioPlayVoiceOverNode->CharacterId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        DialogAudioPlayVoiceOverNode->VoiceOverId = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogAudioPlayVoiceOverNode->GetBlueprint());

    DialogAudioPlayVoiceOverNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
