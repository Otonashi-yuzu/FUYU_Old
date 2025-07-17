// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VNMSettings.h"
#include "UI/MainMenu/MenuButtonWidget.h"
#include "GalleryImageVisual.generated.h"

class UBackgroundBlur;
class UGalleryDisplayImageVisual;
/**
 * 
 */
UCLASS(Abstract, HideCategories="Style")
class VNM_API UGalleryImageVisual : public UMenuButtonWidget
{
	GENERATED_BODY()

public:

	void SetGalleryImageId(const FName& NewGalleryImageId);
	
protected:

	virtual void NativeMenuButtonLockedStateChanged() override;

	virtual void NativeMenuButtonClicked() override;
	
	UPROPERTY(BlueprintReadOnly, Category="Gallery")
	FName GalleryImageId;

	UPROPERTY(BlueprintReadOnly, Category="Gallery")
	TArray<FName> CgIds;

	UPROPERTY(BlueprintReadOnly, Category="Gallery")
	TArray<FDialogImageDefinition> CgDefinitions;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Gallery")
	UImage* GalleryPreviewImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Gallery")
	UImage* GalleryLockImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Gallery")
	UBackgroundBlur* GalleryLockBlur;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Gallery")
	TSubclassOf<UGalleryDisplayImageVisual> GalleryDisplayImageVisualClass;
};
