// Copyright (c) 2022 Al_Fe

#include "Character3DShowGraphNodeWidget.h"


#include "Character3DShowNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SCharacter3DShowGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SCharacter3DShowGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    SetupCharacterWidgets();
    SetupSceneWidgets();
}

void SCharacter3DShowGraphNodeWidget::SetupCharacterWidgets()
{
    auto* Character3DShowNode = Cast<UCharacter3DShowNode>(GraphNode);
    
    auto Character3DIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterIds();

    Character3DIds.Empty();
    Character3DIds.Add(MakeShared<FName>("None"));

    for (auto Character3DId: Character3DIdsNonShared)
    {
        Character3DIds.Add(MakeShared<FName>(Character3DId));
    }

    int32 SelectedCharacter3DId = 0;

    if (!Character3DIdsNonShared.Find(Character3DShowNode->CharacterId, SelectedCharacter3DId))
    {
        SelectedCharacter3DId = 0;
    }
    else
    {
        SelectedCharacter3DId++;
    }


    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.Character3D", "Character"))
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
        .OptionsSource(&Character3DIds)
        .InitiallySelectedItem(Character3DIds[SelectedCharacter3DId])
        .OnSelectionChanged(this, &SCharacter3DShowGraphNodeWidget::OnCharacter3DNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedCharacter3DId == 0)
    {
        return;
    }
    
    const auto Character3DEmotionIdsNonShared =
        UVNMSettings::GetVNMSettings()->GetCharacter3DEmotionsById(Character3DIdsNonShared[SelectedCharacter3DId-1]);

    if (Character3DIdsNonShared.Num() == 0)
    {
        return;
    }

    Character3DEmotionIds.Empty();
    Character3DEmotionIds.Add(MakeShared<FName>("None"));
    for (auto Character3DEmotionId: Character3DEmotionIdsNonShared)
    {
        Character3DEmotionIds.Add(MakeShared<FName>(Character3DEmotionId));
    }

    int32 SelectedCharacter3DEmotionId = 0;

    if (!Character3DEmotionIdsNonShared.Find(Character3DShowNode->EmotionId, SelectedCharacter3DEmotionId))
    {
        SelectedCharacter3DEmotionId = 0;
    }
    else
    {
        SelectedCharacter3DEmotionId++;
    }

    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.Emotion", "Emotion"))
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
        .OptionsSource(&Character3DEmotionIds)
        .InitiallySelectedItem(Character3DEmotionIds[SelectedCharacter3DEmotionId])
        .OnSelectionChanged(this, &SCharacter3DShowGraphNodeWidget::OnCharacter3DEmotionSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}

void SCharacter3DShowGraphNodeWidget::SetupSceneWidgets()
{
    auto* Character3DShowNode = Cast<UCharacter3DShowNode>(GraphNode);
    
    auto DialogSceneIdsNonShared = UVNMSettings::GetVNMSettings()->GetDialogSceneIds();

    DialogSceneIds.Empty();
    DialogSceneIds.Add(MakeShared<FName>("None"));

    for (auto DialogSceneId: DialogSceneIdsNonShared)
    {
        DialogSceneIds.Add(MakeShared<FName>(DialogSceneId));
    }

    int32 SelectedDialogSceneId = 0;

    if (!DialogSceneIdsNonShared.Find(Character3DShowNode->DialogSceneId, SelectedDialogSceneId))
    {
        SelectedDialogSceneId = 0;
    }
    else
    {
        SelectedDialogSceneId++;
    }

    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.DialogScene", "Dialog Scene Id"))
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
        .OptionsSource(&DialogSceneIds)
        .InitiallySelectedItem(DialogSceneIds[SelectedDialogSceneId])
        .OnSelectionChanged(this, &SCharacter3DShowGraphNodeWidget::OnDialogSceneIdSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedDialogSceneId == 0)
    {
        return;
    }

    TArray<FActorIdentifier> DialogSpawnLocationNamesNonShared =
        UVNMSettings::GetVNMSettings()->GetDialogSceneSpawnLocationNamesByDialogSceneId(DialogSceneIdsNonShared[SelectedDialogSceneId - 1]);

    if (DialogSpawnLocationNamesNonShared.Num() == 0)
    {
        return;
    }

    DialogSpawnLocationNames.Empty();
    DialogSpawnLocationNames.Add(MakeShared<FName>("None"));
    for (auto DialogSpawnLocationName: DialogSpawnLocationNamesNonShared)
    {
        DialogSpawnLocationNames.Add(MakeShared<FName>(DialogSpawnLocationName.ActorLabel));
    }

    FActorIdentifier* FoundActorIdentifier = DialogSpawnLocationNamesNonShared.FindByPredicate([Character3DShowNode](FActorIdentifier ActorIdentifier) { return ActorIdentifier.ActorInternalName == Character3DShowNode->SpawnLocation; });
    int32 SelectedSpawnLocationNameIndex = 0;

    if (!FoundActorIdentifier)
    {
        SelectedSpawnLocationNameIndex = 0;
    }
    else
    {
        DialogSpawnLocationNamesNonShared.Find(*FoundActorIdentifier, SelectedSpawnLocationNameIndex);
        SelectedSpawnLocationNameIndex++;
    }
    
    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.CameraName", "Spawn Location Name"))
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
        .OptionsSource(&DialogSpawnLocationNames)
        .InitiallySelectedItem(DialogSpawnLocationNames[SelectedSpawnLocationNameIndex])
        .OnSelectionChanged(this, &SCharacter3DShowGraphNodeWidget::OnLocationNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}


void SCharacter3DShowGraphNodeWidget::OnCharacter3DNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* Character3DShowNode = Cast<UCharacter3DShowNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("Character3DShowNodeCharacterIdChanged", "Changed Character Id on Character 3D Show Node"), Character3DShowNode);
    Character3DShowNode->Modify();
    Character3DShowNode->CharacterId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        Character3DShowNode->EmotionId = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(Character3DShowNode->GetBlueprint());

    Character3DShowNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SCharacter3DShowGraphNodeWidget::OnCharacter3DEmotionSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* Character3DShowNode = Cast<UCharacter3DShowNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("Character3DShowNodeEmotionIdChanged", "Changed Emotion Id on Character 3D Show Node"), Character3DShowNode);
    Character3DShowNode->Modify();
    Character3DShowNode->EmotionId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(Character3DShowNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

void SCharacter3DShowGraphNodeWidget::OnDialogSceneIdSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* Character3DShowNode = Cast<UCharacter3DShowNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("Character3DShowNodeDialogSceneIdChanged", "Changed Dialog Scene Id on Character 3D Show Node"), Character3DShowNode);
    Character3DShowNode->Modify();
    Character3DShowNode->DialogSceneId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        Character3DShowNode->SpawnLocation = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(Character3DShowNode->GetBlueprint());

    Character3DShowNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SCharacter3DShowGraphNodeWidget::OnLocationNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* Character3DShowNode = Cast<UCharacter3DShowNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("Character3DShowNodeDialogSceneIdChanged", "Changed Spawn Location on Character 3D Show Node"), Character3DShowNode);
    Character3DShowNode->Modify();
    Character3DShowNode->SpawnLocation = UVNMSettings::GetVNMSettings()->GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel(Character3DShowNode->DialogSceneId, *Item->ToString());
    FBlueprintEditorUtils::MarkBlueprintAsModified(Character3DShowNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
