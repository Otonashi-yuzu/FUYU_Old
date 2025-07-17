// Copyright (c) 2022 Al_Fe

#include "CgShowGraphNodeWidget.h"



#include "CgShowNode.h"
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

void SCgShowGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SCgShowGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* CgShowNode = Cast<UCgShowNode>(GraphNode);
    
    auto CgIdsNonShared = UVNMSettings::GetVNMSettings()->GetCgIds();

    CgIds.Empty();
    CgIds.Add(MakeShared<FName>("None"));

    for (auto CgId: CgIdsNonShared)
    {
        CgIds.Add(MakeShared<FName>(CgId));
    }

    int32 SelectedCgId = 0;

    if (!CgIdsNonShared.Find(CgShowNode->CgId, SelectedCgId))
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
            .Text(LOCTEXT("Label.CG", "CG Id"))
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
        .OnSelectionChanged(this, &SCgShowGraphNodeWidget::OnCgIdSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}

void SCgShowGraphNodeWidget::OnCgIdSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CgShowNode = Cast<UCgShowNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CgShowNodeCgIdChanged", "Changed Cg Id on Cg Set Node"), CgShowNode);
    CgShowNode->Modify();
    CgShowNode->CgId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(CgShowNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
