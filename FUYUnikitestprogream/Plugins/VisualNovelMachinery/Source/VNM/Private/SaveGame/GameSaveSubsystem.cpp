// Copyright (c) 2022 Al_Fe


#include "GameSaveSubsystem.h"

#include "Character3DControllerComponent.h"
#include "MemoryControllerComponent.h"
#include "CharacterControllerComponent.h"
#include "DialogControllerComponent.h"
#include "DialogImageControllerComponent.h"
#include "DialogSceneControllerComponent.h"
#include "HighResScreenshot.h"
#include "ImageUtils.h"
#include "VNMModule.h"
#include "VNMSettings.h"
#include "GameFramework/HUD.h"
#include "Kismet/GameplayStatics.h"
#include "JsonObjectConverter.h"
#include "VNMUISettings.h"
#include "Framework/Application/SlateApplication.h"
#include "Engine/Engine.h"
#include "Engine/GameViewportClient.h"
#include "Engine/GameInstance.h"
#include "TimerManager.h"

void UGameSaveSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	SaveGameScreenshot.Width = 512;
	SaveGameScreenshot.Height = 488;
	
	LoadPersistantSaveGame();
}

void UGameSaveSubsystem::StartAutoSaveTimer()
{
	if (AutoSaveTimer.IsValid())
	{
		return;
	}
	
	auto* Settings = UVNMSettings::GetVNMSettings();

	if (Settings->Settings.AutoSaveType == EAutoSaveType::AUTOMATIC)
	{
		GetGameInstance()->GetWorld()->GetTimerManager().SetTimer(AutoSaveTimer, this, &UGameSaveSubsystem::OnAutoSaveTick, Settings->Settings.AutoSaveIntervalInSeconds, true);
	}
	
}

void UGameSaveSubsystem::StopAutoSaveTimer()
{
	GetGameInstance()->GetWorld()->GetTimerManager().ClearTimer(AutoSaveTimer);
}

FSaveGameMetaData UGameSaveSubsystem::GetSaveGameMetaDataBySlotIndex(const int32 SlotIndex)
{
	if (PersistantSaveGameObject->SaveGameMetaDatas.IsValidIndex(SlotIndex-1))
	{
		return PersistantSaveGameObject->SaveGameMetaDatas[SlotIndex-1];
	}

	return FSaveGameMetaData();
}

FSaveGameMetaData UGameSaveSubsystem::GetAutoSaveGameMetaDataBySlotIndex(const int32 SlotIndex)
{
	if (PersistantSaveGameObject->AutoSaveGameMetaDatas.IsValidIndex(SlotIndex-1))
	{
		return PersistantSaveGameObject->AutoSaveGameMetaDatas[SlotIndex-1];
	}

	return FSaveGameMetaData();
}

int32 UGameSaveSubsystem::GetCurrentlyUsedSaveSlotsCount() const
{
	return PersistantSaveGameObject->SaveGameMetaDatas.Num();
}

int32 UGameSaveSubsystem::GetCurrentlyUsedAutoSaveSlotsCount() const
{
	return PersistantSaveGameObject->AutoSaveGameMetaDatas.Num();
}

void UGameSaveSubsystem::CreateScreenShotForSaveGame()
{
	FIntVector Size;
	TArray<FColor> Colors;

	FSlateApplication::Get().TakeScreenshot( GEngine->GameViewport->GetWindow().ToSharedRef(), Colors, Size);
	FImageUtils::ImageResize(Size.X, Size.Y, Colors, SaveGameScreenshot.Width, SaveGameScreenshot.Height, SaveGameScreenshot.Colors, false);
}

FSaveGameScreenshot UGameSaveSubsystem::GetLatestSaveGameScreenshot() const
{
	return SaveGameScreenshot;
}

