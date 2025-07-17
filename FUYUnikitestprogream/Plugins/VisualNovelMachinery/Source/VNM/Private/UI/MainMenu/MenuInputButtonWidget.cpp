// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuInputButtonWidget.h"

#include "MenuIconButtonWidget.h"
#include "MenuTextButtonWidget.h"
#include "VNMModule.h"
#include "VNMUISettings.h"
#include "Components/Image.h"
#include "Components/WidgetSwitcher.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"

void UMenuInputButtonWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	KeyIcon->SetVisibility(bHideInputKeyIcon ? ESlateVisibility::Collapsed : ESlateVisibility::SelfHitTestInvisible);
	TouchButton->SetButtonStyling(TouchButtonStyle);

	auto* InputSettings = UInputSettings::GetInputSettings();

	TArray<FInputActionKeyMapping> Mappings;
	InputSettings->GetActionMappingByName(InputActionName, Mappings);

	if (Mappings.IsEmpty())
	{
		UE_LOG(LogVNM, Error, TEXT("UMenuInputButtonWidget::NativePreConstruct: Input Action %s doesn't exist!"), *InputActionName.ToString());
		return;
	}

	for (const auto& Mapping : Mappings)
	{
		if (Mapping.Key.IsGamepadKey())
		{
			GamepadKey = Mapping.Key;
		}
		else
		{
			KeyboardKey = Mapping.Key;
		}
	}

	
	auto* UISettings = UVNMUISettings::Get();
	KeyIcon->SetBrushFromTexture(UISettings->InputSettings.KeyboardMouseInputIcons[KeyboardKey]);

	if (BindingText.IsEmpty())
	{
		InputButton->OverrideButtonText(FText::FromName(InputActionName));
	}
	else
	{
		InputButton->OverrideButtonText(BindingText);
	}
}

void UMenuInputButtonWidget::NativeConstruct()
{
	Super::NativeConstruct();

	const FString PlatformName = UGameplayStatics::GetPlatformName();

	if (PlatformName == TEXT("Android") || PlatformName == TEXT("IOS") || bAlwaysShowTouchIcon)
	{
		InputVisualizationSwitcher->SetActiveWidgetIndex(1);
	}
	else
	{
		InputVisualizationSwitcher->SetActiveWidgetIndex(0);
	}
	
	InputButton->OnButtonClicked.AddUniqueDynamic(this, &UMenuInputButtonWidget::OnInternalButtonClicked);
	TouchButton->OnButtonClicked.AddUniqueDynamic(this, &UMenuInputButtonWidget::OnInternalButtonClicked);

	auto* Settings = UInputSettings::GetInputSettings();

	TArray<FInputActionKeyMapping> Mappings;
	Settings->GetActionMappingByName(InputActionName, Mappings);

	if (Mappings.IsEmpty())
	{
		UE_LOG(LogVNM, Error, TEXT("UMenuInputButtonWidget::NativeConstruct: Input Action %s doesn't exist!"), *InputActionName.ToString());
		return;
	}
	
	FOnInputAction ActionDelegate;
	ActionDelegate.BindDynamic(this, &UMenuInputButtonWidget::OnMenuInputButtonClicked);
	ListenForInputAction(InputActionName, IE_Pressed, bConsumeInput, ActionDelegate);
}

void UMenuInputButtonWidget::NativeDestruct()
{
	StopListeningForInputAction(InputActionName, IE_Pressed);
	Super::NativeDestruct();
}

void UMenuInputButtonWidget::OnInternalButtonClicked(UMenuButtonWidget* ClickedButton)
{
	OnMenuInputButtonClicked();
}

void UMenuInputButtonWidget::OnMenuInputButtonClicked()
{
	NativeMenuInputButtonClicked();
	BP_OnMenuInputButtonClicked();
	OnButtonClicked.Broadcast(this);
}

FReply UMenuInputButtonWidget::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
	if (!bAlwaysShowTouchIcon)
	{
		InputVisualizationSwitcher->SetActiveWidgetIndex(0);
		auto* Settings = UVNMUISettings::Get();

		const FKey InputKey = InKeyEvent.GetKey();
		if (InputKey.IsGamepadKey())
		{
			KeyIcon->SetBrushFromTexture(Settings->InputSettings.GamepadInputIcons[GamepadKey]);
		}
		else
		{
			KeyIcon->SetBrushFromTexture(Settings->InputSettings.KeyboardMouseInputIcons[KeyboardKey]);
		}
	}
	
	return Super::NativeOnKeyDown(InGeometry, InKeyEvent);
}

FReply UMenuInputButtonWidget::NativeOnTouchStarted(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent)
{
	InputVisualizationSwitcher->SetActiveWidgetIndex(1);
	
	return Super::NativeOnTouchStarted(InGeometry, InGestureEvent);
}
