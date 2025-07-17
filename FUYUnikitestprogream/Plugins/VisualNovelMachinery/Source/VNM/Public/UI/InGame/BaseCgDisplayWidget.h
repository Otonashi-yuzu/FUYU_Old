// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "AdvancedLayeredImage.h"

#include "BaseVNMWidget.h"
#include "VNMSettings.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"

#include "BaseCgDisplayWidget.generated.h"


/**
 * 
 */
UCLASS(Abstract)
class VNM_API UBaseCgDisplayWidget : public UBaseVNMWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;
	
public:
	void SetCgById(const FName& InCgId, const bool bSetForTransition);

	void SetCgLayerById(const FName& InLayerId, const FName& InImageId);
	
	void RemoveCgLayerById(const FName& InLayerId);

	FName GetCgId() const { return CgId; }

	void ClearCgId() { CgId = ""; }

	void SetCgColorToVisible() const
	{
		CgImage->SetColorAndOpacity(FLinearColor::White);
	}

	TMap<FName, FName> GetCgLayers() const { return CgLayers; }

protected:
	virtual void OnTransitionAnimationFinished() override;

	virtual void OnMidTransitionPointReached() override;
	
	UPROPERTY(BlueprintReadOnly, Category=CG)
	FName CgId;

	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta = (BindWidget))
	UAdvancedLayeredImage* CgImage;

	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta = (BindWidget))
	UAdvancedLayeredImage* CgImageForTransition;

	UPROPERTY()
	TMap<FName, FName> CgLayers; //Layer Id to Image Id

	UPROPERTY(BlueprintReadOnly, Category=CG)
	FDialogImageDefinition CgDefinition;
};