UVNMBaseSaveGame* UGameSaveSubsystem::PrepareSaveGameObject()
{
	auto* VNMSettings = UVNMSettings::GetVNMSettings();
	SaveGameObject = Cast<UVNMBaseSaveGame>(UGameplayStatics::CreateSaveGameObject(VNMSettings->Settings.SaveGameClass));

	if (!SaveGameObject)
	{
		UE_LOG(LogVNM, Error, TEXT("UGameSaveSubsystem::PrepareSaveGameObject: SaveGame could not be created! Did you set the Save Game class in the settings?"))
		return nullptr;
	}

	auto* PlayerController = UGameplayStatics::GetPlayerController(GetGameInstance(), 0);

	if (!PlayerController)
	{
		SaveGameObject = nullptr;
		UE_LOG(LogVNM, Error, TEXT("UGameSaveSubsystem::PrepareSaveGameObject: No player controller could be found! Are you currently in level transition?"))
		return nullptr;
	}

	auto* Hud = PlayerController->GetHUD();
	
	if (!Hud)
	{
		SaveGameObject = nullptr;
		UE_LOG(LogVNM, Error, TEXT("UGameSaveSubsystem::PrepareSaveGameObject: No HUD could be found!"))
		return nullptr;
	}

	auto* DialogController = Hud->FindComponentByClass<UDialogControllerComponent>();
	auto* DialogImageController = Hud->FindComponentByClass<UDialogImageControllerComponent>();
	auto* CharacterController = Hud->FindComponentByClass<UCharacterControllerComponent>();
	auto* Character3DController = PlayerController->FindComponentByClass<UCharacter3DControllerComponent>();
	auto* DialogSceneController = PlayerController->FindComponentByClass<UDialogSceneControllerComponent>();
	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!DialogController)
	{
		SaveGameObject = nullptr;
		UE_LOG(LogVNM, Error, TEXT("UGameSaveSubsystem::PrepareSaveGameObject: DialogController not found!"))
		return nullptr;
	}
	
	if (CharacterController)
	{
		SaveGameObject->Snapshot.ActiveDialogData.CharactersDisplayed = CharacterController->GetDialogData();
		SaveGameObject->Snapshot.RenamedCharacters = CharacterController->GetRenamedCharacters();
	}
	
	if (Character3DController)
	{
		SaveGameObject->Snapshot.ActiveDialogData.Characters3DDisplayed = Character3DController->GetDialogData();
	}
	
	if (DialogImageController)
	{
		SaveGameObject->Snapshot.ActiveDialogData.CgDisplayed = DialogImageController->CollectCgDialogData();
		SaveGameObject->Snapshot.ActiveDialogData.SceneBackgroundDisplayed = DialogImageController->CollectSceneBackgroundDialogData();
	}
	
	if (DialogSceneController)
	{
		SaveGameObject->Snapshot.ActiveDialogData.CurrentDialogScene = DialogSceneController->CollectDialogSceneData();
	}

	if (MemoryController)
	{
		SaveGameObject->Snapshot.CharacterMemories = MemoryController->GetCharacterMemoryData();
		SaveGameObject->Snapshot.DialogMemories = MemoryController->GetDialogMemoryData();
	}
	
	SaveGameObject->Snapshot.ActiveDialogData.bIsDialogBoxVisible = DialogController->IsDialogBoxVisible();
	SaveGameObject->Snapshot.ActiveDialogData.bIsDialogBoxVisibilityInAutoMode = DialogController->IsDialogBoxInAutoMode();
	SaveGameObject->Snapshot.ActiveDialogData.NodeToContinueGUID = DialogController->GetActiveDialogNodeGUID();
	SaveGameObject->Snapshot.ActiveDialogData.DialogObjectToContinueIn = VNMSettings->GetDialogDefinitionByClass(DialogController->GetActiveDialogClass()).DialogueId;
	SaveGameObject->Snapshot.ActiveDialogData.LastDialogTextDisplayedAtChoice = DialogController->GetCurrentDialogText();
	SaveGameObject->Snapshot.ActiveDialogData.LastTalkingCharacterIdAtChoice = DialogController->GetCurrentTalkingCharacterId();
	SaveGameObject->Snapshot.ActiveDialogData.LocalVariablesValuesJson = DialogController->GrabLocalVariablesJsonFromDialogObject(DialogController->GetActiveDialog());

	UE_LOG(LogVNM, Log, TEXT("%s"), *SaveGameObject->Snapshot.ActiveDialogData.LocalVariablesValuesJson);

	OnSaveGamePrepared.Broadcast(SaveGameObject);
	
	return SaveGameObject;
}

