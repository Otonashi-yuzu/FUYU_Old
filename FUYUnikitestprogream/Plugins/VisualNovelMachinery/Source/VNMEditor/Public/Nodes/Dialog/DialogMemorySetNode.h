// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "Nodes/VNMBaseNode.h"
#include "MemoryControllerComponent.h"
#include "DialogMemorySetNode.generated.h"

/**
 * 
 */
UCLASS()
class VNMEDITOR_API UDialogMemorySetNode : public UVNMBaseNode
{
	GENERATED_BODY()

public:

#if WITH_EDITOR
	// UObject interface
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	// End of UObject interface
#endif
	
	//UEdGraphNode implementation
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
	virtual TSharedPtr<SGraphNode> CreateVisualWidget() override;
	//UEdGraphNode implementation

	//K2Node implementation
	virtual bool ShouldShowNodeProperties() const override;
	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	//K2Node implementation
	
	virtual bool IsDiffableProperty(const FName& PropertyName) const override;

	UPROPERTY()
	FName DialogId;
	
	UPROPERTY()
	FName DialogMemoryValueId;

	UPROPERTY()
	EMemoryType Type;

	UPROPERTY(EditAnywhere, Category="Dialog Memory")
	bool bUsePinsForIds;
};
