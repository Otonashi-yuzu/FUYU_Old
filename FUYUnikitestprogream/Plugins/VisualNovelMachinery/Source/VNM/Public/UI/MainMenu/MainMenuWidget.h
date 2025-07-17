// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LoadGameWidget.h"
#include "MenuContentWidget.h"
#include "MenuButtonWidget.h"
#include "OptionsWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:

protected:

	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnStartGameButtonClicked(UMenuButtonWidget* Button);
	
	UFUNCTION()
	void OnLoadGameButtonClicked(UMenuButtonWidget* Button);
	
	UFUNCTION()
	void OnOptionsButtonClicked(UMenuButtonWidget* Button);
	
	UFUNCTION()
	void OnGalleryButtonClicked(UMenuButtonWidget* Button);
	
	UFUNCTION()
	void OnExitGameButtonClicked(UMenuButtonWidget* Button);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Main Menu")
	UWidgetSwitcher* MainMenuContentSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Main Menu")
	UMenuContentWidget* LoadGameContentWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Main Menu")
	ULoadGameWidget* LoadGameWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Main Menu")
	UMenuContentWidget* OptionsContentWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional), Category="Main Menu")
	UMenuContentWidget* GalleryContentWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Main Menu")
	UMenuButtonWidget* StartGameButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Main Menu")
	UMenuButtonWidget* LoadGameButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Main Menu")
	UMenuButtonWidget* OptionsButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional), Category="Main Menu")
	UMenuButtonWidget* GalleryButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Main Menu")
	UMenuButtonWidget* ExitGameButton;
};
