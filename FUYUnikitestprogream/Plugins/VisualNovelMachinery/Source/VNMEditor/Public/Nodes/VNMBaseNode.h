// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "VNMBaseNode.generated.h"

/**
 * 
 */
UCLASS()
class VNMEDITOR_API UVNMBaseNode : public UK2Node
{
	GENERATED_BODY()

public:
    //K2Node implementation
    virtual FText GetMenuCategory() const override;
    virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
    //K2Node implementation

	//EdGraphNode implementation
	virtual void DiffProperties(UStruct* StructA, UStruct* StructB, uint8* DataA, uint8* DataB, FDiffResults& Results, FDiffSingleResult& Diff) const override;
	//EdGraphNode implementation

	virtual bool IsDiffableProperty(const FName& PropertyName) const;
	

    static FName GetPinFName(UEdGraphPin* pin)
    {
        return pin->GetFName();
    }
};
