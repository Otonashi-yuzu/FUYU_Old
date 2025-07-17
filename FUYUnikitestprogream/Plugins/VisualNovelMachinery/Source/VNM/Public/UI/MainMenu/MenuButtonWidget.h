// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ButtonStyling.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "MenuButtonWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UMenuButtonWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuButtonEvent, UMenuButtonWidget*, ClickedButton);

	UPROPERTY(BlueprintAssignable)
	FOnMenuButtonEvent OnButtonClicked;

	UPROPERTY(BlueprintAssignable)
	FOnMenuButtonEvent OnButtonHovered;

	UPROPERTY(BlueprintAssignable)
	FOnMenuButtonEvent OnButtonUnhovered;

	UPROPERTY(BlueprintAssignable)
	FOnMenuButtonEvent OnButtonPressed;

	UPROPERTY(BlueprintAssignable)
	FOnMenuButtonEvent OnButtonReleased;
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuButtonFlagEvent, UMenuButtonWidget*, ClickedButton, bool, FlagChanged);

	UPROPERTY(BlueprintAssignable)
	FOnMenuButtonFlagEvent OnButtonSelectionChanged;

	UPROPERTY(BlueprintAssignable)
	FOnMenuButtonFlagEvent OnButtonLockedStateChanged;

	UFUNCTION(BlueprintCallable, Category="Menu Button")
	virtual void SetButtonStyling(const FButtonStyling& NewButtonStyling);

	UFUNCTION(BlueprintCallable, Category="Menu Button")
	virtual void SetLocked(bool bInIsLocked);

	UFUNCTION(BlueprintCallable, Category="Menu Button")
	virtual void SetIsSelected(bool bInIsSelected);

protected:

	void OnMenuButtonLockedStateChanged();
	virtual void NativeMenuButtonLockedStateChanged() {}
	UFUNCTION(BlueprintImplementableEvent, DisplayName="On Menu Locked State Changed", Category="Menu Button")
	void BP_OnMenuButtonLockedStateChanged();

	void OnMenuButtonSelectionChanged();
	virtual void NativeMenuButtonSelectionChanged() {}
	UFUNCTION(BlueprintImplementableEvent, DisplayName="On Menu Button Selection Changed", Category="Menu Button")
	void BP_OnMenuButtonSelectionChanged();

	UFUNCTION()
	void OnMenuButtonClicked();
	virtual void NativeMenuButtonClicked() {}
	UFUNCTION(BlueprintImplementableEvent, DisplayName="On Menu Button Clicked", Category="Menu Button")
	void BP_OnMenuButtonClicked();

	UFUNCTION()
	void OnMenuButtonHovered();
	virtual void NativeMenuButtonHovered() {}
	UFUNCTION(BlueprintImplementableEvent, DisplayName="On Menu Button Hovered", Category="Menu Button")
	void BP_OnMenuButtonHovered();

	UFUNCTION()
	void OnMenuButtonUnhovered();
	virtual void NativeMenuButtonUnhovered() {}
	UFUNCTION(BlueprintImplementableEvent, DisplayName="On Menu Button Unhovered", Category="Menu Button")
	void BP_OnMenuButtonUnhovered();

	UFUNCTION()
	void OnMenuButtonPressed();
	virtual void NativeMenuButtonPressed() {}
	UFUNCTION(BlueprintImplementableEvent, DisplayName="On Menu Button Pressed", Category="Menu Button")
	void BP_OnMenuButtonPressed();

	UFUNCTION()
	void OnMenuButtonReleased();
	virtual void NativeMenuButtonReleased() {}
	UFUNCTION(BlueprintImplementableEvent, DisplayName="On Menu Button Released", Category="Menu Button")
	void BP_OnMenuButtonReleased();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Menu Button")
	UButton* MenuButton;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Style")
	FButtonStyling Style;

	UPROPERTY(BlueprintReadOnly, Category="Menu Button")
	bool bIsLocked;
	
	UPROPERTY(BlueprintReadOnly, Category="Menu Button")
	bool bIsSelected;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Menu Button")
	bool bIsSelectedOnClick = false;
};
