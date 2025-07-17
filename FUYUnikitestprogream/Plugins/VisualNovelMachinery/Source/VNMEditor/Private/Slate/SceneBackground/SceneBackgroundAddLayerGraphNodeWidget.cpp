// Copyright (c) 2022 Al_Fe

#include "SceneBackgroundAddLayerGraphNodeWidget.h"


#include "SceneBackgroundAddLayerNode.h"
#include "SNameComboBox.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SSceneBackgroundAddLayerGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SSceneBackgroundAddLayerGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* SceneBackgroundAddLayerNode = Cast<USceneBackgroundAddLayerNode>(GraphNode);
    
    auto SceneBackgroundIdsNonShared = UVNMSettings::GetVNMSettings()->GetSceneBackgroundIds();

    SceneBackgroundIds.Empty();
    SceneBackgroundIds.Add(MakeShared<FName>("None"));

    for (auto SceneBackgroundId: SceneBackgroundIdsNonShared)
    {
        SceneBackgroundIds.Add(MakeShared<FName>(SceneBackgroundId));
    }

    int32 SelectedSceneBackgroundId = 0;

    if (!SceneBackgroundIdsNonShared.Find(SceneBackgroundAddLayerNode->SceneBackgroundId, SelectedSceneBackgroundId))
    {
        SelectedSceneBackgroundId = 0;
    }
    else
    {
        SelectedSceneBackgroundId++;
    }


    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.SceneBackground", "SceneBackground"))
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
        .OptionsSource(&SceneBackgroundIds)
        .InitiallySelectedItem(SceneBackgroundIds[SelectedSceneBackgroundId])
        .OnSelectionChanged(this, &SSceneBackgroundAddLayerGraphNodeWidget::OnSceneBackgroundNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedSceneBackgroundId == 0)
    {
        return;
    }
    
    const auto SceneBackgroundLayerIdsNonShared = UVNMSettings::GetVNMSettings()->GetSceneBackgroundLayersById(SceneBackgroundIdsNonShared[SelectedSceneBackgroundId-1]);

    if (SceneBackgroundLayerIdsNonShared.Num() == 0)
    {
        return;
    }

    SceneBackgroundLayerIds.Empty();
    SceneBackgroundLayerIds.Add(MakeShared<FName>("None"));
    for (auto SceneBackgroundLayerId: SceneBackgroundLayerIdsNonShared)
    {
        SceneBackgroundLayerIds.Add(MakeShared<FName>(SceneBackgroundLayerId));
    }

    int32 SelectedSceneBackgroundLayerId = 0;

    if (!SceneBackgroundLayerIdsNonShared.Find(SceneBackgroundAddLayerNode->LayerId, SelectedSceneBackgroundLayerId))
    {
        SelectedSceneBackgroundLayerId = 0;
    }
    else
    {
        SelectedSceneBackgroundLayerId++;
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
        .OptionsSource(&SceneBackgroundLayerIds)
        .InitiallySelectedItem(SceneBackgroundLayerIds[SelectedSceneBackgroundLayerId])
        .OnSelectionChanged(this, &SSceneBackgroundAddLayerGraphNodeWidget::OnSceneBackgroundLayerSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedSceneBackgroundLayerId == 0)
    {
        return;
    }    

    const auto SceneBackgroundImageLayerIdsNonShared = UVNMSettings::GetVNMSettings()->GetSceneBackgroundLayerImagesById(SceneBackgroundIdsNonShared[SelectedSceneBackgroundId-1], SceneBackgroundLayerIdsNonShared[SelectedSceneBackgroundLayerId-1]);

    if (SceneBackgroundImageLayerIdsNonShared.Num() == 0)
    {
        return;
    }

    SceneBackgroundLayerImageIds.Empty();
    SceneBackgroundLayerImageIds.Add(MakeShared<FName>("None"));
    for (auto SceneBackgroundImageLayerId: SceneBackgroundImageLayerIdsNonShared)
    {
        SceneBackgroundLayerImageIds.Add(MakeShared<FName>(SceneBackgroundImageLayerId));
    }

    int32 SelectedSceneBackgroundImageId = 0;

    if (!SceneBackgroundImageLayerIdsNonShared.Find(SceneBackgroundAddLayerNode->ImageId, SelectedSceneBackgroundImageId))
    {
        SelectedSceneBackgroundImageId = 0;
    }
    else
    {
        SelectedSceneBackgroundImageId++;
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
        .OptionsSource(&SceneBackgroundLayerImageIds)
        .InitiallySelectedItem(SceneBackgroundLayerImageIds[SelectedSceneBackgroundImageId])
        .OnSelectionChanged(this, &SSceneBackgroundAddLayerGraphNodeWidget::OnSceneBackgroundLayerImageSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}


void SSceneBackgroundAddLayerGraphNodeWidget::OnSceneBackgroundNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* SceneBackgroundAddLayerNode = Cast<USceneBackgroundAddLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("SceneBackgroundAddLayerNodeSceneBackgroundIdChanged", "Changed Scene Background Id on Scene Background Add Layer Node"), SceneBackgroundAddLayerNode);
    SceneBackgroundAddLayerNode->Modify();
    SceneBackgroundAddLayerNode->SceneBackgroundId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        SceneBackgroundAddLayerNode->LayerId = "";
        SceneBackgroundAddLayerNode->ImageId = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(SceneBackgroundAddLayerNode->GetBlueprint());

    SceneBackgroundAddLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SSceneBackgroundAddLayerGraphNodeWidget::OnSceneBackgroundLayerSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* SceneBackgroundAddLayerNode = Cast<USceneBackgroundAddLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("SceneBackgroundAddLayerNodeLayerIdChanged", "Changed Layer Id on Scene Background Add Layer Node"), SceneBackgroundAddLayerNode);
    SceneBackgroundAddLayerNode->Modify();
    SceneBackgroundAddLayerNode->LayerId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        SceneBackgroundAddLayerNode->ImageId = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(SceneBackgroundAddLayerNode->GetBlueprint());

    SceneBackgroundAddLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SSceneBackgroundAddLayerGraphNodeWidget::OnSceneBackgroundLayerImageSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* SceneBackgroundAddLayerNode = Cast<USceneBackgroundAddLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("SceneBackgroundAddLayerNodeImageIdChanged", "Changed Image Id on Scene Background Add Layer Node"), SceneBackgroundAddLayerNode);
    SceneBackgroundAddLayerNode->Modify();
    SceneBackgroundAddLayerNode->ImageId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(SceneBackgroundAddLayerNode->GetBlueprint());

    SceneBackgroundAddLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}


#undef LOCTEXT_NAMESPACE
