// Copyright (c) 2022 Al_Fe

#include "CharacterMoveGraphNodeWidget.h"


#include "CharacterMoveNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"

#define LOCTEXT_NAMESPACE "VNM"

void SCharacterMoveGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    for (const auto& CharacterPositioningString: CharacterPositioningTools::GetCharacterPositioningStrings())
    {
        CharacterPositioningOptions.Emplace(MakeShared<FName>(CharacterPositioningString));
    }
    
    UpdateGraphNode();
}

void SCharacterMoveGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* CharacterMoveNode = Cast<UCharacterMoveNode>(GraphNode);
    
    auto CharacterIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterIds();

    CharacterIds.Empty();
    CharacterIds.Add(MakeShared<FName>("None"));

    for (auto CharacterId: CharacterIdsNonShared)
    {
        CharacterIds.Add(MakeShared<FName>(CharacterId));
    }

    int32 SelectedCharacterId = 0;

    if (!CharacterIdsNonShared.Find(CharacterMoveNode->CharacterId, SelectedCharacterId))
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
        .OnSelectionChanged(this, &SCharacterMoveGraphNodeWidget::OnCharacterNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (SelectedCharacterId == 0)
    {
        return;
    }
    
    const auto CharacterEmotionIdsNonShared =
        UVNMSettings::GetVNMSettings()->GetCharacterEmotionsById(CharacterIdsNonShared[SelectedCharacterId-1]);

    if (CharacterIdsNonShared.Num() == 0)
    {
        return;
    }
    
    
    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.CharacterPositioning", "Character Position"))
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
        .OptionsSource(&CharacterPositioningOptions)
        .InitiallySelectedItem(CharacterPositioningOptions[static_cast<uint8>(CharacterMoveNode->CharacterPositioning)])
        .OnSelectionChanged(this, &SCharacterMoveGraphNodeWidget::OnCharacterPositioningSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (CharacterMoveNode->CharacterPositioning != ECharacterPositioning::CUSTOM)
    {
        return;
    }

    auto CustomCharacterPositionOptionsNonShared = UVNMSettings::GetVNMSettings()->GetCustomCharacterPositions();

    CustomCharacterPositionOptions.Empty();
    CustomCharacterPositionOptions.Add(MakeShared<FName>("None"));

    for (auto CustomCharacterPositionOption: CustomCharacterPositionOptionsNonShared)
    {
        CustomCharacterPositionOptions.Add(MakeShared<FName>(CustomCharacterPositionOption));
    }

    int32 SelectedCustomCharacterPositionOption = 0;

    if (!CustomCharacterPositionOptionsNonShared.Find(CharacterMoveNode->CustomCharacterPosition, SelectedCustomCharacterPositionOption))
    {
        SelectedCustomCharacterPositionOption = 0;
    }
    else
    {
        SelectedCustomCharacterPositionOption++;
    }
    
    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.CustomCharacterPosition", "Custom Character Position Name"))
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
        .OptionsSource(&CustomCharacterPositionOptions)
        .InitiallySelectedItem(CustomCharacterPositionOptions[static_cast<uint8>(SelectedCustomCharacterPositionOption)])
        .OnSelectionChanged(this, &SCharacterMoveGraphNodeWidget::OnCharacterPositioningSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}


void SCharacterMoveGraphNodeWidget::OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterMoveNode = Cast<UCharacterMoveNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterMoveNodeCharacterIdChanged", "Changed Character Id on Character Move Node"), CharacterMoveNode);
    CharacterMoveNode->Modify();
    CharacterMoveNode->CharacterId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterMoveNode->GetBlueprint());

    CharacterMoveNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SCharacterMoveGraphNodeWidget::OnCharacterPositioningSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterMoveNode = Cast<UCharacterMoveNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterMoveNodeCharacterPositioningChanged", "Changed Character Positioning on Character Move Node"), CharacterMoveNode);
    CharacterMoveNode->Modify();

    int32 FoundIdx = CharacterPositioningOptions.IndexOfByKey(Item);

    if (FoundIdx != INDEX_NONE)
    {
        CharacterMoveNode->CharacterPositioning = static_cast<ECharacterPositioning>(FoundIdx);
    }
    else
    {
        CharacterMoveNode->CharacterPositioning = ECharacterPositioning::CENTER;
    }
    
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterMoveNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

void SCharacterMoveGraphNodeWidget::OnCustomCharacterPositionSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterMoveNode = Cast<UCharacterMoveNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterMoveNodeCharacterIdChanged", "Changed Custom Character Position on Character Move Node"), CharacterMoveNode);
    CharacterMoveNode->Modify();
    CharacterMoveNode->CustomCharacterPosition = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterMoveNode->GetBlueprint());

    CharacterMoveNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
