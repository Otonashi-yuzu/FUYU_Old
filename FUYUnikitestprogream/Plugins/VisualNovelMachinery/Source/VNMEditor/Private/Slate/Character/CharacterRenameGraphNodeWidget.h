// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "STextPropertyEditableTextBox.h"
#include "KismetNodes/SGraphNodeK2Base.h"

class UCharacterRenameNode;

/** Allows STextPropertyEditableTextBox to edit the dialog text */
class FCharacterNameTextProperty : public IEditableTextProperty
{
public:
    FCharacterNameTextProperty(UCharacterRenameNode* InNode)
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
    UCharacterRenameNode* Node;
};

class SCharacterRenameGraphNodeWidget : public SGraphNodeK2Base
{
public:

    SLATE_BEGIN_ARGS(SCharacterRenameGraphNodeWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments&, UK2Node* InNode);
    
    virtual void CreatePinWidgets() override;

protected:
    void OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);


    TArray<TSharedPtr<FName>> CharacterIds;
    TSharedPtr<FCharacterNameTextProperty> CharacterNameTextProperty;
};
