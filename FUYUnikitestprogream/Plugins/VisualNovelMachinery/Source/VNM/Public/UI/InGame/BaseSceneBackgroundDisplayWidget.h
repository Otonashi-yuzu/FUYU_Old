// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "AdvancedLayeredImage.h"

#include "BaseVNMWidget.h"
#include "VNMSettings.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"

#include "BaseSceneBackgroundDisplayWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UBaseSceneBackgroundDisplayWidget : public UBaseVNMWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;
public:
	void SetSceneBackgroundById(const FName& InSceneBackgroundId, const bool bSetForTransition);

	void SetSceneBackgroundLayerById(const FName& InLayerId, const FName& InImageId);
	
	void RemoveSceneBackgroundLayerById(const FName& InLayerId);

	FName GetSceneBackgroundId() const { return SceneBackgroundId; }

	void ClearSceneBackgroundId() { SceneBackgroundId = ""; }

	void SetSceneBackgroundColorToVisible() const
	{
		SceneBackgroundImage->SetColorAndOpacity(FLinearColor::White);
	}

	TMap<FName, FName> GetSceneBackgroundLayers() const { return SceneBackgroundLayers; }

protected:
	virtual void OnTransitionAnimationFinished() override;

	virtual void OnMidTransitionPointReached() override;
	
	UPROPERTY(BlueprintReadOnly, Category="Scene Background")
	FName SceneBackgroundId;

	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta = (BindWidget))
	UAdvancedLayeredImage* SceneBackgroundImage;

	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta = (BindWidget))
	UAdvancedLayeredImage* SceneBackgroundImageForTransition;

	UPROPERTY()
	TMap<FName, FName> SceneBackgroundLayers; // Layer Id to Image Id

	UPROPERTY(BlueprintReadOnly, Category="Scene Background")
	FDialogImageDefinition SceneBackgroundDefinition;
};
