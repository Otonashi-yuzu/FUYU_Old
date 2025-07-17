// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MainMenu/OptionsWidget.h"

#include "MenuButtonWidget.h"
#include "VNMSettings.h"
#include "GameFramework/GameUserSettings.h"

void UOptionsWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	if (TypeWritingSpeedSlider)
	{
		TypeWritingSpeedSlider->SetMinValue(0.01f);
		TypeWritingSpeedSlider->SetMaxValue(0.1);
		TypeWritingSpeedSlider->SetStepValue(0.005f);
	}

	if (AutoForwardTimeSlider)
	{
		AutoForwardTimeSlider->SetMinValue(0.0f);
		AutoForwardTimeSlider->SetMaxValue(42.f);
		AutoForwardTimeSlider->SetStepValue(1.f);
	}
}

void UOptionsWidget::NativeConstruct()
{
	Super::NativeConstruct();

	TypeWritingSpeedSlider->OnValueChanged.AddUniqueDynamic(this , &UOptionsWidget::OnTypeWritingSpeedSliderValueChanged);
	AutoForwardTimeSlider->OnValueChanged.AddUniqueDynamic(this , &UOptionsWidget::OnAutoForwardTimeSliderValueChanged);

	DisplayResolutions->OnSelectionChanged.AddUniqueDynamic(this, &UOptionsWidget::OnResolutionChanged);
	
	SetDisplayOptionByGameUserSettings();
	
	DisplayOptionWindowed->OnButtonSelectionChanged.AddUniqueDynamic(this, &UOptionsWidget::OnDisplayOptionWindowedCheckedStateChanged);
	DisplayOptionWindowedFullScreen->OnButtonSelectionChanged.AddUniqueDynamic(this, &UOptionsWidget::UOptionsWidget::OnDisplayOptionWindowedFullScreenCheckedStateChanged);
	DisplayOptionFullScreen->OnButtonSelectionChanged.AddUniqueDynamic(this, &UOptionsWidget::UOptionsWidget::OnDisplayOptionFullScreenCheckedStateChanged);
}

void UOptionsWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	TypeWritingSpeedSlider->SetMinValue(0.01f);
	TypeWritingSpeedSlider->SetMaxValue(0.1f);
	TypeWritingSpeedSlider->SetStepValue(0.005f);
	TypeWritingSpeedSlider->SetSliderValue(UVNMSettings::GetVNMSettings()->Settings.TypeWritingSpeed);

	AutoForwardTimeSlider->SetMinValue(0.0f);
	AutoForwardTimeSlider->SetMaxValue(42.f);
	AutoForwardTimeSlider->SetStepValue(1.f);
	AutoForwardTimeSlider->SetSliderValue(UVNMSettings::GetVNMSettings()->Settings.AutoForwardTime);

	UGameUserSettings* GameUserSettings = UGameUserSettings::GetGameUserSettings();
	TArray<FIntPoint> IntPointResolutions;
	if (UKismetSystemLibrary::GetSupportedFullscreenResolutions(IntPointResolutions))
	{
		FullscreenResolutions.Empty();
		for (const auto& Resolution: IntPointResolutions)
		{
			const FString ResolutionString = FString::Printf(TEXT("%dx%d"), Resolution.X, Resolution.Y);
			FullscreenResolutions.AddUnique(ResolutionString);
		}
	}

	IntPointResolutions.Empty();
	
	if (UKismetSystemLibrary::GetConvenientWindowedResolutions(IntPointResolutions))
	{
		WindowedResolutions.Empty();
		for (const auto& Resolution: IntPointResolutions)
		{
			const FString ResolutionString = FString::Printf(TEXT("%dx%d"), Resolution.X, Resolution.Y);
			WindowedResolutions.AddUnique(ResolutionString);
		}
	}
}

void UOptionsWidget::SetDisplayOptionByGameUserSettings()
{
	auto* Settings = UGameUserSettings::GetGameUserSettings();

	if (!Settings)
	{
		return;
	}
	
	const FIntPoint CurrentResolution = Settings->GetScreenResolution();
	const FString CurrentResolutionString = FString::Printf(TEXT("%dx%d"), CurrentResolution.X, CurrentResolution.Y);

	switch (Settings->GetFullscreenMode())
	{
	case EWindowMode::Fullscreen:
		{
			DisplayOptionWindowed->SetIsSelected(false);
			DisplayOptionWindowedFullScreen->SetIsSelected(false);
			DisplayOptionFullScreen->SetIsSelected(true);
			DisplayResolutions->SetOptions(FullscreenResolutions);
		}
		break;
	case EWindowMode::Windowed:
		{
			DisplayOptionWindowed->SetIsSelected(true);
			DisplayOptionWindowedFullScreen->SetIsSelected(false);
			DisplayOptionFullScreen->SetIsSelected(false);
			DisplayResolutions->SetOptions(WindowedResolutions);
		}
		break;
	case EWindowMode::WindowedFullscreen:
		{
			DisplayOptionWindowed->SetIsSelected(false);
			DisplayOptionWindowedFullScreen->SetIsSelected(true);
			DisplayOptionFullScreen->SetIsSelected(false);
			DisplayResolutions->SetOptions(FullscreenResolutions);
		}
		break;
	default:
		return;
	}
	
	DisplayResolutions->SetSelectedOption(CurrentResolutionString);
}

void UOptionsWidget::OnTypeWritingSpeedSliderValueChanged(float NewValue)
{
	UVNMSettings::GetVNMSettings()->Settings.TypeWritingSpeed = NewValue;
}

void UOptionsWidget::OnAutoForwardTimeSliderValueChanged(float NewValue)
{
	UVNMSettings::GetVNMSettings()->Settings.AutoForwardTime = NewValue;
}

void UOptionsWidget::OnDisplayOptionFullScreenCheckedStateChanged(UMenuButtonWidget* ClickedButton, bool bIsSelected)
{
	if (bIsSelected)
	{
		UGameUserSettings* GameUserSettings = UGameUserSettings::GetGameUserSettings();
		GameUserSettings->SetFullscreenMode(EWindowMode::Fullscreen);
		GameUserSettings->ApplySettings(true);
		
	}
	SetDisplayOptionByGameUserSettings();
}

void UOptionsWidget::OnDisplayOptionWindowedCheckedStateChanged(UMenuButtonWidget* ClickedButton, bool bIsSelected)
{
	if (bIsSelected)
	{
		UGameUserSettings* GameUserSettings = UGameUserSettings::GetGameUserSettings();
		GameUserSettings->SetFullscreenMode(EWindowMode::Windowed);
		GameUserSettings->ApplySettings(true);
	}
	SetDisplayOptionByGameUserSettings();
}

void UOptionsWidget::OnDisplayOptionWindowedFullScreenCheckedStateChanged(UMenuButtonWidget* ClickedButton, bool bIsSelected)
{
	if (bIsSelected)
	{
		UGameUserSettings* GameUserSettings = UGameUserSettings::GetGameUserSettings();
		GameUserSettings->SetFullscreenMode(EWindowMode::WindowedFullscreen);
		GameUserSettings->ApplySettings(true);
	}
	SetDisplayOptionByGameUserSettings();
}

void UOptionsWidget::OnResolutionChanged(FString SelectedItem)
{
	FString Left, Right;
	SelectedItem.Split(TEXT("x"), &Left, &Right);
	
	UGameUserSettings* GameUserSettings = UGameUserSettings::GetGameUserSettings();
	GameUserSettings->SetScreenResolution(FIntPoint(FCString::Atoi(*Left), FCString::Atoi(*Right)));
	GameUserSettings->ApplySettings(true);
}