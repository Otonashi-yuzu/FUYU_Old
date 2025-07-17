// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "CharacterFlipState.h"
#include "CharacterPositioning.h"
#include "TransitionEvent.h"
#include "VNMBaseNode.h"
#include "VNMControlStructs.h"

#include "CharacterShowNode.generated.h"

/**
 * 
 */
UCLASS()
class VNMEDITOR_API UCharacterShowNode : public UVNMBaseNode
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
	virtual bool ShouldShowNodeProperties() const override;
	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	//K2Node implementation

	virtual bool IsDiffableProperty(const FName& PropertyName) const override;	
	
	UFUNCTION()
	TArray<FString> GetCustomCharacterPositions() const;
	
	UPROPERTY()
	FName CharacterId;

	UPROPERTY()
	FName EmotionId;

	UPROPERTY(EditAnywhere, Category="Layers")
	TArray<FImageLayerInfo> Layers;
	
	UPROPERTY(EditAnywhere, Category="Positioning")
	ECharacterPositioning CharacterPositioning = ECharacterPositioning::CENTER;
	
	UPROPERTY(EditAnywhere, Category="Positioning", meta=(EditCondition="CharacterPositioning==ECharacterPositioning::CUSTOM", EditConditionHides, GetOptions="GetCustomCharacterPositions"))
	FName CustomCharacterPosition;
	
	UPROPERTY(EditAnywhere, Category="Positioning")
	ECharacterFlipState CharacterFlipState = ECharacterFlipState::INHERIT;
	
	UPROPERTY(EditAnywhere, Category="Positioning")
	int32 ZOrderIndex = 0;

	UPROPERTY(EditAnywhere, Category="Animation")
	ETransitionEvent TransitionEvent = ETransitionEvent::No_Transition;
	
	UPROPERTY(EditAnywhere, Category="Animation")
	float AnimationPlaybackMultiplier = 1.f;
	
	UPROPERTY(EditAnywhere, Category="Animation", meta=(EditCondition="TransitionEvent==ETransitionEvent::Custom", EditConditionHides))
	FString CustomTransitionEventName;
	
	UPROPERTY(EditAnywhere, Category="Animation", meta=(EditCondition="TransitionEvent!=ETransitionEvent::No_Transition", EditConditionHides))
	bool bDontWaitForTransitionToFinish = false;
};
