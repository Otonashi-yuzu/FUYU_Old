// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameSaveSubsystem.h"
#include "MenuButtonWidget.h"
#include "VNMBasePopUpWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "SaveGameVisual.generated.h"

/**
 * 
 */
UCLASS(Abstract, HideCategories="Style")
class VNM_API USaveGameVisual : public UMenuButtonWidget
{
	GENERATED_BODY()

public:
	void SetIsAutoSaveSlot(const bool bInIsAutoSaveSlot);
	void SetSaveGameSlotIndex(const int32 InSlotIndex);
	int32 GetSameGameSlotIndex() const;
	void ReloadSave();
protected:
	virtual void NativeConstruct() override;
	
	virtual void UpdateVisual();

	virtual void NativeMenuButtonClicked() override;

	UFUNCTION()
	void OnDeleteButtonClicked(UMenuButtonWidget* ClickedButton);

	UFUNCTION()
	void OnSaveGameDeleted(const bool bWasSuccessful);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Save Game")
	UImage* SaveGameImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional), Category="Save Game")
	UTextBlock* SaveGameName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional), Category="Save Game")
	UMenuButtonWidget* DeleteButton;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Save Game")
	int32 SlotIndex = INDEX_NONE;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Save Game")
	bool bIsForSaving;

	UPROPERTY(BlueprintReadOnly, Category="Save Game")
	FSaveGameMetaData MetaData;

	UPROPERTY(BlueprintReadOnly, Category="Save Game")
	bool bIsAutoSaveSlot;
};
