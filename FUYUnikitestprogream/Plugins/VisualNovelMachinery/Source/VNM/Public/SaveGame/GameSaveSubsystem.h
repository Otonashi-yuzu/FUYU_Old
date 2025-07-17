// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "VNMBasePersistantSaveGame.h"

#include "VNMBaseSaveGame.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameSaveSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class VNM_API UGameSaveSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveGamePrepared, UVNMBaseSaveGame*, SaveGame);

	UPROPERTY(BlueprintAssignable)
	FOnSaveGamePrepared OnSaveGamePrepared;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameSaved, const bool, bWasSuccessful);

	UPROPERTY(BlueprintAssignable)
	FOnGameSaved OnGameSaved;

	UPROPERTY(BlueprintAssignable)
	FOnGameSaved OnAutoGameSaved;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameLoaded, const bool, bWasSuccessful);

	UPROPERTY(BlueprintAssignable)
	FOnGameLoaded OnGameLoaded;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveGameDeleted, const bool, bWasSuccessful);

	UPROPERTY(BlueprintAssignable)
	FOnSaveGameDeleted OnSaveGameDeleted;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	void StartAutoSaveTimer();

	void StopAutoSaveTimer();

	UFUNCTION(BlueprintPure, Category="Save System")
	FSaveGameMetaData GetSaveGameMetaDataBySlotIndex(const int32 SlotIndex);

	UFUNCTION(BlueprintPure, Category="Save System")
	FSaveGameMetaData GetAutoSaveGameMetaDataBySlotIndex(const int32 SlotIndex);

	UFUNCTION(BlueprintPure, Category="Save System")
	int32 GetCurrentlyUsedSaveSlotsCount() const;

	UFUNCTION(BlueprintPure, Category="Save System")
	int32 GetCurrentlyUsedAutoSaveSlotsCount() const;

	UFUNCTION(BlueprintCallable, Category="Save System")
	void CreateScreenShotForSaveGame();

	UFUNCTION(BlueprintCallable, Category="Save System")
	FSaveGameScreenshot GetLatestSaveGameScreenshot() const;

	// Prepares the Save Game Object so that it can be filled up with custom data before calling SaveGame()
	UFUNCTION(BlueprintCallable, Category="Save System")
	UVNMBaseSaveGame* PrepareSaveGameObject();

	// Saves the current auto save data to disk
	UFUNCTION(BlueprintCallable, Category="Save System")
	bool AutoSaveGame(const int32 AutoSaveSlotIndex = 1);

	// Saves the current save data to disk
	UFUNCTION(BlueprintCallable, Category="Save System")
	bool SaveGame(const int32 SaveSlotIndex = 1);
	
	// Saves the persistent save data to disk
	UFUNCTION(BlueprintCallable, Category="Save System")
	bool SavePersistantData();

	// loads the current save file
	UFUNCTION(BlueprintCallable, Category="Save System")
	bool LoadGame(const int32 SaveSlotIndex = 1);

	// loads the current save file
	UFUNCTION(BlueprintCallable, Category="Save System")
	bool LoadAutoSaveGame(const int32 AutoSaveSlotIndex = 1);

	// loads the current save file
	UFUNCTION(BlueprintCallable, Category="Save System")
	bool DeleteSaveGame(const FString& SlotName);
	
	bool IsCurrentlyLoading() const { return bIsLoading; }

	UVNMBaseSaveGame* GetSaveGame() { return SaveGameObject; }

	UVNMBasePersistantSaveGame* GetPersistantSaveGame() { return PersistantSaveGameObject; }

	// Used to clear the loading flag after transitioning to a new level after initiating a load
	UFUNCTION(BlueprintCallable, Category="Save System")
	void ClearLoadingFlag() { bIsLoading = false; }

protected:

	UFUNCTION()
	void OnOverwritePopUpResult(const EPopUpResult Result);
	
	UFUNCTION()
	void OnConfirmDeleteSavePopUpResult(const EPopUpResult Result);

	UFUNCTION()
	void OnSaveGameNameReceived(const FString& SaveFileName);

	UFUNCTION()
	void OnAutoSaveTick();

	void SaveGameInternal(const int32 SaveSlotIndex, const FString& SaveGameName);
	void AutoSaveGameInternal(const int32 SaveSlotIndex, const FString& SaveGameName);
	void DeleteSaveGameInternal(const FString& SlotName);

	void LoadPersistantSaveGame();

	FSaveGameScreenshot SaveGameScreenshot;
	
	UPROPERTY(BlueprintReadOnly, Category="Save System")
	bool bIsLoading;

	UPROPERTY(BlueprintReadOnly, Category="Save System")
	UVNMBaseSaveGame* SaveGameObject;
	
	UPROPERTY(BlueprintReadOnly, Category="Save System")
	int32 CurrentSaveSlotIndex;
	
	UPROPERTY(BlueprintReadOnly, Category="Save System")
	FString SaveFileToDelete;

	UPROPERTY(BlueprintReadOnly, Category="Save System")
	UVNMBasePersistantSaveGame* PersistantSaveGameObject;
	
	FTimerHandle AutoSaveTimer;
};
