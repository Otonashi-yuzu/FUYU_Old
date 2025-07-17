// Copyright (c) 2022 Al_Fe
#include "DialogSceneHideGraphNodeWidget.h"



#include "DialogSceneHideNode.h"
#include "SNameComboBox.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SDialogSceneHideGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SDialogSceneHideGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    return;

    auto* DialogSceneHideNode = Cast<UDialogSceneHideNode>(GraphNode);
    
    auto DialogSceneIdsNonShared = UVNMSettings::GetVNMSettings()->GetDialogSceneIds();

    DialogSceneIds.Empty();
    DialogSceneIds.Add(MakeShared<FName>("None"));

    for (auto DialogSceneId: DialogSceneIdsNonShared)
    {
        DialogSceneIds.Add(MakeShared<FName>(DialogSceneId));
    }

    int32 SelectedDialogSceneId = 0;

    if (!DialogSceneIdsNonShared.Find(DialogSceneHideNode->DialogSceneId, SelectedDialogSceneId))
    {
        SelectedDialogSceneId = 0;
    }
    else
    {
        SelectedDialogSceneId++;
    }


    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.DialogScene", "Dialog Scene Id"))
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
        .OptionsSource(&DialogSceneIds)
        .InitiallySelectedItem(DialogSceneIds[SelectedDialogSceneId])
        .OnSelectionChanged(this, &SDialogSceneHideGraphNodeWidget::OnDialogSceneIdSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}


void SDialogSceneHideGraphNodeWidget::OnDialogSceneIdSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogSceneHideNode = Cast<UDialogSceneHideNode>(GraphNode);

    DialogSceneHideNode->Modify();
    DialogSceneHideNode->DialogSceneId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogSceneHideNode->GetBlueprint());
}

#undef LOCTEXT_NAMESPACE
