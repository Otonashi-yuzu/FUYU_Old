// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "KismetNodes/SGraphNodeK2Base.h"

class SCharacter3DShowGraphNodeWidget : public SGraphNodeK2Base
{
public:

    SLATE_BEGIN_ARGS(SCharacter3DShowGraphNodeWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments&, UK2Node* InNode);
    
    virtual void CreatePinWidgets() override;

protected:
    void SetupCharacterWidgets();
    void SetupSceneWidgets();
    
    void OnCharacter3DNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);
    void OnCharacter3DEmotionSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);
    void OnDialogSceneIdSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);
    void OnLocationNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type);

    TArray<TSharedPtr<FName>> Character3DIds;
    TArray<TSharedPtr<FName>> Character3DEmotionIds;

    TArray<TSharedPtr<FName>> DialogSceneIds;
    TArray<TSharedPtr<FName>> DialogSpawnLocationNames;
};
