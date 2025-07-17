// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "TransitionEvent.h"
#include "VNMBaseNode.h"
#include "Components/AudioComponent.h"

#include "DialogAudioPlaySoundEffectNode.generated.h"

/**
 * 
 */
UCLASS()
class VNMEDITOR_API UDialogAudioPlaySoundEffectNode : public UVNMBaseNode
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
	
	UPROPERTY()
	FName SoundEffectId;
	
	UPROPERTY(EditAnywhere, Category="Audio", meta=(ClampMin=0.f, UIMin= 0.f))
	float Volume = 1.f;
	
	UPROPERTY(EditAnywhere, Category="Audio", meta=(ClampMin=0.f, UIMin= 0.f))
	float Pitch = 1.f;
	
	UPROPERTY(EditAnywhere, Category="Audio", meta=(ClampMin=0.f, UIMin= 0.f))
	float StartTime = 0.f;
	
	UPROPERTY(EditAnywhere, Category="Audio", meta=(ClampMin=0.f, UIMin= 0.f))
	float FadeInTime = 0.f;
	
	UPROPERTY(EditAnywhere, Category="Audio")
	EAudioFaderCurve AudioFadeCurve = EAudioFaderCurve::Linear;
	
	UPROPERTY(EditAnywhere, Category="Audio")
	bool bWaitForAudioToFinish = false;
};
