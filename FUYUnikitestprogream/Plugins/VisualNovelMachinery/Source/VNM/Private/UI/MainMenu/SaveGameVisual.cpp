// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MainMenu/SaveGameVisual.h"

#include "GameSaveSubsystem.h"
#include "VNMSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameInstance.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "VNMBasePopUpWidget.h"
#include "VNMUISettings.h"

void USaveGameVisual::SetIsAutoSaveSlot(const bool bInIsAutoSaveSlot)
{
	bIsAutoSaveSlot = bInIsAutoSaveSlot;
}

void USaveGameVisual::SetSaveGameSlotIndex(const int32 InSlotIndex)
{
	SlotIndex = InSlotIndex;
	
	auto* GameSaveSubsystem = GetGameInstance()->GetSubsystem<UGameSaveSubsystem>();

	if (!GameSaveSubsystem)
	{
		return;
	}

	if (bIsAutoSaveSlot)
	{
		MetaData = GameSaveSubsystem->GetAutoSaveGameMetaDataBySlotIndex(SlotIndex);
	}
	else
	{
		MetaData = GameSaveSubsystem->GetSaveGameMetaDataBySlotIndex(SlotIndex);
	}

	UpdateVisual();
}

int32 USaveGameVisual::GetSameGameSlotIndex() const
{
	return SlotIndex;
}

void USaveGameVisual::ReloadSave()
{
	SetSaveGameSlotIndex(SlotIndex);
}

void USaveGameVisual::NativeConstruct()
{
	Super::NativeConstruct();

	if (SlotIndex != INDEX_NONE)
	{
		SetSaveGameSlotIndex(SlotIndex);
	}

	DeleteButton->OnButtonClicked.AddUniqueDynamic(this, &USaveGameVisual::OnDeleteButtonClicked);
}

void USaveGameVisual::UpdateVisual()
{
	if (!MetaData.IsValid())
	{
		if (SaveGameName)
		{
			SaveGameName->SetVisibility(bIsForSaving ? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Hidden);
			SaveGameName->SetText(NSLOCTEXT("VNN", "NewSaveGameText", "NEW SAVE GAME"));
		}
		
		SaveGameImage->SetRenderOpacity(0.f);
		DeleteButton->SetVisibility(ESlateVisibility::Collapsed);
		return;
	}
	
	UTexture2D* Texture;

	Texture = UTexture2D::CreateTransient(MetaData.Screenshot.Width, MetaData.Screenshot.Height, PF_B8G8R8A8);
	if(!Texture)
	{
		SaveGameImage->SetRenderOpacity(0.f);
		return;
	}

#if WITH_EDITORONLY_DATA
	Texture->MipGenSettings = TMGS_NoMipmaps;
#endif
	Texture->NeverStream = true;

	Texture->SRGB = 0;

	FTexture2DMipMap& Mip = Texture->GetPlatformData()->Mips[0];
	void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

	FMemory::Memcpy(Data, MetaData.Screenshot.Colors.GetData(), MetaData.Screenshot.Width * MetaData.Screenshot.Height * 4);
	Mip.BulkData.Unlock();
	Texture->UpdateResource();

	SaveGameImage->SetBrushFromTexture(Texture);
	SaveGameImage->SetRenderOpacity(1.f);
	DeleteButton->SetVisibility(bIsAutoSaveSlot ? ESlateVisibility::Collapsed : ESlateVisibility::Visible);

	if (SaveGameName)
	{
		SaveGameName->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		SaveGameName->SetText(FText::FromString(MetaData.SaveName));
	}
}

void USaveGameVisual::NativeMenuButtonClicked()
{
	Super::NativeMenuButtonClicked();
	
	if (bIsForSaving)
	{
		auto* GameSaveSubsystem = GetGameInstance()->GetSubsystem<UGameSaveSubsystem>();
		
		GameSaveSubsystem->PrepareSaveGameObject();
		GameSaveSubsystem->SaveGame(SlotIndex);
		SetSaveGameSlotIndex(SlotIndex);		
	}
	else
	{
		if (!MetaData.IsValid())
		{
			return;
		}
		
		auto* GameSaveSubsystem = GetGameInstance()->GetSubsystem<UGameSaveSubsystem>();
		FString InGameLevelName = UVNMSettings::GetVNMSettings()->Settings.InGameLevelName;

		if (bIsAutoSaveSlot)
		{
			if (GameSaveSubsystem->LoadAutoSaveGame(SlotIndex))
			{
				UGameplayStatics::OpenLevel(GetOwningPlayer(), *InGameLevelName);
			}
		}
		else
		{
			if (GameSaveSubsystem->LoadGame(SlotIndex))
			{
				UGameplayStatics::OpenLevel(GetOwningPlayer(), *InGameLevelName);
			}
		}
	}
}

void USaveGameVisual::OnDeleteButtonClicked(UMenuButtonWidget* ClickedButton)
{
	auto* GameSaveSubsystem = GetGameInstance()->GetSubsystem<UGameSaveSubsystem>();
	GameSaveSubsystem->OnSaveGameDeleted.AddUniqueDynamic(this, &USaveGameVisual::OnSaveGameDeleted);
	GameSaveSubsystem->DeleteSaveGame(MetaData.SaveFileName);
}

void USaveGameVisual::OnSaveGameDeleted(const bool bWasSuccessful)
{
	ReloadSave();
}
