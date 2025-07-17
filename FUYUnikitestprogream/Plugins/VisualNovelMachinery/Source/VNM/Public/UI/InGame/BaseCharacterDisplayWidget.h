// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "BaseVNMWidget.h"
#include "CharacterPositioning.h"
#include "VNMSettings.h"
#include "AdvancedLayeredImage/Public/AdvancedLayeredImage.h"
#include "Blueprint/UserWidget.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"

#include "BaseCharacterDisplayWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UBaseCharacterDisplayWidget : public UBaseVNMWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;
public:
	
	virtual void SetCharacterImageByCharacterIdAndEmotionId(const FName& InCharacterId, const FName& InEmotionId);
	
	virtual void SetCharacterImageByCharacterIdAndEmotionIdAndLayers(const FName& InCharacterId, const FName& InEmotionId, const TArray<FImageLayerInfo>& Layers);

	void SetCharacterLayerById(const FName& InLayerId, const FName& InImageId);
	
	void RemoveCharacterLayerById(const FName& InLayerId);

	virtual void SetCharacterPosition(ECharacterPositioning InCharacterPositioning, const bool bMoveWithAnimation, int32 UUID = 0);
	virtual void SetCustomCharacterPosition(const FName& InCharacterPositionName, const bool bMoveWithAnimation, int32 UUID = 0);

	virtual void SetCharacterFlipState(const ECharacterFlipState InCharacterFlipState);

	void HideCharacter();

	void ShowCharacter();

	FName GetCharacterId() const { return CharacterId; }

	FName GetEmotionId() const { return EmotionId; }

	int32 GetZOrderIndex() const;

	ECharacterPositioning GetCharacterPositioning() const { return CharacterPositioning; }
	
	FName GetCustomCharacterPosition() const { return CustomCharacterPosition; }
	
	ECharacterFlipState GetCharacterFlipState() const { return CharacterFlipState; }

	TMap<FName, FName> GetCharacterLayers() const { return CharacterLayers; }

	virtual void TickCharacterMove(const float Alpha, const FVector2D& StartPosition, const FVector2D& TargetPosition);

	void StopPendingMoveAction();

protected:

	UPROPERTY(BlueprintReadOnly, Category=Character)
	FName CharacterId;

	UPROPERTY(BlueprintReadOnly, Category=Character)
	FName EmotionId;

	UPROPERTY(BlueprintReadOnly, Category=Animation)
	ECharacterPositioning CharacterPositioning = ECharacterPositioning::CENTER;

	UPROPERTY(BlueprintReadOnly, Category=Animation)
	FName CustomCharacterPosition;

	UPROPERTY(BlueprintReadOnly, Category=Animation)
	ECharacterFlipState CharacterFlipState = ECharacterFlipState::INHERIT;

	UPROPERTY()
	float InitialAnchorPosition;

	UPROPERTY()
	TMap<FName, FName> CharacterLayers; // Layer Id to Image Id
	
	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta=(BindWidget))
	UAdvancedLayeredImage* CharacterImage;

	UPROPERTY(BlueprintReadOnly, Category=Character)
	FCharacterDefinition CharacterDefinition;
};
