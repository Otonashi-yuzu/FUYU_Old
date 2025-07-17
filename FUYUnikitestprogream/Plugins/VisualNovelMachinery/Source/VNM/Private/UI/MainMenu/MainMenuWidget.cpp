// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MainMenu/MainMenuWidget.h"

#include "GameSaveSubsystem.h"
#include "VNMSettings.h"
#include "Kismet/GameplayStatics.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	StartGameButton->OnButtonClicked.AddUniqueDynamic(this, &UMainMenuWidget::OnStartGameButtonClicked);
	LoadGameButton->OnButtonClicked.AddUniqueDynamic(this, &UMainMenuWidget::OnLoadGameButtonClicked);
	OptionsButton->OnButtonClicked.AddUniqueDynamic(this, &UMainMenuWidget::OnOptionsButtonClicked);
	ExitGameButton->OnButtonClicked.AddUniqueDynamic(this, &UMainMenuWidget::OnExitGameButtonClicked);

	if (GalleryButton)
	{
		GalleryButton->OnButtonClicked.AddUniqueDynamic(this, &UMainMenuWidget::OnGalleryButtonClicked);
	}
}

void UMainMenuWidget::OnStartGameButtonClicked(UMenuButtonWidget* Button)
{
	FString InGameLevelName = UVNMSettings::GetVNMSettings()->Settings.InGameLevelName;

	UGameplayStatics::OpenLevel(GetOwningPlayer(), *InGameLevelName);
}

void UMainMenuWidget::OnLoadGameButtonClicked(UMenuButtonWidget* Button)
{
	LoadGameWidget->ReloadSaves();
	MainMenuContentSwitcher->SetActiveWidget(LoadGameContentWidget);
}

void UMainMenuWidget::OnOptionsButtonClicked(UMenuButtonWidget* Button)
{
	MainMenuContentSwitcher->SetActiveWidget(OptionsContentWidget);
}

void UMainMenuWidget::OnGalleryButtonClicked(UMenuButtonWidget* Button)
{
	MainMenuContentSwitcher->SetActiveWidget(GalleryContentWidget);
}

void UMainMenuWidget::OnExitGameButtonClicked(UMenuButtonWidget* Button)
{
	UKismetSystemLibrary::QuitGame(GetOwningPlayer(), GetOwningPlayer(), EQuitPreference::Quit, false);
}
