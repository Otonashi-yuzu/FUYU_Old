// Copyright (c) 2022 Al_Fe

#include "CharacterShowGraphNodeWidget.h"


#include "CharacterShowNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SCharacterShowGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SCharacterShowGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* CharacterShowNode = Cast<UCharacterShowNode>(GraphNode);
    
    auto CharacterIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterIds();

    CharacterIds.Empty();
    CharacterIds.Add(MakeShared<FName>("None"));

    for (auto CharacterId: CharacterIdsNonShared)
    {
        CharacterIds.Add(MakeShared<FName>(CharacterId));
    }

    int32 SelectedCharacterId = 0;

    if (!CharacterIdsNonShared.Find(CharacterShowNode->CharacterId, SelectedCharacterId))
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
        .OnSelectionChanged(this, &SCharacterShowGraphNodeWidget::OnCharacterNameSelectionChanged)
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

    CharacterEmotionIds.Empty();
    CharacterEmotionIds.Add(MakeShared<FName>("None"));
    for (auto CharacterEmotionId: CharacterEmotionIdsNonShared)
    {
        CharacterEmotionIds.Add(MakeShared<FName>(CharacterEmotionId));
    }

    int32 SelectedCharacterEmotionId = 0;

    if (!CharacterEmotionIdsNonShared.Find(CharacterShowNode->EmotionId, SelectedCharacterEmotionId))
    {
        SelectedCharacterEmotionId = 0;
    }
    else
    {
        SelectedCharacterEmotionId++;
    }

    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.Emotion", "Emotion"))
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
        .OptionsSource(&CharacterEmotionIds)
        .InitiallySelectedItem(CharacterEmotionIds[SelectedCharacterEmotionId])
        .OnSelectionChanged(this, &SCharacterShowGraphNodeWidget::OnCharacterEmotionSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}


void SCharacterShowGraphNodeWidget::OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterShowNode = Cast<UCharacterShowNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterShowCharacterIdChanged", "Changed Character Id on Character Show Node"), CharacterShowNode);
    CharacterShowNode->Modify();
    CharacterShowNode->CharacterId = *Item;
    if (Item->IsNone() || *Item == "None")
    {
        CharacterShowNode->EmotionId = "";
    }
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterShowNode->GetBlueprint());

    CharacterShowNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SCharacterShowGraphNodeWidget::OnCharacterEmotionSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterShowNode = Cast<UCharacterShowNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterShowEmotionIdChanged", "Changed Emotion Id on Character Show Node"), CharacterShowNode);
    CharacterShowNode->Modify();
    CharacterShowNode->EmotionId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterShowNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
