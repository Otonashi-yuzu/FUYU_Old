// Copyright (c) 2022 Al_Fe

#include "CgRemoveLayerGraphNodeWidget.h"


#include "CgRemoveLayerNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SCgRemoveLayerGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SCgRemoveLayerGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* CgRemoveLayerNode = Cast<UCgRemoveLayerNode>(GraphNode);
    
    auto CgIdsNonShared = UVNMSettings::GetVNMSettings()->GetCgIds();

    CgIds.Empty();
    CgIds.Add(MakeShared<FName>("None"));

    for (auto CgId: CgIdsNonShared)
    {
        CgIds.Add(MakeShared<FName>(CgId));
    }

    int32 SelectedCgId = 0;

    if (!CgIdsNonShared.Find(CgRemoveLayerNode->CgId, SelectedCgId))
    {
        SelectedCgId = 0;
    }
    else
    {
        SelectedCgId++;
    }


    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.Cg", "Cg"))
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
        .OptionsSource(&CgIds)
        .InitiallySelectedItem(CgIds[SelectedCgId])
        .OnSelectionChanged(this, &SCgRemoveLayerGraphNodeWidget::OnCgNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedCgId == 0)
    {
        return;
    }
    
    const auto CgLayerIdsNonShared = UVNMSettings::GetVNMSettings()->GetCgLayersById(CgIdsNonShared[SelectedCgId-1]);

    if (CgLayerIdsNonShared.Num() == 0)
    {
        return;
    }

    CgLayerIds.Empty();
    CgLayerIds.Add(MakeShared<FName>("None"));
    for (auto CgLayerId: CgLayerIdsNonShared)
    {
        CgLayerIds.Add(MakeShared<FName>(CgLayerId));
    }

    int32 SelectedCgLayerId = 0;

    if (!CgLayerIdsNonShared.Find(CgRemoveLayerNode->LayerId, SelectedCgLayerId))
    {
        SelectedCgLayerId = 0;
    }
    else
    {
        SelectedCgLayerId++;
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
        .OptionsSource(&CgLayerIds)
        .InitiallySelectedItem(CgLayerIds[SelectedCgLayerId])
        .OnSelectionChanged(this, &SCgRemoveLayerGraphNodeWidget::OnCgLayerSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}


void SCgRemoveLayerGraphNodeWidget::OnCgNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CgRemoveLayerNode = Cast<UCgRemoveLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CgRemoveLayerNodeCgIdChanged", "Changed Cg Id on Cg Remove Layer Node"), CgRemoveLayerNode);
    CgRemoveLayerNode->Modify();
    CgRemoveLayerNode->CgId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        CgRemoveLayerNode->LayerId = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(CgRemoveLayerNode->GetBlueprint());

    CgRemoveLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SCgRemoveLayerGraphNodeWidget::OnCgLayerSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CgRemoveLayerNode = Cast<UCgRemoveLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CgRemoveLayerNodeLayerIdChanged", "Changed Layer Id on Cg Remove Layer Node"), CgRemoveLayerNode);
    CgRemoveLayerNode->Modify();
    CgRemoveLayerNode->LayerId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(CgRemoveLayerNode->GetBlueprint());

    CgRemoveLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}


#undef LOCTEXT_NAMESPACE
