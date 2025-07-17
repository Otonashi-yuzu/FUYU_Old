// Copyright (c) 2022 Al_Fe

#include "CharacterRemoveLayerGraphNodeWidget.h"


#include "CharacterRemoveLayerNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SCharacterRemoveLayerGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SCharacterRemoveLayerGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* CharacterRemoveLayerNode = Cast<UCharacterRemoveLayerNode>(GraphNode);
    
    auto CharacterIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterIds();

    CharacterIds.Empty();
    CharacterIds.Add(MakeShared<FName>("None"));

    for (auto CharacterId: CharacterIdsNonShared)
    {
        CharacterIds.Add(MakeShared<FName>(CharacterId));
    }

    int32 SelectedCharacterId = 0;

    if (!CharacterIdsNonShared.Find(CharacterRemoveLayerNode->CharacterId, SelectedCharacterId))
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
        .OnSelectionChanged(this, &SCharacterRemoveLayerGraphNodeWidget::OnCharacterNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedCharacterId == 0)
    {
        return;
    }
    
    const auto CharacterLayerIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterLayersById(CharacterIdsNonShared[SelectedCharacterId-1]);

    if (CharacterLayerIdsNonShared.Num() == 0)
    {
        return;
    }

    CharacterLayerIds.Empty();
    CharacterLayerIds.Add(MakeShared<FName>("None"));
    for (auto CharacterLayerId: CharacterLayerIdsNonShared)
    {
        CharacterLayerIds.Add(MakeShared<FName>(CharacterLayerId));
    }

    int32 SelectedCharacterLayerId = 0;

    if (!CharacterLayerIdsNonShared.Find(CharacterRemoveLayerNode->LayerId, SelectedCharacterLayerId))
    {
        SelectedCharacterLayerId = 0;
    }
    else
    {
        SelectedCharacterLayerId++;
    }

    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.LayerId", "Layer"))
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
        .OptionsSource(&CharacterLayerIds)
        .InitiallySelectedItem(CharacterLayerIds[SelectedCharacterLayerId])
        .OnSelectionChanged(this, &SCharacterRemoveLayerGraphNodeWidget::OnCharacterLayerSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}


void SCharacterRemoveLayerGraphNodeWidget::OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterRemoveLayerNode = Cast<UCharacterRemoveLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterRemoveLayerNodeCharacterIdChanged", "Changed Character Id on Character Remove Layer Node"), CharacterRemoveLayerNode);
    CharacterRemoveLayerNode->Modify();
    CharacterRemoveLayerNode->CharacterId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        CharacterRemoveLayerNode->LayerId = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterRemoveLayerNode->GetBlueprint());

    CharacterRemoveLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SCharacterRemoveLayerGraphNodeWidget::OnCharacterLayerSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterRemoveLayerNode = Cast<UCharacterRemoveLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterRemoveLayerNodeLayerIdChanged", "Changed Layer Id on Character Remove Layer Node"), CharacterRemoveLayerNode);
    CharacterRemoveLayerNode->Modify();
    CharacterRemoveLayerNode->LayerId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterRemoveLayerNode->GetBlueprint());

    CharacterRemoveLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}


#undef LOCTEXT_NAMESPACE
