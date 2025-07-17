// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LoadGameWidget.h"
#include "MenuContentWidget.h"
#include "MenuButtonWidget.h"
#include "OptionsWidget.h"
#include "SaveGameWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "PauseMenuWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UPauseMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category="Navigation")
	void GoToSaveGameWidget();

	UFUNCTION(BlueprintCallable, Category="Navigation")
	void GoToLoadGameWidget();

	virtual void SetVisibility(ESlateVisibility InVisibility) override;
protected:


	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintImplementableEvent, Category="Navigation", DisplayName="Go to Save Game Widget")
	void ReceiveGoToSaveGameWidget();

	UFUNCTION(BlueprintImplementableEvent, Category="Navigation", DisplayName="Go to Load Game Widget")
	void ReceiveGoToLoadGameWidget();
	
	UFUNCTION()
	void OnSaveGameSelected();
	
	UFUNCTION()
	void OnSaveGameButtonClicked(UMenuButtonWidget* Button);
	
	UFUNCTION()
	void OnLoadGameButtonClicked(UMenuButtonWidget* Button);
	
	UFUNCTION()
	void OnOptionsButtonClicked(UMenuButtonWidget* Button);
	
	UFUNCTION()
	void OnReturnToMainMenuButtonClicked(UMenuButtonWidget* Button);
	
	UFUNCTION()
	void OnExitGameButtonClicked(UMenuButtonWidget* Button);
	
	UFUNCTION()
	void OnReturnButtonClicked(UMenuButtonWidget* Button);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pause Menu")
	UWidgetSwitcher* PauseMenuContentSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pause Menu")
	UMenuContentWidget* SaveGameContentWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pause Menu")
	USaveGameWidget* SaveGameWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pause Menu")
	UMenuContentWidget* LoadGameContentWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pause Menu")
	ULoadGameWidget* LoadGameWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pause Menu")
	UMenuContentWidget* OptionsContentWidget;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pause Menu")
	UMenuButtonWidget* SaveGameButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pause Menu")
	UMenuButtonWidget* LoadGameButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pause Menu")
	UMenuButtonWidget* OptionsButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pause Menu")
	UMenuButtonWidget* ReturnToMainMenuButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pause Menu")
	UMenuButtonWidget* ExitGameButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pause Menu")
	UMenuButtonWidget* ReturnButton;
};
