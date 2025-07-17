// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GalleryWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UGalleryWidget : public UUserWidget
{
	GENERATED_BODY()

protected:	
	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnPageChanged(const int32 PageIndex);

	UPROPERTY(BlueprintReadOnly, Category="Gallery")
	TArray<FName> CgGroupIds;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Gallery")
	class UPanelWidget* GalleryCgList;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Gallery")
	class UVNMPagingWidget* PagingWidget;
	
};
