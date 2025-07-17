// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ButtonStyling.h"
#include "Blueprint/UserWidget.h"
#include "MenuInputButtonWidget.generated.h"

class UWidgetSwitcher;
class UMenuTextButtonWidget;
class UMenuIconButtonWidget;
class UTextBlock;
class UImage;
/**
 * 
 */
UCLASS()
class VNM_API UMenuInputButtonWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	virtual void NativePreConstruct() override;

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputButtonEvent, UMenuInputButtonWidget*, ClickedButton);

	UPROPERTY(BlueprintAssignable)
	FOnInputButtonEvent OnButtonClicked;

protected:

	UFUNCTION()
	void OnInternalButtonClicked(UMenuButtonWidget* ClickedButton);
	
	UFUNCTION()
	void OnMenuInputButtonClicked();
	virtual void NativeMenuInputButtonClicked() {}
	UFUNCTION(BlueprintImplementableEvent, DisplayName="On Menu Input Button Clicked", Category="Menu Input Button")
	void BP_OnMenuInputButtonClicked();

	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
	virtual FReply NativeOnTouchStarted(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent) override;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Menu Input Button")
	UImage* KeyIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Menu Input Button")
	UMenuIconButtonWidget* TouchButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Menu Input Button")
	UMenuTextButtonWidget* InputButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Menu Input Button")
	UWidgetSwitcher* InputVisualizationSwitcher;

	// The name of the input action to be triggered.
	// When the input action is triggered, it will trigger the click event
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Menu Input Button")
	FName InputActionName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Menu Input Button")
	bool bConsumeInput;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Menu Input Button")
	bool bAlwaysShowTouchIcon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Menu Input Button")
	bool bHideInputKeyIcon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Menu Input Button")
	FText BindingText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Menu Input Button")
	FButtonStyling TouchButtonStyle;

	UPROPERTY(Transient, BlueprintReadOnly, Category="Menu Input Button")
	FKey KeyboardKey;
	
	UPROPERTY(Transient, BlueprintReadOnly, Category="Menu Input Button")
	FKey GamepadKey;
	
};
