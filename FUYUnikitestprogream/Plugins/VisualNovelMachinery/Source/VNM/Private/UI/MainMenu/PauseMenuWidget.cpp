// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseMenuWidget.h"

#include "GameSaveSubsystem.h"
#include "VNMSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameInstance.h"

void UPauseMenuWidget::GoToSaveGameWidget()
{
	SaveGameWidget->ReloadSaves();
	PauseMenuContentSwitcher->SetActiveWidget(SaveGameContentWidget);
	ReceiveGoToSaveGameWidget();
}

void UPauseMenuWidget::GoToLoadGameWidget()
{
	LoadGameWidget->ReloadSaves();
	PauseMenuContentSwitcher->SetActiveWidget(LoadGameContentWidget);
	ReceiveGoToLoadGameWidget();
}

void UPauseMenuWidget::SetVisibility(ESlateVisibility InVisibility)
{
	Super::SetVisibility(InVisibility);
	auto* GameSaveSubsystem = GetGameInstance()->GetSubsystem<UGameSaveSubsystem>();

	if (!GameSaveSubsystem)
	{
		return;
	}

	GameSaveSubsystem->StartAutoSaveTimer();

	switch (InVisibility)
	{
	case ESlateVisibility::Collapsed:
	case ESlateVisibility::Hidden:
		{
			GameSaveSubsystem->StartAutoSaveTimer();
			break;
		}
	case ESlateVisibility::Visible:
	case ESlateVisibility::HitTestInvisible:
	case ESlateVisibility::SelfHitTestInvisible:
		{
			GameSaveSubsystem->StopAutoSaveTimer();
			break;
		}
	default:
		break;
	}
}

void UPauseMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	SaveGameButton->OnButtonClicked.AddUniqueDynamic(this, &UPauseMenuWidget::OnSaveGameButtonClicked);
	LoadGameButton->OnButtonClicked.AddUniqueDynamic(this, &UPauseMenuWidget::OnLoadGameButtonClicked);
	OptionsButton->OnButtonClicked.AddUniqueDynamic(this, &UPauseMenuWidget::OnOptionsButtonClicked);
	ReturnButton->OnButtonClicked.AddUniqueDynamic(this, &UPauseMenuWidget::UPauseMenuWidget::OnReturnButtonClicked);
	ReturnToMainMenuButton->OnButtonClicked.AddUniqueDynamic(this, &UPauseMenuWidget::UPauseMenuWidget::OnReturnToMainMenuButtonClicked);
	ExitGameButton->OnButtonClicked.AddUniqueDynamic(this, &UPauseMenuWidget::OnExitGameButtonClicked);
	SaveGameWidget->OnSaveGameSelected.AddUniqueDynamic(this, &UPauseMenuWidget::OnSaveGameSelected);
}

void UPauseMenuWidget::OnSaveGameSelected()
{
	SetVisibility(ESlateVisibility::Collapsed);
	
	auto* GameSaveSubsystem = GetGameInstance()->GetSubsystem<UGameSaveSubsystem>();

	if (!GameSaveSubsystem)
	{
		return;
	}

	GameSaveSubsystem->ClearLoadingFlag();	
}

void UPauseMenuWidget::OnSaveGameButtonClicked(UMenuButtonWidget* Button)
{
	SaveGameWidget->ReloadSaves();
	PauseMenuContentSwitcher->SetActiveWidget(SaveGameContentWidget);
}

void UPauseMenuWidget::OnLoadGameButtonClicked(UMenuButtonWidget* Button)
{
	LoadGameWidget->ReloadSaves();
	PauseMenuContentSwitcher->SetActiveWidget(LoadGameContentWidget);
}

void UPauseMenuWidget::OnOptionsButtonClicked(UMenuButtonWidget* Button)
{
	PauseMenuContentSwitcher->SetActiveWidget(OptionsContentWidget);
}

void UPauseMenuWidget::OnReturnToMainMenuButtonClicked(UMenuButtonWidget* Button)
{	
	FString MainMenuLevelName = UVNMSettings::GetVNMSettings()->Settings.MainMenuLevelName;

	UGameplayStatics::OpenLevel(GetOwningPlayer(), *MainMenuLevelName);
	
	auto* GameSaveSubsystem = GetGameInstance()->GetSubsystem<UGameSaveSubsystem>();

	if (!GameSaveSubsystem)
	{
		return;
	}

	GameSaveSubsystem->ClearLoadingFlag();
}

void UPauseMenuWidget::OnExitGameButtonClicked(UMenuButtonWidget* Button)
{
	UKismetSystemLibrary::QuitGame(GetOwningPlayer(), GetOwningPlayer(), EQuitPreference::Quit, false);
}

void UPauseMenuWidget::OnReturnButtonClicked(UMenuButtonWidget* Button)
{
	SetVisibility(ESlateVisibility::Collapsed);
	
	auto* GameSaveSubsystem = GetGameInstance()->GetSubsystem<UGameSaveSubsystem>();

	if (!GameSaveSubsystem)
	{
		return;
	}

	GameSaveSubsystem->ClearLoadingFlag();
}
