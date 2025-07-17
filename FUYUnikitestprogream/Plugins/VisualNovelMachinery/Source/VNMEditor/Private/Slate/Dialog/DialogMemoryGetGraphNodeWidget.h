// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "KismetNodes/SGraphNodeK2Base.h"

class SDialogMemoryGetGraphNodeWidget : public SGraphNodeK2Base
{
public:

    SLATE_BEGIN_ARGS(SDialogMemoryGetGraphNodeWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments&, UK2Node* InNode);
    
    virtual void CreatePinWidgets() override;

protected:
    void OnDialogNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);
    void OnDialogMemorySelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);


    TArray<TSharedPtr<FName>> DialogIds;
    TArray<TSharedPtr<FName>> DialogMemoryIds;
};
