// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "KismetNodes/SGraphNodeK2Base.h"

class SCgHideGraphNodeWidget : public SGraphNodeK2Base
{
public:

    SLATE_BEGIN_ARGS(SCgHideGraphNodeWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments&, UK2Node* InNode);
    
    virtual void CreatePinWidgets() override;
};
