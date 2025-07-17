// Copyright (c) 2022 Al_Fe
#pragma once

#include "CoreMinimal.h"
#include "KismetNodes/SGraphNodeK2Base.h"

class SDialogSceneSwitchCameraGraphNodeWidget : public SGraphNodeK2Base
{
public:

    SLATE_BEGIN_ARGS(SDialogSceneSwitchCameraGraphNodeWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments&, UK2Node* InNode);
    
    virtual void CreatePinWidgets() override;

protected:
    void OnDialogSceneIdSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);
    void OnCameraNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);

    TArray<TSharedPtr<FName>> DialogSceneIds;
    TArray<TSharedPtr<FName>> CameraNames;
};
