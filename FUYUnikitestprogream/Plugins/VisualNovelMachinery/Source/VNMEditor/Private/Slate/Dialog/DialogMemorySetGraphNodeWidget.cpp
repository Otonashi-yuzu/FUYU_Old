// Copyright (c) 2022 Al_Fe

#include "DialogMemorySetGraphNodeWidget.h"


#include "DialogMemorySetNode.h"
#include "SNameComboBox.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SDialogMemorySetGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SDialogMemorySetGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* DialogMemorySetNode = Cast<UDialogMemorySetNode>(GraphNode);

    if (DialogMemorySetNode->bUsePinsForIds)
    {
        return;
    }
    
    auto DialogIdsNonShared = UVNMSettings::GetVNMSettings()->GetDialogIds();

    DialogIds.Empty();
    DialogIds.Add(MakeShared<FName>("None"));

    for (auto DialogId: DialogIdsNonShared)
    {
        DialogIds.Add(MakeShared<FName>(DialogId));
    }

    int32 SelectedDialogId = 0;

    if (!DialogIdsNonShared.Find(DialogMemorySetNode->DialogId, SelectedDialogId))
    {
        SelectedDialogId = 0;
    }
    else
    {
        SelectedDialogId++;
    }

    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.Dialog", "Dialog"))
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
        .OptionsSource(&DialogIds)
        .InitiallySelectedItem(DialogIds[SelectedDialogId])
        .OnSelectionChanged(this, &SDialogMemorySetGraphNodeWidget::OnDialogNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedDialogId == 0)
    {
        return;
    }

    auto DialogMemoryIdsNonShared = UVNMSettings::GetVNMSettings()->GetDialogMemoryIdsByDialogId(DialogIdsNonShared[SelectedDialogId-1]);

    DialogMemoryIds.Empty();
    DialogMemoryIds.Add(MakeShared<FName>("None"));

    for (auto DialogMemoryId: DialogMemoryIdsNonShared)
    {
        DialogMemoryIds.Add(MakeShared<FName>(DialogMemoryId));
    }

    int32 SelectedDialogMemoryId = 0;

    if (!DialogMemoryIdsNonShared.Find(DialogMemorySetNode->DialogMemoryValueId, SelectedDialogMemoryId))
    {
        SelectedDialogMemoryId = 0;
    }
    else
    {
        SelectedDialogMemoryId++;
    }

    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.MemoryId", "Memory"))
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
        .OptionsSource(&DialogMemoryIds)
        .InitiallySelectedItem(DialogMemoryIds[SelectedDialogMemoryId])
        .OnSelectionChanged(this, &SDialogMemorySetGraphNodeWidget::OnDialogMemorySelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ]; 
}


void SDialogMemorySetGraphNodeWidget::OnDialogNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogMemorySetNode = Cast<UDialogMemorySetNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogMemorySetNodeDialogIdChanged", "Changed Dialog Id on Dialog Memory Set Node"), DialogMemorySetNode);
    DialogMemorySetNode->Modify();
    DialogMemorySetNode->DialogId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogMemorySetNode->GetBlueprint());

    DialogMemorySetNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SDialogMemorySetGraphNodeWidget::OnDialogMemorySelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogMemorySetNode = Cast<UDialogMemorySetNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogMemorySetNodeDialogMemoryValueIdChanged", "Changed Dialog Memory Value Id on Dialog Memory Set Node"), DialogMemorySetNode);
    DialogMemorySetNode->Modify();
    DialogMemorySetNode->DialogMemoryValueId = *Item;
    
    const FMemoryDefinition DialogMemoryDefinition =
        UVNMSettings::GetVNMSettings()->GetDialogMemoryDefinitionById(DialogMemorySetNode->DialogId, DialogMemorySetNode->DialogMemoryValueId);

    DialogMemorySetNode->Type = DialogMemoryDefinition.Type;
    
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogMemorySetNode->GetBlueprint());

    DialogMemorySetNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