bool UGameSaveSubsystem::AutoSaveGame(const int32 AutoSaveSlotIndex)
{
	FString SaveGameName;

	AutoSaveGameInternal(AutoSaveSlotIndex, FDateTime::Now().ToIso8601());
	
	return true;
}

bool UGameSaveSubsystem::SaveGame(const int32 SaveSlotIndex)
{
	CurrentSaveSlotIndex = SaveSlotIndex;
	if (GetSaveGameMetaDataBySlotIndex(CurrentSaveSlotIndex).IsValid())
	{
		auto* Settings = UVNMUISettings::Get();

		auto* PopUpWidget = CreateWidget<UVNMBasePopUpWidget>(GetGameInstance(), Settings->SimplePopUpClass);

		if (PopUpWidget)
		{
			PopUpWidget->SetupPopUp(
				NSLOCTEXT("VNM", "VNMOverwriteSaveTitle", "Overwrite Save"),
				NSLOCTEXT("VNM", "VNMOverwriteSaveDescription", "Do you want to overwrite this save slot?"));

			PopUpWidget->OnPopUpClose.AddUniqueDynamic(this, &UGameSaveSubsystem::OnOverwritePopUpResult);
				
			PopUpWidget->ShowPopUp();
			return true;
		}
	}

	FString SaveGameName;

	auto* VNMSettings = UVNMSettings::GetVNMSettings();

	if (VNMSettings->Settings.bGenerateSaveFileName)
	{
		SaveGameInternal(CurrentSaveSlotIndex, FDateTime::Now().ToIso8601());
	}
	else
	{
		auto* Settings = UVNMUISettings::Get();

		auto* PopUpWidget = CreateWidget<UVNMBaseTextBoxPopUpWidget>(GetGameInstance(), Settings->TextBoxPopUpClass);

		if (PopUpWidget)
		{
			PopUpWidget->SetupPopUp(
				NSLOCTEXT("VNM", "VNMOverwriteSaveTitle", "Name Save Slot"),
				NSLOCTEXT("VNM", "VNMOverwriteSaveDescription", "What is the name of this save slot?"));

			PopUpWidget->OnPopUpText.AddUniqueDynamic(this, &UGameSaveSubsystem::OnSaveGameNameReceived);
				
			PopUpWidget->ShowPopUp();
			return true;
		}
	}

	
	return true;
}

bool UGameSaveSubsystem::SavePersistantData()
{
	if (!UGameplayStatics::SaveGameToSlot(PersistantSaveGameObject, "Persistant", 0))
	{
		UE_LOG(LogVNM, Error, TEXT("UGameSaveSubsystem::SavePersistantData: Failed to save persistant data!"));
		return false;
	}
	
	return true;
}

bool UGameSaveSubsystem::LoadGame(const int32 SaveSlotIndex)
{
	bIsLoading = true;
	SaveGameObject = Cast<UVNMBaseSaveGame>(UGameplayStatics::LoadGameFromSlot(FString::Printf(TEXT("SaveGame%d"), SaveSlotIndex), 0));
	if (!SaveGameObject)
	{
		bIsLoading = false;
		UE_LOG(LogVNM, Error, TEXT("UGameSaveSubsystem::LoadGame: Failed to load game!"));
		OnGameLoaded.Broadcast(false);
		return false;
	}

	OnGameLoaded.Broadcast(true);
	return true;
}

bool UGameSaveSubsystem::LoadAutoSaveGame(const int32 AutoSaveSlotIndex)
{
	bIsLoading = true;
	SaveGameObject = Cast<UVNMBaseSaveGame>(UGameplayStatics::LoadGameFromSlot(FString::Printf(TEXT("AutoSaveGame%d"), AutoSaveSlotIndex), 0));
	if (!SaveGameObject)
	{
		bIsLoading = false;
		UE_LOG(LogVNM, Error, TEXT("UGameSaveSubsystem::LoadGame: Failed to load game!"));
		OnGameLoaded.Broadcast(false);
		return false;
	}

	OnGameLoaded.Broadcast(true);
	return true;
}

