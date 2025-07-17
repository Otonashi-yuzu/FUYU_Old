// Copyright (c) 2022 Al_Fe

#include "SceneBackgroundRemoveLayerGraphNodeWidget.h"


#include "SceneBackgroundRemoveLayerNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SSceneBackgroundRemoveLayerGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SSceneBackgroundRemoveLayerGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* SceneBackgroundRemoveLayerNode = Cast<USceneBackgroundRemoveLayerNode>(GraphNode);
    
    auto SceneBackgroundIdsNonShared = UVNMSettings::GetVNMSettings()->GetSceneBackgroundIds();

    SceneBackgroundIds.Empty();
    SceneBackgroundIds.Add(MakeShared<FName>("None"));

    for (auto SceneBackgroundId: SceneBackgroundIdsNonShared)
    {
        SceneBackgroundIds.Add(MakeShared<FName>(SceneBackgroundId));
    }

    int32 SelectedSceneBackgroundId = 0;

    if (!SceneBackgroundIdsNonShared.Find(SceneBackgroundRemoveLayerNode->SceneBackgroundId, SelectedSceneBackgroundId))
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
        .OnSelectionChanged(this, &SSceneBackgroundRemoveLayerGraphNodeWidget::OnSceneBackgroundNameSelectionChanged)
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

    if (!SceneBackgroundLayerIdsNonShared.Find(SceneBackgroundRemoveLayerNode->LayerId, SelectedSceneBackgroundLayerId))
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
        .OnSelectionChanged(this, &SSceneBackgroundRemoveLayerGraphNodeWidget::OnSceneBackgroundLayerSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}


void SSceneBackgroundRemoveLayerGraphNodeWidget::OnSceneBackgroundNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* SceneBackgroundRemoveLayerNode = Cast<USceneBackgroundRemoveLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("SceneBackgroundRemoveLayerNodeSceneBackgroundIdChanged", "Changed Scene Background Id on Scene Background Remove Layer Node"), SceneBackgroundRemoveLayerNode);
    SceneBackgroundRemoveLayerNode->Modify();
    SceneBackgroundRemoveLayerNode->SceneBackgroundId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        SceneBackgroundRemoveLayerNode->LayerId = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(SceneBackgroundRemoveLayerNode->GetBlueprint());

    SceneBackgroundRemoveLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SSceneBackgroundRemoveLayerGraphNodeWidget::OnSceneBackgroundLayerSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* SceneBackgroundRemoveLayerNode = Cast<USceneBackgroundRemoveLayerNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("SceneBackgroundRemoveLayerNodeLayerIdChanged", "Changed Layer Id on Scene Background Remove Layer Node"), SceneBackgroundRemoveLayerNode);
    SceneBackgroundRemoveLayerNode->Modify();
    SceneBackgroundRemoveLayerNode->LayerId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(SceneBackgroundRemoveLayerNode->GetBlueprint());

    SceneBackgroundRemoveLayerNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}


#undef LOCTEXT_NAMESPACE
