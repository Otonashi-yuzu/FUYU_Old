// Copyright (c) 2022 Al_Fe
#include "DialogSceneSwitchCameraGraphNodeWidget.h"



#include "DialogSceneSwitchCameraNode.h"
#include "SNameComboBox.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SDialogSceneSwitchCameraGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SDialogSceneSwitchCameraGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* DialogSceneSwitchCameraNode = Cast<UDialogSceneSwitchCameraNode>(GraphNode);
    
    auto DialogSceneIdsNonShared = UVNMSettings::GetVNMSettings()->GetDialogSceneIds();

    DialogSceneIds.Empty();
    DialogSceneIds.Add(MakeShared<FName>("None"));

    for (auto DialogSceneId: DialogSceneIdsNonShared)
    {
        DialogSceneIds.Add(MakeShared<FName>(DialogSceneId));
    }

    int32 SelectedDialogSceneId = 0;

    if (!DialogSceneIdsNonShared.Find(DialogSceneSwitchCameraNode->DialogSceneId, SelectedDialogSceneId))
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
        .OnSelectionChanged(this, &SDialogSceneSwitchCameraGraphNodeWidget::OnDialogSceneIdSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedDialogSceneId == 0)
    {
        return;
    }

    TArray<FActorIdentifier> CameraNamesNonShared =
        UVNMSettings::GetVNMSettings()->GetDialogSceneCameraNamesByDialogSceneId(DialogSceneIdsNonShared[SelectedDialogSceneId - 1]);

    if (CameraNamesNonShared.Num() == 0)
    {
        return;
    }

    CameraNames.Empty();
    CameraNames.Add(MakeShared<FName>("None"));
    for (auto CameraName: CameraNamesNonShared)
    {
        CameraNames.Add(MakeShared<FName>(CameraName.ActorLabel));
    }

    FActorIdentifier* FoundCameraActorIdentifier = CameraNamesNonShared.FindByPredicate([DialogSceneSwitchCameraNode](FActorIdentifier ActorIdentifier) { return ActorIdentifier.ActorInternalName == DialogSceneSwitchCameraNode->CameraName; });
    int32 SelectedCameraNameIndex = 0;

    if (!FoundCameraActorIdentifier)
    {
        SelectedCameraNameIndex = 0;
    }
    else
    {
        CameraNamesNonShared.Find(*FoundCameraActorIdentifier, SelectedCameraNameIndex);
        SelectedCameraNameIndex++;
    }
    
    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.CameraName", "Camera Name"))
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
        .OptionsSource(&CameraNames)
        .InitiallySelectedItem(CameraNames[SelectedCameraNameIndex])
        .OnSelectionChanged(this, &SDialogSceneSwitchCameraGraphNodeWidget::OnCameraNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}


void SDialogSceneSwitchCameraGraphNodeWidget::OnDialogSceneIdSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogSceneSwitchCameraNode = Cast<UDialogSceneSwitchCameraNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogSceneSwitchCameraNodeDialogSceneIdChanged", "Changed Dialog Scene Id on Dialog Scene Switch Camera Node"), DialogSceneSwitchCameraNode);
    DialogSceneSwitchCameraNode->Modify();
    DialogSceneSwitchCameraNode->DialogSceneId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogSceneSwitchCameraNode->GetBlueprint());

    DialogSceneSwitchCameraNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SDialogSceneSwitchCameraGraphNodeWidget::OnCameraNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogSceneSwitchCameraNode = Cast<UDialogSceneSwitchCameraNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogSceneSwitchCameraNodeCameraNameChanged", "Changed Camera Name on Dialog Scene Switch Camera Node"), DialogSceneSwitchCameraNode);
    DialogSceneSwitchCameraNode->Modify();
    DialogSceneSwitchCameraNode->CameraName = UVNMSettings::GetVNMSettings()->GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel(DialogSceneSwitchCameraNode->DialogSceneId, *Item->ToString());
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogSceneSwitchCameraNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
    
}

#undef LOCTEXT_NAMESPACE
