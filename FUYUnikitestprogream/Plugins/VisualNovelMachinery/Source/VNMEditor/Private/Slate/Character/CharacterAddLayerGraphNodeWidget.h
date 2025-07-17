// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "KismetNodes/SGraphNodeK2Base.h"

class SCharacterAddLayerGraphNodeWidget : public SGraphNodeK2Base
{
public:

    SLATE_BEGIN_ARGS(SCharacterAddLayerGraphNodeWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments&, UK2Node* InNode);
    
    virtual void CreatePinWidgets() override;

protected:
    void OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);
    void OnCharacterLayerSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);
    void OnCharacterLayerImageSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);

    TArray<TSharedPtr<FName>> CharacterIds;
    TArray<TSharedPtr<FName>> CharacterLayerIds;
    TArray<TSharedPtr<FName>> CharacterLayerImageIds;
};
