// Copyright (c) 2022 Al_Fe

#include "CgAddLayerGraphNodeWidget.h"


#include "CgAddLayerNode.h"
#include "SNameComboBox.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SCgAddLayerGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SCgAddLayerGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* CgAddLayerNode = Cast<UCgAddLayerNode>(GraphNode);
    
    auto CgIdsNonShared = UVNMSettings::GetVNMSettings()->GetCgIds();

    CgIds.Empty();
    CgIds.Add(MakeShared<FName>("None"));

    for (auto CgId: CgIdsNonShared)
    {
        CgIds.Add(MakeShared<FName>(CgId));
    }

    int32 SelectedCgId = 0;

    if (!CgIdsNonShared.Find(CgAddLayerNode->CgId, SelectedCgId))
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
        .OnSelectionChanged(this, &SCgAddLayerGraphNodeWidget::OnCgNameSelectionChanged)
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

    if (!CgLayerIdsNonShared.Find(CgAddLayerNode->LayerId, SelectedCgLayerId))
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
        .OnSelectionChanged(this, &SCgAddLayerGraphNodeWidget::OnCgLayerSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedCgLayerId == 0)
    {
        return;
    }    

    const auto CgImageLayerIdsNonShared = UVNMSettings::GetVNMSettings()->GetCgLayerImagesById(CgIdsNonShared[SelectedCgId-1], CgLayerIdsNonShared[SelectedCgLayerId-1]);

    if (CgImageLayerIdsNonShared.Num() == 0)
    {
        return;
    }

    CgLayerImageIds.Empty();
    CgLayerImageIds.Add(MakeShared<FName>("None"));
    for (auto CgImageLayerId: CgImageLayerIdsNonShared)
    {
        CgLayerImageIds.Add(MakeShared<FName>(CgImageLayerId));
    }

    int32 SelectedCgImageId = 0;

    if (!CgImageLayerIdsNonShared.Find(CgAddLayerNode->ImageId, SelectedCgImageId))
    {
        SelectedCgImageId = 0;
    }
    else
    {
        SelectedCgImageId++;
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
        .OptionsSource(&CgLayerImageIds)
        .InitiallySelectedItem(CgLayerImageIds[SelectedCgImageId])
        .OnSelectionChanged(this, &SCgAddLayerGraphNodeWidget::OnCgLayerImageSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}


void SCgAddLayerGraphNodeWidget::OnCgNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CgAddLayerNode = Cast<UCgAddLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CgAddLayerNodeCgIdChanged", "Changed Cg Id on Cg Add Layer Node"), CgAddLayerNode);
    CgAddLayerNode->Modify();
    CgAddLayerNode->CgId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        CgAddLayerNode->LayerId = "";
        CgAddLayerNode->ImageId = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(CgAddLayerNode->GetBlueprint());

    CgAddLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SCgAddLayerGraphNodeWidget::OnCgLayerSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CgAddLayerNode = Cast<UCgAddLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CgAddLayerNodeLayerIdChanged", "Changed Layer Id on Cg Add Layer Node"), CgAddLayerNode);
    CgAddLayerNode->Modify();
    CgAddLayerNode->LayerId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        CgAddLayerNode->ImageId = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(CgAddLayerNode->GetBlueprint());

    CgAddLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SCgAddLayerGraphNodeWidget::OnCgLayerImageSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CgAddLayerNode = Cast<UCgAddLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CgAddLayerNodeImageIdChanged", "Changed Layer Id on Cg Add Layer Node"), CgAddLayerNode);
    CgAddLayerNode->Modify();
    CgAddLayerNode->ImageId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(CgAddLayerNode->GetBlueprint());

    CgAddLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}


#undef LOCTEXT_NAMESPACE
