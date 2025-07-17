// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuButtonWidget.h"
#include "GalleryDisplayImageVisual.generated.h"

/**
 * 
 */
UCLASS(Abstract, HideCategories="Style")
class VNM_API UGalleryDisplayImageVisual : public UMenuButtonWidget
{
	GENERATED_BODY()

public:

	void SetCgIds(const TArray<FName>& InCgIds);


protected:

	virtual void NativeMenuButtonClicked() override;

	TArray<FName> CgIds;
	int32 CurrentlyDisplayedIndex;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Gallery")
	class UImage* GalleryDisplayImage;
};
