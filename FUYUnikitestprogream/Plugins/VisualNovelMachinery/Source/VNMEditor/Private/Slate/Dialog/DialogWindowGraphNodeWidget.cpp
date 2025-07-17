// Copyright (c) 2022 Al_Fe

#include "DialogWindowGraphNodeWidget.h"

#include "CharacterShowNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "DialogWindowNode.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SDialogWindowGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    VisibilityComboOptions.Emplace(MakeShared<FName>("show"));
    VisibilityComboOptions.Emplace(MakeShared<FName>("hide"));

    AutoComboOptions.Emplace(MakeShared<FName>("auto"));
    AutoComboOptions.Emplace(MakeShared<FName>("manual"));
    
    UpdateGraphNode();
}

void SDialogWindowGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* DialogWindowNode = Cast<UDialogWindowNode>(GraphNode);

    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.Visiblity", "Visibility"))
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
        .OptionsSource(&VisibilityComboOptions)
        .InitiallySelectedItem(VisibilityComboOptions[DialogWindowNode->bShouldHide])
        .OnSelectionChanged(this, &SDialogWindowGraphNodeWidget::OnVisibilitySelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
    
    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.Mode", "Mode"))
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
        .OptionsSource(&AutoComboOptions)
        .InitiallySelectedItem(AutoComboOptions[!DialogWindowNode->bSetToAutomatic])
        .OnSelectionChanged(this, &SDialogWindowGraphNodeWidget::OnAutoSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ]; 
}

void SDialogWindowGraphNodeWidget::OnVisibilitySelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogWindowNode = Cast<UDialogWindowNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogWindowNodeShouldHideChanged", "Changed Should Hide Flag on Dialog End Node"), DialogWindowNode);
    DialogWindowNode->Modify();
    if (*Item == "show")
    {
        DialogWindowNode->bShouldHide = false;
    }
    else if (*Item == "hide")
    {
        DialogWindowNode->bShouldHide = true;
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogWindowNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

void SDialogWindowGraphNodeWidget::OnAutoSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* DialogWindowNode = Cast<UDialogWindowNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogWindowNodeSetToAutomaticChanged", "Changed Set to Automatic Flag on Dialog End Node"), DialogWindowNode);
    DialogWindowNode->Modify();

    if (*Item == "manual")
    {
        DialogWindowNode->bSetToAutomatic = false;
    }
    else if (*Item == "auto")
    {
        DialogWindowNode->bSetToAutomatic = true;
    }
    
    FBlueprintEditorUtils::MarkBlueprintAsModified(DialogWindowNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