bool UGameSaveSubsystem::DeleteSaveGame(const FString& SlotName)
{
	SaveFileToDelete = SlotName;

	auto* Settings = UVNMSettings::GetVNMSettings();

	if (Settings->Settings.bConfirmBeforeDeletingSaveFile)
	{	
		auto* UISettings = UVNMUISettings::Get();

		auto* PopUpWidget = CreateWidget<UVNMBasePopUpWidget>(GetGameInstance(), UISettings->SimplePopUpClass);

		if (PopUpWidget)
		{
			PopUpWidget->SetupPopUp(
				NSLOCTEXT("VNM", "VNMDeleteSaveTitle", "Delete Save"),
				NSLOCTEXT("VNM", "VNMOverwriteSaveDescription", "Do you really want to delete this save?"));

			PopUpWidget->OnPopUpClose.AddUniqueDynamic(this, &UGameSaveSubsystem::OnConfirmDeleteSavePopUpResult);
				
			PopUpWidget->ShowPopUp();
			return true;
		}
	}
	else
	{
		DeleteSaveGameInternal(SaveFileToDelete);
		return true;
	}

	return false;
}

void UGameSaveSubsystem::OnOverwritePopUpResult(const EPopUpResult Result)
{
	if (Result == EPopUpResult::Confirm)
	{
		auto* VNMSettings = UVNMSettings::GetVNMSettings();
		if (VNMSettings->Settings.bGenerateSaveFileName)
		{
			SaveGameInternal(CurrentSaveSlotIndex, FDateTime::Now().ToIso8601());
		}
		else
		{
			auto* Settings = UVNMUISettings::Get();

			auto* PopUpWidget = CreateWidget<UVNMBaseTextBoxPopUpWidget>(GetGameInstance(), Settings->TextBoxPopUpClass);

			if (PopUpWidget)
			{
				PopUpWidget->SetupPopUp(
					NSLOCTEXT("VNM", "VNMOverwriteSaveTitle", "Name Save Slot"),
					NSLOCTEXT("VNM", "VNMOverwriteSaveDescription", "What is the name of this save slot?"));

				PopUpWidget->OnPopUpText.AddUniqueDynamic(this, &UGameSaveSubsystem::OnSaveGameNameReceived);
				
				PopUpWidget->ShowPopUp();
				return;
			}
		}
	}
}

void UGameSaveSubsystem::OnConfirmDeleteSavePopUpResult(const EPopUpResult Result)
{
	if (Result == EPopUpResult::Confirm)
	{
		DeleteSaveGameInternal(SaveFileToDelete);
	}
}

void UGameSaveSubsystem::OnSaveGameNameReceived(const FString& SaveFileName)
{
	SaveGameInternal(CurrentSaveSlotIndex, SaveFileName);
}

void UGameSaveSubsystem::OnAutoSaveTick()
{
	CreateScreenShotForSaveGame();
	PrepareSaveGameObject();
	AutoSaveGame(1);
}

void UGameSaveSubsystem::SaveGameInternal(const int32 SaveSlotIndex, const FString& SaveGameName)
{
	const FString SaveName = FString::Printf(TEXT("SaveGame%d"), SaveSlotIndex);
	if (!UGameplayStatics::SaveGameToSlot(SaveGameObject, SaveName, 0))
	{
		UE_LOG(LogVNM, Error, TEXT("UGameSaveSubsystem::SaveGame: Failed to save game!"));
		OnGameSaved.Broadcast(false);
		return;
	}

	SaveGameObject = nullptr;

	if (!PersistantSaveGameObject->SaveGameMetaDatas.IsValidIndex(SaveSlotIndex-1))
	{
		PersistantSaveGameObject->SaveGameMetaDatas.SetNum(SaveSlotIndex);
	}
	
	PersistantSaveGameObject->SaveGameMetaDatas[SaveSlotIndex-1].SlotIndex = SaveSlotIndex;
	PersistantSaveGameObject->SaveGameMetaDatas[SaveSlotIndex-1].Screenshot = SaveGameScreenshot;
	PersistantSaveGameObject->SaveGameMetaDatas[SaveSlotIndex-1].SaveName = SaveGameName;
	PersistantSaveGameObject->SaveGameMetaDatas[SaveSlotIndex-1].SaveFileName = SaveName;
	
	SavePersistantData();

	OnGameSaved.Broadcast(true);
}

