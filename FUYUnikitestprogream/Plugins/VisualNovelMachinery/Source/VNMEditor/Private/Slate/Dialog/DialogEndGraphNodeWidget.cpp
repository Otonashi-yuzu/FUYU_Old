// Copyright (c) 2022 Al_Fe

#include "DialogEndGraphNodeWidget.h"



#include "DialogEndNode.h"
#include "SNameComboBox.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "PropertyCustomizationHelpers.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SDialogEndGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;

    UpdateGraphNode();
}

void SDialogEndGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* DialogEndNode = Cast<UDialogEndNode>(GraphNode);

    auto DialogIdsNonShared = UVNMSettings::GetVNMSettings()->GetDialogIds();

    DialogIds.Empty();
    DialogIds.Add(MakeShared<FName>("None"));

    for (auto DialogId: DialogIdsNonShared)
    {
        DialogIds.Add(MakeShared<FName>(DialogId));
    }

    int32 SelectedDialogId = 0;

    if (!DialogIdsNonShared.Find(DialogEndNode->NextDialogId, SelectedDialogId))
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
            .Text(LOCTEXT("Label.NextDialog", "Next Dialogue"))
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
        .OnSelectionChanged(this, &SDialogEndGraphNodeWidget::OnDialogIdSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}

void SDialogEndGraphNodeWidget::OnDialogIdSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogEndNode = Cast<UDialogEndNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogEndNodeNextDialogIdChanged", "Changed Next Dialog Id on Dialog End Node"), DialogEndNode);
    DialogEndNode->Modify();
    DialogEndNode->NextDialogId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogEndNode->GetBlueprint());

    DialogEndNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
