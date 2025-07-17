// Copyright (c) 2022 Al_Fe

#include "CharacterAddLayerGraphNodeWidget.h"


#include "CharacterAddLayerNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SCharacterAddLayerGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SCharacterAddLayerGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* CharacterAddLayerNode = Cast<UCharacterAddLayerNode>(GraphNode);
    
    auto CharacterIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterIds();

    CharacterIds.Empty();
    CharacterIds.Add(MakeShared<FName>("None"));

    for (auto CharacterId: CharacterIdsNonShared)
    {
        CharacterIds.Add(MakeShared<FName>(CharacterId));
    }

    int32 SelectedCharacterId = 0;

    if (!CharacterIdsNonShared.Find(CharacterAddLayerNode->CharacterId, SelectedCharacterId))
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
        .OnSelectionChanged(this, &SCharacterAddLayerGraphNodeWidget::OnCharacterNameSelectionChanged)
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

    if (!CharacterLayerIdsNonShared.Find(CharacterAddLayerNode->LayerId, SelectedCharacterLayerId))
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
        .OnSelectionChanged(this, &SCharacterAddLayerGraphNodeWidget::OnCharacterLayerSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedCharacterLayerId == 0)
    {
        return;
    }    

    const auto CharacterImageLayerIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterLayerImagesById(CharacterIdsNonShared[SelectedCharacterId-1], CharacterLayerIdsNonShared[SelectedCharacterLayerId-1]);

    if (CharacterImageLayerIdsNonShared.Num() == 0)
    {
        return;
    }

    CharacterLayerImageIds.Empty();
    CharacterLayerImageIds.Add(MakeShared<FName>("None"));
    for (auto CharacterImageLayerId: CharacterImageLayerIdsNonShared)
    {
        CharacterLayerImageIds.Add(MakeShared<FName>(CharacterImageLayerId));
    }

    int32 SelectedCharacterImageId = 0;

    if (!CharacterImageLayerIdsNonShared.Find(CharacterAddLayerNode->ImageId, SelectedCharacterImageId))
    {
        SelectedCharacterImageId = 0;
    }
    else
    {
        SelectedCharacterImageId++;
    }

    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.ImageId", "Image"))
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
        .OptionsSource(&CharacterLayerImageIds)
        .InitiallySelectedItem(CharacterLayerImageIds[SelectedCharacterImageId])
        .OnSelectionChanged(this, &SCharacterAddLayerGraphNodeWidget::OnCharacterLayerImageSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}


void SCharacterAddLayerGraphNodeWidget::OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterAddLayerNode = Cast<UCharacterAddLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterAddLayerNodeCharacterIdChanged", "Changed Character Id on Character Add Layer Node"), CharacterAddLayerNode);
    CharacterAddLayerNode->Modify();
    CharacterAddLayerNode->CharacterId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        CharacterAddLayerNode->LayerId = "";
        CharacterAddLayerNode->ImageId = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterAddLayerNode->GetBlueprint());

    CharacterAddLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SCharacterAddLayerGraphNodeWidget::OnCharacterLayerSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterAddLayerNode = Cast<UCharacterAddLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterAddLayerNodeLayerIdChanged", "Changed Layer Id on Character Add Layer Node"), CharacterAddLayerNode);
    CharacterAddLayerNode->Modify();
    CharacterAddLayerNode->LayerId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        CharacterAddLayerNode->ImageId = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterAddLayerNode->GetBlueprint());

    CharacterAddLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SCharacterAddLayerGraphNodeWidget::OnCharacterLayerImageSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterAddLayerNode = Cast<UCharacterAddLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterAddLayerNodeImageIdChanged", "Changed Image Id on Character Add Layer Node"), CharacterAddLayerNode);
    CharacterAddLayerNode->Modify();
    CharacterAddLayerNode->ImageId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterAddLayerNode->GetBlueprint());

    CharacterAddLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}


#undef LOCTEXT_NAMESPACE
