// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "VNMBaseNode.h"

#include "DialogChoiceNode.generated.h"

class UBaseImageChoiceWidget;
/**
 * 
 */
UCLASS()
class VNMEDITOR_API UDialogChoiceNode : public UVNMBaseNode
{
	GENERATED_BODY()
public:
	
	// UObject interface
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	// End of UObject interface
	
	//UEdGraphNode implementation
    virtual void AllocateDefaultPins() override;
    virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
    //UEdGraphNode implementation

    //K2Node implementation
    virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual bool ShouldShowNodeProperties() const override;
	virtual void PostReconstructNode() override;
	virtual void ReconstructNode() override;
	virtual void ReallocatePinsDuringReconstruction(TArray<UEdGraphPin*>& OldPins) override;
protected:
	virtual ERedirectType DoPinsMatchForReconstruction(const UEdGraphPin* NewPin, int32 NewPinIndex,
        const UEdGraphPin* OldPin, int32 OldPinIndex) const override;
    //K2Node implementation

private:
	TArray<UEdGraphPin*> GetInputPins(TArray<UEdGraphPin*>& InPins, bool bIncludeInExec);
	TArray<UEdGraphPin*> GetOutputPins(TArray<UEdGraphPin*>& InPins);

public:
	UPROPERTY(EditAnywhere, Category="Choices")
	TArray<FText> Choices;
	
	UPROPERTY(EditAnywhere, Category="Choices")
	bool bMakeChoiceConditional;

	UPROPERTY(EditAnywhere, Category="Choices")
	bool bIsImageChoice;

	UPROPERTY(EditAnywhere, Category="Choices", meta=(EditCondition="bIsImageChoice", EditConditionHide))
	TSubclassOf<UBaseImageChoiceWidget> ImageChoiceWidgetClass;

	UPROPERTY(EditAnywhere, Category="Choices")
	bool bIs3DChoice;

protected:
	UPROPERTY()
	int32 IndexOfChoiceRenamed;
};
