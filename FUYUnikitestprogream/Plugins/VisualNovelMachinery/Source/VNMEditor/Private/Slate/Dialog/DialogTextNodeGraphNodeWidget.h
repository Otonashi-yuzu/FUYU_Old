// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "DialogTextNode.h"
#include "STextPropertyEditableTextBox.h"
#include "VNMEditorSettings.h"
#include "KismetNodes/SGraphNodeK2Base.h"

class UDialogTextNode;

/** Allows STextPropertyEditableTextBox to edit the dialog text */
class FDialogBoxTextProperty : public IEditableTextProperty
{
public:
    FDialogBoxTextProperty(UDialogTextNode* InNode)
        : Node(InNode)
    {}
    
    virtual bool IsMultiLineText() const override;

    virtual bool IsPassword() const override;

    virtual bool IsReadOnly() const override;

    virtual bool IsDefaultValue() const override;

    virtual FText GetToolTipText() const override;

    virtual int32 GetNumTexts() const override;

    virtual FText GetText(const int32 InIndex) const override;

    virtual void SetText(const int32 InIndex, const FText& InText) override;

    virtual bool IsValidText(const FText& InText, FText& OutErrorMsg) const override;

#if USE_STABLE_LOCALIZATION_KEYS
    virtual void GetStableTextId(const int32 InIndex, const ETextPropertyEditAction InEditAction, const FString& InTextSource, const FString& InProposedNamespace, const FString& InProposedKey, FString& OutStableNamespace, FString& OutStableKey) const override;


#endif
#if ENGINE_MAJOR_VERSION < 5  || (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION < 1)
    virtual void RequestRefresh() override;
#endif

private:
    UDialogTextNode* Node;
};

class SDialogTextNodeGraphNodeWidget : public SGraphNodeK2Base
{
public:

    SLATE_BEGIN_ARGS(SDialogTextNodeGraphNodeWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments&, UK2Node* InNode);
    
    virtual void CreatePinWidgets() override;

protected:
    void SetupCharacterWidgets();
    void SetupTextWidget();
    
    void OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);

    void OnDialogTextChanged(const FText& DialogText);
    
    void OnCharacterEmotionSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);

    TArray<TSharedPtr<FName>> CharacterIds;
    TArray<TSharedPtr<FName>> CharacterEmotionIds;
    TSharedPtr<FDialogBoxTextProperty> DialogBoxTextProperty;
};


