// Copyright (c) 2022 Al_Fe

#include "DialogTextNodeGraphNodeWidget.h"

#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "STextPropertyEditableTextBox.h"
#include "VNMEditorSettings.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Widgets/Text/SMultiLineEditableText.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

bool FDialogBoxTextProperty::IsMultiLineText() const
{
    auto* VNMEditorSettings = UVNMEditorSettings::GetVNMEditorSettings();
    return VNMEditorSettings && VNMEditorSettings->DialogTextNodeFieldStyle == EDialogTextNodeFieldStyleType::MULTILINE_TEXT;
}

bool FDialogBoxTextProperty::IsPassword() const
{
    return false;
}

bool FDialogBoxTextProperty::IsReadOnly() const
{
    return false;
}

bool FDialogBoxTextProperty::IsDefaultValue() const
{
    return Node->DialogText.IsEmpty();
}

FText FDialogBoxTextProperty::GetToolTipText() const
{
    return NSLOCTEXT("VNM", "DialogTextNode",  "The text to be displayed in the dialog box");
}

int32 FDialogBoxTextProperty::GetNumTexts() const
{
    return 1;
}

FText FDialogBoxTextProperty::GetText(const int32 InIndex) const
{
    return Node->DialogText;
}

void FDialogBoxTextProperty::SetText(const int32 InIndex, const FText& InText)
{
    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogTextNodeDialogTextChanged", "Changed Dialog Text on Dialog Text Node"), Node);
    Node->Modify();
    Node->DialogText = InText;
    
    UKismetSystemLibrary::EndTransaction();
}

bool FDialogBoxTextProperty::IsValidText(const FText& InText, FText& OutErrorMsg) const
{
    return true;
}

#if USE_STABLE_LOCALIZATION_KEYS
void FDialogBoxTextProperty::GetStableTextId(const int32 InIndex, const ETextPropertyEditAction InEditAction, const FString& InTextSource, const FString& InProposedNamespace, const FString& InProposedKey, FString& OutStableNamespace, FString& OutStableKey) const
{
    StaticStableTextId(Node->GetBlueprint(), InEditAction, InTextSource, InProposedNamespace, InProposedKey, OutStableNamespace, OutStableKey);
}
#endif

#if ENGINE_MAJOR_VERSION < 5  || (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION < 1)
void FDialogBoxTextProperty::RequestRefresh()
{
        
}
#endif

void SDialogTextNodeGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    auto* TextNode = Cast<UDialogTextNode>(GraphNode);    
    TextNode->DialogId = UVNMSettings::GetVNMSettings()->GetDialogDefinitionByClass(TextNode->GetBlueprint()->GeneratedClass.Get()).DialogueId;
    
    DialogBoxTextProperty = MakeShared<FDialogBoxTextProperty>(TextNode);
    
    UpdateGraphNode();
}

void SDialogTextNodeGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    SetupCharacterWidgets();
    SetupTextWidget();
}

void SDialogTextNodeGraphNodeWidget::SetupCharacterWidgets()
{
    auto* TextNode = Cast<UDialogTextNode>(GraphNode);
    
    auto CharacterIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterIds();    

    CharacterIds.Empty();
    CharacterIds.Add(MakeShared<FName>("None"));

    for (auto CharacterId: CharacterIdsNonShared)
    {
        CharacterIds.Add(MakeShared<FName>(CharacterId));
    }

    int32 SelectedCharacterId = 0;

    if (!CharacterIdsNonShared.Find(TextNode->CharacterId, SelectedCharacterId))
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
        .OnSelectionChanged(this, &SDialogTextNodeGraphNodeWidget::OnCharacterNameSelectionChanged)
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

    if (!CharacterEmotionIdsNonShared.Find(TextNode->EmotionId, SelectedCharacterEmotionId))
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
        .OnSelectionChanged(this, &SDialogTextNodeGraphNodeWidget::OnCharacterEmotionSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];   
}

void SDialogTextNodeGraphNodeWidget::SetupTextWidget()
{
    auto* TextNode = Cast<UDialogTextNode>(GraphNode);
    
    if (!TextNode->bUseDialogTextPin)
    {
        LeftNodeBox->AddSlot()
        .AutoHeight()
        .Padding(FMargin { 32, 4, 4, 4})
        [
            SNew(STextBlock)
                .Text(LOCTEXT("Label.Text", "Text"))
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
            SNew(STextPropertyEditableTextBox, DialogBoxTextProperty.ToSharedRef())
            .WrapTextAt(VNMEditorSettings->AutoWrapDialogTextInNodeAt)
            .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
        ];
    }
}


void SDialogTextNodeGraphNodeWidget::OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* TextNode = Cast<UDialogTextNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogTextNodeCharacterIdChanged", "Changed Character Id on Dialog Text Node"), TextNode);

    TextNode->Modify();
    TextNode->CharacterId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(TextNode->GetBlueprint());
    
    TextNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

void SDialogTextNodeGraphNodeWidget::OnDialogTextChanged(const FText& DialogText)
{
    auto* TextNode = Cast<UDialogTextNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogTextNodeDialogTextChanged", "Changed Dialog Text on Dialog Text Node"), TextNode);
    TextNode->Modify();
    TextNode->DialogText = DialogText;
    FBlueprintEditorUtils::MarkBlueprintAsModified(TextNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

void SDialogTextNodeGraphNodeWidget::OnCharacterEmotionSelectionChanged(TSharedPtr<FName> Item,
    ESelectInfo::Type)
{
    auto* TextNode = Cast<UDialogTextNode>(GraphNode);
    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("DialogTextNodeEmotionIdChanged", "Changed Emotion Id on Dialog Text Node"), TextNode);

    TextNode->Modify();
    TextNode->EmotionId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(TextNode->GetBlueprint());

    TextNode->ReconstructNode();
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
