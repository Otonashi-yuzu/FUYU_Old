// Copyright (c) 2022 Al_Fe

#include "CharacterRenameGraphNodeWidget.h"


#include "CharacterRenameNode.h"
#include "CharacterShowNode.h"
#include "SNameComboBox.h"
#include "VNMEditorSettings.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

bool FCharacterNameTextProperty::IsMultiLineText() const
{
    auto* VNMEditorSettings = UVNMEditorSettings::GetVNMEditorSettings();
    return VNMEditorSettings && VNMEditorSettings->DialogTextNodeFieldStyle == EDialogTextNodeFieldStyleType::MULTILINE_TEXT;
}

bool FCharacterNameTextProperty::IsPassword() const
{
    return false;
}

bool FCharacterNameTextProperty::IsReadOnly() const
{
    return false;
}

bool FCharacterNameTextProperty::IsDefaultValue() const
{
    return Node->NewCharacterName.IsEmpty();
}

FText FCharacterNameTextProperty::GetToolTipText() const
{
    return NSLOCTEXT("VNM", "DialogTextNode",  "The text to be displayed in the dialog box");
}

int32 FCharacterNameTextProperty::GetNumTexts() const
{
    return 1;
}

FText FCharacterNameTextProperty::GetText(const int32 InIndex) const
{
    return Node->NewCharacterName;
}

void FCharacterNameTextProperty::SetText(const int32 InIndex, const FText& InText)
{
    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterRenameNodeNewCharacterNameChanged", "Changed new character name on Character Rename Node"), Node);
    Node->Modify();
    Node->NewCharacterName = InText;
    
    UKismetSystemLibrary::EndTransaction();
}

bool FCharacterNameTextProperty::IsValidText(const FText& InText, FText& OutErrorMsg) const
{
    return true;
}

#if USE_STABLE_LOCALIZATION_KEYS
void FCharacterNameTextProperty::GetStableTextId(const int32 InIndex, const ETextPropertyEditAction InEditAction, const FString& InTextSource, const FString& InProposedNamespace, const FString& InProposedKey, FString& OutStableNamespace, FString& OutStableKey) const
{
    StaticStableTextId(Node->GetBlueprint(), InEditAction, InTextSource, InProposedNamespace, InProposedKey, OutStableNamespace, OutStableKey);
}
#endif

#if ENGINE_MAJOR_VERSION < 5  || (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION < 1)
void FCharacterNameTextProperty::RequestRefresh()
{
        
}
#endif

void SCharacterRenameGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;

    
    auto* CharacterRenameNode = Cast<UCharacterRenameNode>(GraphNode);    
    CharacterNameTextProperty = MakeShared<FCharacterNameTextProperty>(CharacterRenameNode);
    
    UpdateGraphNode();
}

void SCharacterRenameGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* CharacterRenameNode = Cast<UCharacterRenameNode>(GraphNode);
    
    auto CharacterIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterIds();

    CharacterIds.Empty();
    CharacterIds.Add(MakeShared<FName>("None"));

    for (auto CharacterId: CharacterIdsNonShared)
    {
        CharacterIds.Add(MakeShared<FName>(CharacterId));
    }

    int32 SelectedCharacterId = 0;

    if (!CharacterIdsNonShared.Find(CharacterRenameNode->CharacterId, SelectedCharacterId))
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
        .OnSelectionChanged(this, &SCharacterRenameGraphNodeWidget::OnCharacterNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    if (CharacterRenameNode->CharacterId.IsNone())
    {
        return;
    }

    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.NewCharacterName", "New Character Name"))
            #if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
            .TextStyle(FAppStyle::Get(), "Graph.Node.PinName")
    #else
            .TextStyle(FEditorStyle::Get(), "Graph.Node.PinName")
    #endif
            .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
        
    auto* VNMEditorSettings = UVNMEditorSettings::GetVNMEditorSettings();
    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 36, 4, 4, 4 })
    [
        SNew(STextPropertyEditableTextBox, CharacterNameTextProperty.ToSharedRef())
        .WrapTextAt(VNMEditorSettings->AutoWrapDialogTextInNodeAt)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}

void SCharacterRenameGraphNodeWidget::OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* CharacterRenameNode = Cast<UCharacterRenameNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterRenameNodeCharacterIdChanged", "Changed Character Id on Character Rename Node"), CharacterRenameNode);
    CharacterRenameNode->Modify();
    CharacterRenameNode->CharacterId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterRenameNode->GetBlueprint());
    CharacterRenameNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
