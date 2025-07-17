// Copyright (c) 2022 Al_Fe

#include "SceneBackgroundShowGraphNodeWidget.h"



#include "SceneBackgroundShowNode.h"
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

void SSceneBackgroundShowGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SSceneBackgroundShowGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* SceneBackgroundShowNode = Cast<USceneBackgroundShowNode>(GraphNode);
    
    auto SceneBackgroundIdsNonShared = UVNMSettings::GetVNMSettings()->GetSceneBackgroundIds();

    SceneBackgroundIds.Empty();
    SceneBackgroundIds.Add(MakeShared<FName>("None"));

    for (auto SceneBackgroundId: SceneBackgroundIdsNonShared)
    {
        SceneBackgroundIds.Add(MakeShared<FName>(SceneBackgroundId));
    }

    int32 SelectedSceneBackgroundId = 0;

    if (!SceneBackgroundIdsNonShared.Find(SceneBackgroundShowNode->SceneBackgroundId, SelectedSceneBackgroundId))
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
            .Text(LOCTEXT("Label.SceneBackground", "Scene Background Id"))
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
        .OnSelectionChanged(this, &SSceneBackgroundShowGraphNodeWidget::OnSceneBackgroundIdSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}


void SSceneBackgroundShowGraphNodeWidget::OnSceneBackgroundIdSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* SceneBackgroundShowNode = Cast<USceneBackgroundShowNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("SceneBackgroundShowNodeSceneBackgroundIdChanged", "Changed Scene Background Id on Scene Background Set Node"), SceneBackgroundShowNode);
    SceneBackgroundShowNode->Modify();
    SceneBackgroundShowNode->SceneBackgroundId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(SceneBackgroundShowNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
