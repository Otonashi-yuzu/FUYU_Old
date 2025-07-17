// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "KismetNodes/SGraphNodeK2Base.h"

class SCharacterMoveGraphNodeWidget : public SGraphNodeK2Base
{
public:

    SLATE_BEGIN_ARGS(SCharacterMoveGraphNodeWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments&, UK2Node* InNode);
    
    virtual void CreatePinWidgets() override;

protected:
    void OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);
    void OnCharacterPositioningSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);
    void OnCustomCharacterPositionSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);

    TArray<TSharedPtr<FName>> CharacterIds;
    TArray<TSharedPtr<FName>> CharacterPositioningOptions;
    TArray<TSharedPtr<FName>> CustomCharacterPositionOptions;
};
