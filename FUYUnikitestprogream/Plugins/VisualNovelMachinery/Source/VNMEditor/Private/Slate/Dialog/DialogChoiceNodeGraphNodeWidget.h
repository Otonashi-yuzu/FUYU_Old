// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "KismetNodes/SGraphNodeK2Base.h"

class SDialogChoiceNodeGraphNodeWidget : public SGraphNodeK2Base
{
public:

    SLATE_BEGIN_ARGS(SDialogChoiceNodeGraphNodeWidget) {}
    SLATE_END_ARGS()

    
    virtual void CreatePinWidgets() override;
};
