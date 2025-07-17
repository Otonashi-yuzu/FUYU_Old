// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuButtonWidget.h"
#include "Blueprint/UserWidget.h"
#include "SaveGameWidget.generated.h"

class UVNMPagingWidget;
/**
 * 
 */
UCLASS(Abstract)
class VNM_API USaveGameWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSaveGameSelected);

	UPROPERTY(BlueprintAssignable)
	FOnSaveGameSelected OnSaveGameSelected;
	
	void ReloadSaves();

protected:
	virtual void NativeConstruct() override;
	
	UFUNCTION()
	void OnSaveGameClicked(UMenuButtonWidget* ClickedButton);
	
	UFUNCTION()
	void OnPageChanged(const int32 PageIndex);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Save Game")
	UPanelWidget* SaveGameList;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Save Game")
	UVNMPagingWidget* PagingWidget;
	
};
