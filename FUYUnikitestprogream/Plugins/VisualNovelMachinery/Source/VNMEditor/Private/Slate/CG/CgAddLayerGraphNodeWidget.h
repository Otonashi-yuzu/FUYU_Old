// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "KismetNodes/SGraphNodeK2Base.h"

class SCgAddLayerGraphNodeWidget : public SGraphNodeK2Base
{
public:

    SLATE_BEGIN_ARGS(SCgAddLayerGraphNodeWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments&, UK2Node* InNode);
    
    virtual void CreatePinWidgets() override;

protected:
    void OnCgNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);
    void OnCgLayerSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);
    void OnCgLayerImageSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);

    TArray<TSharedPtr<FName>> CgIds;
    TArray<TSharedPtr<FName>> CgLayerIds;
    TArray<TSharedPtr<FName>> CgLayerImageIds;
};