void UGameSaveSubsystem::AutoSaveGameInternal(const int32 SaveSlotIndex, const FString& SaveGameName)
{
	const FString SaveName = FString::Printf(TEXT("AutoSaveGame%d"), SaveSlotIndex);
	if (!UGameplayStatics::SaveGameToSlot(SaveGameObject, SaveName, 0))
	{
		UE_LOG(LogVNM, Error, TEXT("UGameSaveSubsystem::AutoSaveGame: Failed to save game!"));
		OnAutoGameSaved.Broadcast(false);
		return;
	}

	SaveGameObject = nullptr;

	if (!PersistantSaveGameObject->AutoSaveGameMetaDatas.IsValidIndex(SaveSlotIndex-1))
	{
		PersistantSaveGameObject->AutoSaveGameMetaDatas.SetNum(SaveSlotIndex);
	}
	
	PersistantSaveGameObject->AutoSaveGameMetaDatas[SaveSlotIndex-1].SlotIndex = SaveSlotIndex;
	PersistantSaveGameObject->AutoSaveGameMetaDatas[SaveSlotIndex-1].Screenshot = SaveGameScreenshot;
	PersistantSaveGameObject->AutoSaveGameMetaDatas[SaveSlotIndex-1].SaveName = SaveGameName;
	PersistantSaveGameObject->AutoSaveGameMetaDatas[SaveSlotIndex-1].SaveFileName = SaveName;
	
	SavePersistantData();

	OnAutoGameSaved.Broadcast(true);
}

void UGameSaveSubsystem::DeleteSaveGameInternal(const FString& SlotName)
{
	if (!UGameplayStatics::DoesSaveGameExist(SlotName, 0))
	{
		UE_LOG(LogVNM, Error, TEXT("UGameSaveSubsystem::DeleteSaveGame: Save file doesn't exist!"));
		OnSaveGameDeleted.Broadcast(false);
		return;
	}
	
	if (!UGameplayStatics::DeleteGameInSlot(SlotName, 0))
	{
		UE_LOG(LogVNM, Error, TEXT("UGameSaveSubsystem::SaveGame: Failed to delete save game!"));
		OnSaveGameDeleted.Broadcast(false);
		return;
	}

	PersistantSaveGameObject->SaveGameMetaDatas.RemoveAll([SlotName](const FSaveGameMetaData& MetaData)
	{
		return MetaData.SaveFileName == SlotName;
	});
	SavePersistantData();
	
	OnSaveGameDeleted.Broadcast(true);
}

void UGameSaveSubsystem::LoadPersistantSaveGame()
{
	PersistantSaveGameObject = Cast<UVNMBasePersistantSaveGame>(UGameplayStatics::LoadGameFromSlot("Persistant", 0));

	if (!PersistantSaveGameObject)
	{
		auto* VNMSettings = UVNMSettings::GetVNMSettings();
		PersistantSaveGameObject = Cast<UVNMBasePersistantSaveGame>(UGameplayStatics::CreateSaveGameObject(VNMSettings->Settings.PersistantSaveGameClass));
		
		if (!PersistantSaveGameObject)
		{
			UE_LOG(LogVNM, Error, TEXT("UGameSaveSubsystem::PrepareSaveGameObject: PersistantSaveGame could not be created! Did you set the Persistant Save Game class in the settings?"))
		}

		SavePersistantData();
	}
}
