// Copyright (c) 2022 Al_Fe

#include "DialogMemoryGetGraphNodeWidget.h"


#include "DialogMemoryGetNode.h"
#include "SNameComboBox.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SDialogMemoryGetGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SDialogMemoryGetGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* DialogMemoryGetNode = Cast<UDialogMemoryGetNode>(GraphNode);

    if (DialogMemoryGetNode->bUsePinsForIds)
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

    if (!DialogIdsNonShared.Find(DialogMemoryGetNode->DialogId, SelectedDialogId))
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
        .OnSelectionChanged(this, &SDialogMemoryGetGraphNodeWidget::OnDialogNameSelectionChanged)
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

    if (!DialogMemoryIdsNonShared.Find(DialogMemoryGetNode->DialogMemoryValueId, SelectedDialogMemoryId))
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
        .OnSelectionChanged(this, &SDialogMemoryGetGraphNodeWidget::OnDialogMemorySelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ]; 
}


void SDialogMemoryGetGraphNodeWidget::OnDialogNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogMemoryGetNode = Cast<UDialogMemoryGetNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogMemoryGetNodeDialogIdChanged", "Changed Dialog Id on Dialog Memory Get Node"), DialogMemoryGetNode);
    DialogMemoryGetNode->Modify();
    DialogMemoryGetNode->DialogId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogMemoryGetNode->GetBlueprint());

    DialogMemoryGetNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SDialogMemoryGetGraphNodeWidget::OnDialogMemorySelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogMemoryGetNode = Cast<UDialogMemoryGetNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogMemoryGetNodeDialogMemoryValueIdChanged", "Changed Dialog Memory Value Id on Dialog Memory Get Node"), DialogMemoryGetNode);
    DialogMemoryGetNode->Modify();
    DialogMemoryGetNode->DialogMemoryValueId = *Item;
    
    const FMemoryDefinition DialogMemoryDefinition =
        UVNMSettings::GetVNMSettings()->GetDialogMemoryDefinitionById(DialogMemoryGetNode->DialogId, DialogMemoryGetNode->DialogMemoryValueId);

    DialogMemoryGetNode->Type = DialogMemoryDefinition.Type;
    
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogMemoryGetNode->GetBlueprint());

    DialogMemoryGetNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
