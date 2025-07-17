// Copyright (c) 2022 Al_Fe

#include "DialogAudioPlayBGMGraphNodeWidget.h"



#include "DialogAudioPlayBGMNode.h"
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

void SDialogAudioPlayBGMGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SDialogAudioPlayBGMGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* DialogAudioPlayBGMNode = Cast<UDialogAudioPlayBGMNode>(GraphNode);
    
    auto BackgroundMusicIdsNonShared = UVNMSettings::GetVNMSettings()->GetBackgroundMusicIds();

    BackgroundMusicIds.Empty();
    BackgroundMusicIds.Add(MakeShared<FName>("None"));

    for (auto CgId: BackgroundMusicIdsNonShared)
    {
        BackgroundMusicIds.Add(MakeShared<FName>(CgId));
    }

    int32 SelectedBackgroundMusicId = 0;

    if (!BackgroundMusicIdsNonShared.Find(DialogAudioPlayBGMNode->BackgroundMusicId, SelectedBackgroundMusicId))
    {
        SelectedBackgroundMusicId = 0;
    }
    else
    {
        SelectedBackgroundMusicId++;
    }


    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.BackgroundMusicId", "Background Music Id"))
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
        .OptionsSource(&BackgroundMusicIds)
        .InitiallySelectedItem(BackgroundMusicIds[SelectedBackgroundMusicId])
        .OnSelectionChanged(this, &SDialogAudioPlayBGMGraphNodeWidget::OnBackgroundMusicIdSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}

void SDialogAudioPlayBGMGraphNodeWidget::OnBackgroundMusicIdSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogAudioPlayBGMNode = Cast<UDialogAudioPlayBGMNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogAudioPlayBGMNodeBackgroundMusicIdChanged", "Changed Background Music Id on Dialog Audio Play Background Music Node"), DialogAudioPlayBGMNode);
    DialogAudioPlayBGMNode->Modify();
    DialogAudioPlayBGMNode->BackgroundMusicId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogAudioPlayBGMNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
