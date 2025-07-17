// Copyright (c) 2022 Al_Fe

#include "DialogAudioPlaySoundEffectGraphNodeWidget.h"



#include "DialogAudioPlaySoundEffectNode.h"
#include "CharacterShowNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "TransitionEvent.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SDialogAudioPlaySoundEffectGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SDialogAudioPlaySoundEffectGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* DialogAudioPlaySoundEffectNode = Cast<UDialogAudioPlaySoundEffectNode>(GraphNode);
    
    auto SoundEffectIdsNonShared = UVNMSettings::GetVNMSettings()->GetSoundEffectIds();

    SoundEffectIds.Empty();
    SoundEffectIds.Add(MakeShared<FName>("None"));

    for (auto CgId: SoundEffectIdsNonShared)
    {
        SoundEffectIds.Add(MakeShared<FName>(CgId));
    }

    int32 SelectedSoundEffectId = 0;

    if (!SoundEffectIdsNonShared.Find(DialogAudioPlaySoundEffectNode->SoundEffectId, SelectedSoundEffectId))
    {
        SelectedSoundEffectId = 0;
    }
    else
    {
        SelectedSoundEffectId++;
    }


    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.SoundEffectId", "Sound Effect Id"))
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
        .OptionsSource(&SoundEffectIds)
        .InitiallySelectedItem(SoundEffectIds[SelectedSoundEffectId])
        .OnSelectionChanged(this, &SDialogAudioPlaySoundEffectGraphNodeWidget::OnSoundEffectIdSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}

void SDialogAudioPlaySoundEffectGraphNodeWidget::OnSoundEffectIdSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogAudioPlaySoundEffectNode = Cast<UDialogAudioPlaySoundEffectNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogAudioPlaySoundEffectNodeSoundEffectIdChanged", "Changed Sound Effect Id on Dialog Audio Play Sound Effect Node"), DialogAudioPlaySoundEffectNode);
    DialogAudioPlaySoundEffectNode->Modify();
    DialogAudioPlaySoundEffectNode->SoundEffectId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogAudioPlaySoundEffectNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
