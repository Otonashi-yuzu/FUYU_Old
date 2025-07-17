// Copyright (c) 2022 Al_Fe

#include "CharacterMemoryGetGraphNodeWidget.h"


#include "CharacterMemoryGetNode.h"
#include "CharacterShowNode.h"
#include "SNameComboBox.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SCharacterMemoryGetGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SCharacterMemoryGetGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* CharacterMemoryGetNode = Cast<UCharacterMemoryGetNode>(GraphNode);

    if (CharacterMemoryGetNode->bUsePinsForIds)
    {
        return;
    }
    
    auto CharacterIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterIds();

    CharacterIds.Empty();
    CharacterIds.Add(MakeShared<FName>("None"));

    for (auto CharacterId: CharacterIdsNonShared)
    {
        CharacterIds.Add(MakeShared<FName>(CharacterId));
    }

    int32 SelectedCharacterId = 0;

    if (!CharacterIdsNonShared.Find(CharacterMemoryGetNode->CharacterId, SelectedCharacterId))
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
        .OnSelectionChanged(this, &SCharacterMemoryGetGraphNodeWidget::OnCharacterNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedCharacterId == 0)
    {
        return;
    }

    auto CharacterMemoryIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterMemoryIdsByCharacterId(CharacterIdsNonShared[SelectedCharacterId-1]);

    CharacterMemoryIds.Empty();
    CharacterMemoryIds.Add(MakeShared<FName>("None"));

    for (auto CharacterMemoryId: CharacterMemoryIdsNonShared)
    {
        CharacterMemoryIds.Add(MakeShared<FName>(CharacterMemoryId));
    }

    int32 SelectedCharacterMemoryId = 0;

    if (!CharacterMemoryIdsNonShared.Find(CharacterMemoryGetNode->CharacterMemoryValueId, SelectedCharacterMemoryId))
    {
        SelectedCharacterMemoryId = 0;
    }
    else
    {
        SelectedCharacterMemoryId++;
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
        .OptionsSource(&CharacterMemoryIds)
        .InitiallySelectedItem(CharacterMemoryIds[SelectedCharacterMemoryId])
        .OnSelectionChanged(this, &SCharacterMemoryGetGraphNodeWidget::OnCharacterMemorySelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ]; 
}


void SCharacterMemoryGetGraphNodeWidget::OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterMemoryGetNode = Cast<UCharacterMemoryGetNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterMemoryGetNodeCharacterIdChanged", "Changed Character Id on Character Memory Get Node"), CharacterMemoryGetNode);
    CharacterMemoryGetNode->Modify();
    CharacterMemoryGetNode->CharacterId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterMemoryGetNode->GetBlueprint());

    CharacterMemoryGetNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SCharacterMemoryGetGraphNodeWidget::OnCharacterMemorySelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterMemoryGetNode = Cast<UCharacterMemoryGetNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterMemoryGetNodeCharacterMemoryValueIdChanged", "Changed Character Memory Value Id on Character Memory Get Node"), CharacterMemoryGetNode);
    CharacterMemoryGetNode->Modify();
    CharacterMemoryGetNode->CharacterMemoryValueId = *Item;
    
    const FMemoryDefinition CharacterMemoryDefinition =
        UVNMSettings::GetVNMSettings()->GetCharacterMemoryDefinitionById(CharacterMemoryGetNode->CharacterId, CharacterMemoryGetNode->CharacterMemoryValueId);

    CharacterMemoryGetNode->Type = CharacterMemoryDefinition.Type;
    
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterMemoryGetNode->GetBlueprint());

    CharacterMemoryGetNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
