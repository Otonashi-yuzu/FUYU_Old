// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "VNMBaseNode.h"
#include "DialogObject.h"

#include "DialogEndNode.generated.h"

/**
 * 
 */
UCLASS()
class VNMEDITOR_API UDialogEndNode : public UVNMBaseNode
{
	GENERATED_BODY()

public:	
    //UEdGraphNode implementation
    virtual void AllocateDefaultPins() override;
    virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
    virtual FText GetTooltipText() const override;
    virtual FLinearColor GetNodeTitleColor() const override;
	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
	virtual TSharedPtr<SGraphNode> CreateVisualWidget() override;
    //UEdGraphNode implementation

    //K2Node implementation
    virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
    virtual bool DrawNodeAsExit() const override { return true; }
    //K2Node implementation

	virtual bool IsDiffableProperty(const FName& PropertyName) const override;

	UPROPERTY()
	FName NextDialogId;
};
