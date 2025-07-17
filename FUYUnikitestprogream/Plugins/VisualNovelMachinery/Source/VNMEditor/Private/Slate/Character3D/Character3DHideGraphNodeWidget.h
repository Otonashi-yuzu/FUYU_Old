// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "KismetNodes/SGraphNodeK2Base.h"

class SCharacter3DHideGraphNodeWidget : public SGraphNodeK2Base
{
public:

    SLATE_BEGIN_ARGS(SCharacter3DHideGraphNodeWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments&, UK2Node* InNode);
    
    virtual void CreatePinWidgets() override;

protected:
    void OnCharacter3DNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);


    TArray<TSharedPtr<FName>> Character3DIds;
};
