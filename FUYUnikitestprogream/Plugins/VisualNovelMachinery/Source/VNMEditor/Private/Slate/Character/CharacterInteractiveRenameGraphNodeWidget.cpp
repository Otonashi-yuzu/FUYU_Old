// Copyright (c) 2022 Al_Fe

#include "CharacterInteractiveRenameGraphNodeWidget.h"


#include "CharacterInteractiveRenameNode.h"
#include "CharacterShowNode.h"
#include "SNameComboBox.h"
#include "VNMEditorSettings.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SCharacterInteractiveRenameGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    
    UpdateGraphNode();
}

void SCharacterInteractiveRenameGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* CharacterInteractiveRenameNode = Cast<UCharacterInteractiveRenameNode>(GraphNode);
    
    auto CharacterIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterIds();

    CharacterIds.Empty();
    CharacterIds.Add(MakeShared<FName>("None"));

    for (auto CharacterId: CharacterIdsNonShared)
    {
        CharacterIds.Add(MakeShared<FName>(CharacterId));
    }

    int32 SelectedCharacterId = 0;

    if (!CharacterIdsNonShared.Find(CharacterInteractiveRenameNode->CharacterId, SelectedCharacterId))
    {
        SelectedCharacterId = 0;
    }
    else
    {
        SelectedCharacterId++;
    }


    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.Character", "Character"))
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
        .OptionsSource(&CharacterIds)
        .InitiallySelectedItem(CharacterIds[SelectedCharacterId])
        .OnSelectionChanged(this, &SCharacterInteractiveRenameGraphNodeWidget::OnCharacterNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}

void SCharacterInteractiveRenameGraphNodeWidget::OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterInteractiveRenameNode = Cast<UCharacterInteractiveRenameNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterInteractiveRenameNodeCharacterIdChanged", "Changed Character Id on Character InteractiveRename Node"), CharacterInteractiveRenameNode);
    CharacterInteractiveRenameNode->Modify();
    CharacterInteractiveRenameNode->CharacterId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterInteractiveRenameNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
