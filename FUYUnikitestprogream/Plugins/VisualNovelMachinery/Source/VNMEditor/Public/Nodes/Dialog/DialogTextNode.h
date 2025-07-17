// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "CharacterPositioning.h"
#include "TransitionEvent.h"
#include "VNMBaseNode.h"
#include "VNMControlStructs.h"

#include "DialogTextNode.generated.h"

/**
 * 
 */
UCLASS()
class VNMEDITOR_API UDialogTextNode : public UVNMBaseNode
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
	virtual TSharedPtr<SGraphNode> CreateVisualWidget() override;
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
	//UEdGraphNode implementation

	//K2Node implementation
	virtual bool ShouldShowNodeProperties() const override;
	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	//K2Node implementation

#if WITH_EDITOR
	virtual bool CanEditChange(const FProperty* InProperty) const override;
#endif

	virtual bool IsDiffableProperty(const FName& PropertyName) const override;

	
	UFUNCTION()
	TArray<FString> GetVoiceOverIds() const;
	
	UFUNCTION()
	TArray<FString> GetCustomCharacterPositions() const;

	UPROPERTY()
	FName CharacterId;

	UPROPERTY()
	FName DialogId;

	UPROPERTY()
	FText DialogText;
	
	UPROPERTY()
	FName EmotionId;
	
	UPROPERTY(EditAnywhere, Category="Audio")
	bool bUseVoiceOver;
	
	UPROPERTY(EditAnywhere, Category="Audio", meta=(EditCondition="bUseVoiceOver"))
	bool bUseCharacterVoiceOver;
	
	UPROPERTY(EditAnywhere, Category="Audio", meta=(EditCondition="bUseVoiceOver"))
	bool bUseDialogVoiceOver;

	UPROPERTY(EditAnywhere, Category="Audio", meta=(GetOptions="GetVoiceOverIds"))
	FName VoiceOverId;
	
	UPROPERTY(EditAnywhere, Category="Audio", meta=(ClampMin=0.f, UIMin= 0.f))
	float Volume = 1.f;
	
	UPROPERTY(EditAnywhere, Category="Audio", meta=(ClampMin=0.f, UIMin= 0.f))
	float Pitch = 1.f;
	
	UPROPERTY(EditAnywhere, Category="Audio", meta=(ClampMin=0.f, UIMin= 0.f))
	float StartTime = 0.f;
	
	UPROPERTY(EditAnywhere, Category="Dialog Text")
	TEnumAsByte<ETextJustify::Type> TextJustification = ETextJustify::Left;
	
	UPROPERTY(EditAnywhere, Category="Dialog Text")
	TEnumAsByte<EHorizontalAlignment> CharacterNameAlignment = HAlign_Left;

	UPROPERTY(EditAnywhere, Category="Dialog Text")
	bool bSkipTypewriting = false;

	UPROPERTY(EditAnywhere, Category="Dialog Text")
	float TypewritingSpeedMultiplier = 1.f;

	UPROPERTY(EditAnywhere, Category="Character Layers")
	TArray<FImageLayerInfo> Layers;
	
	UPROPERTY(EditAnywhere, Category="Character Animation")
	ECharacterFlipState CharacterFlipState = ECharacterFlipState::INHERIT;
	
	UPROPERTY(EditAnywhere, Category="Character Animation")
	ECharacterPositioning CharacterPositioning = ECharacterPositioning::INHERIT;
	
	UPROPERTY(EditAnywhere, Category="Character Animation", meta=(EditCondition="CharacterPositioning==ECharacterPositioning::CUSTOM", EditConditionHides, GetOptions="GetCustomCharacterPositions"))
	FName CustomCharacterPosition;
	
	UPROPERTY(EditAnywhere, Category="Character Animation")
	int32 ZOrderIndex = 0;

	UPROPERTY(EditAnywhere, Category="Character Animation")
	ETransitionEvent TransitionEvent = ETransitionEvent::No_Transition;
	
	UPROPERTY(EditAnywhere, Category="Character Animation")
	float AnimationPlaybackMultiplier = 1.f;
	
	UPROPERTY(EditAnywhere, Category="Character Animation", meta=(EditCondition="TransitionEvent==ETransitionEvent::Custom", EditConditionHides))
	FString CustomTransitionEventName;
	
	UPROPERTY(EditAnywhere, Category="Character Animation", meta=(EditCondition="TransitionEvent!=ETransitionEvent::No_Transition", EditConditionHides))
	bool bDontWaitForTransitionToFinish = false;

	UPROPERTY(EditAnywhere, Category="Pins")
	bool bUseDialogTextPin;

	
};
