// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoadGameWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API ULoadGameWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	virtual void NativeConstruct() override;
public:
	void ReloadSaves();

protected:

	UFUNCTION()
	void OnPageChanged(int32 PageIndex);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Load Game")
	UPanelWidget* SaveGameList;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Load Game")
	class UVNMPagingWidget* PagingWidget;
	
};
