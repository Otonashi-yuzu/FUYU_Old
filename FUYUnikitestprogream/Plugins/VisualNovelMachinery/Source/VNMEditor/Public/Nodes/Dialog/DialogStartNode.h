// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "DialogTextNode.h"
#include "K2Node_Event.h"
#include "DialogStartNode.generated.h"

/**
 * 
 */
UCLASS()
class VNMEDITOR_API UDialogStartNode : public UK2Node_Event
{
	GENERATED_BODY()

public:
    UDialogStartNode();
    
    //~ Begin UEdGraphNode Interface
    virtual void AllocateDefaultPins() override;
    virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
    virtual FText GetTooltipText() const override;
    virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
    virtual bool CanDuplicateNode() const override;
    virtual bool CanUserDeleteNode() const override;
    //~ End UEdGraphNode Interface

    //K2Node implementation
	virtual bool NodeCausesStructuralBlueprintChange() const override { return true; }
	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
    //K2Node implementation

    static FName GetPinFName(UEdGraphPin* pin)
    {
        return pin->GetFName();
    }

protected:
    static void GetAllConnectedDialogNodes(UEdGraphPin* EntryPin, TArray<UK2Node*>& FoundDialogNodes);
    static void GetAllConnectedDialogNodesInternal(UEdGraphPin* EntryPin, TArray<UK2Node*>& FoundDialogNodes, TArray<UEdGraphNode*>& AlreadyProcessedNodes);

private:
    UFUNCTION(meta = (BlueprintInternalUseOnly = "true"))
    void DialogEntryPoint_NotCalled(FName NodeToLoadTo);
};
