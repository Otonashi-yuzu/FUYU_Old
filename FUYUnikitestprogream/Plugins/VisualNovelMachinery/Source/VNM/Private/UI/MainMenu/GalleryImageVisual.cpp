// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MainMenu/GalleryImageVisual.h"

#include "GalleryDisplayImageVisual.h"
#include "GameSaveSubsystem.h"
#include "Engine/GameInstance.h"
#include "Blueprint/WidgetTree.h"
#include "Components/BackgroundBlur.h"
#include "Components/Image.h"

void UGalleryImageVisual::SetGalleryImageId(const FName& NewGalleryImageId)
{
	GalleryImageId = NewGalleryImageId;

	UVNMSettings* Settings = UVNMSettings::GetVNMSettings();
	CgIds = Settings->GetCgIdsByGroupId(GalleryImageId);

	if (CgIds.Num() == 0)
	{
		return;
	}

	auto Definition = Settings->GetCgDefinitionById(CgIds[0]);

	GalleryPreviewImage->Brush.SetImageSize(Definition.DialogImage.ImageSize);
	GalleryPreviewImage->Brush.SetResourceObject(Definition.DialogImage.Image.LoadSynchronous());
	GalleryPreviewImage->SetBrushTintColor(Definition.DialogImage.ColorAndOpacity);
	
	auto* GameSaveSubsystem = GetGameInstance()->GetSubsystem<UGameSaveSubsystem>();

	SetLocked(!GameSaveSubsystem->GetPersistantSaveGame()->SeenCgIds.Contains(CgIds[0].ToString()));
}

void UGalleryImageVisual::NativeMenuButtonLockedStateChanged()
{
	Super::NativeMenuButtonLockedStateChanged();

	GalleryLockImage->SetVisibility(bIsLocked ? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Collapsed);
	GalleryLockBlur->SetVisibility(bIsLocked ? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Collapsed);
}

void UGalleryImageVisual::NativeMenuButtonClicked()
{
	Super::NativeMenuButtonClicked();

	if (bIsLocked)
	{
		return;
	}

	auto* DisplayWidget = CreateWidget<UGalleryDisplayImageVisual>(this, GalleryDisplayImageVisualClass);

	DisplayWidget->SetCgIds(CgIds);
	DisplayWidget->AddToViewport(9999);
}
