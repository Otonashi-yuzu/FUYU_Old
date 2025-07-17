// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MainMenu/SaveGameWidget.h"

#include "SaveGameVisual.h"
#include "VNMPagingWidget.h"
#include "GameSaveSubsystem.h"
#include "Engine/GameInstance.h"

void USaveGameWidget::ReloadSaves()
{
	for (auto* Widget: SaveGameList->GetAllChildren())
	{
		if (auto* SaveGameVisual = Cast<USaveGameVisual>(Widget))
		{
			SaveGameVisual->ReloadSave();
		}
	}
	
	const int32 GalleryVisualsCount = SaveGameList->GetChildrenCount();
	auto* GameSaveSubsystem = GetGameInstance()->GetSubsystem<UGameSaveSubsystem>();
	const int32 CurrentSaveSlotsCount = GameSaveSubsystem->GetCurrentlyUsedSaveSlotsCount();
	int32 NumPages = FMath::CeilToInt((CurrentSaveSlotsCount + 1.f) / GalleryVisualsCount);
	if (NumPages > 1)
	{
		PagingWidget->SetVisibility(ESlateVisibility::Visible);
		PagingWidget->SetNumberPages(NumPages);
	}
	else
	{
		PagingWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
	
	OnPageChanged(0);
}

void USaveGameWidget::NativeConstruct()
{
	Super::NativeConstruct();

	for (auto* Widget: SaveGameList->GetAllChildren())
	{
		if (auto* SaveGameVisual = Cast<USaveGameVisual>(Widget))
		{
			SaveGameVisual->OnButtonClicked.AddUniqueDynamic(this, &USaveGameWidget::OnSaveGameClicked);
		}
	}
	
	PagingWidget->OnPageChanged.AddUniqueDynamic(this, &USaveGameWidget::OnPageChanged);
	
	ReloadSaves();
}

void USaveGameWidget::OnSaveGameClicked(UMenuButtonWidget* ClickedButton)
{
	OnSaveGameSelected.Broadcast();
}

void USaveGameWidget::OnPageChanged(const int32 PageIndex)
{	
	auto* GameSaveSubsystem = GetGameInstance()->GetSubsystem<UGameSaveSubsystem>();
	const int32 CurrentSaveSlotsCount = GameSaveSubsystem->GetCurrentlyUsedSaveSlotsCount();
	const int32 SaveSlotsCount = SaveGameList->GetChildrenCount();

	for (int32 i = 0; i < SaveSlotsCount; i++)
	{
		auto* SaveGameVisual = Cast<USaveGameVisual>(SaveGameList->GetChildAt(i));

		const int32 SaveSlotIndex = i + SaveSlotsCount * PageIndex;

		if (SaveSlotIndex <= CurrentSaveSlotsCount)
		{
			SaveGameVisual->SetVisibility(ESlateVisibility::Visible);
			SaveGameVisual->SetSaveGameSlotIndex(SaveSlotIndex+1);
		}
		else
		{
			SaveGameVisual->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}
