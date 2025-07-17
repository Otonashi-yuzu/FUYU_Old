// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "DialogControllerComponent.h"
#include "DialogSceneControllerComponent.h"
#include "VNMCharacterSpawnLocation.h"
#include "VNMControlStructs.h"
#include "BaseControllerComponent.h"
#include "Character3DControllerComponent.generated.h"

UCLASS( Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VNM_API UCharacter3DControllerComponent : public UBaseControllerComponent
{
	GENERATED_BODY()

public:	
	UCharacter3DControllerComponent();

	virtual void BeginPlay() override;
	virtual void SetupControllerComponent() override;
	virtual bool ApplySnapshot(const FGameSnapshot& Snapshot) override;

	TArray<FCharacter3DDisplayedData> GetDialogData();
	
	void ShowCharacter3D(const FShowCharacter3DData& ShowCharacterData, const FLatentActionInfo& LatentInfo);
	void HideCharacter3D(const FHideCharacter3DData& HideCharacterData, const FLatentActionInfo& LatentInfo);

protected:

	UFUNCTION()
	void OnDialogSceneChanged(const FName& DialogSceneId);
	
	UFUNCTION()
	void OnDialogStarted(UDialogObject* StartedDialogObject);
	
	UFUNCTION()
	void OnDialogEnded(UDialogObject* EndedDialogObject);
	
	UPROPERTY()
	UDialogControllerComponent* DialogControllerComponent;
	
	UPROPERTY()
	UDialogSceneControllerComponent* DialogSceneControllerComponent;
	
	UPROPERTY()
	TMap<FName,AVNMCharacterSpawnLocation*> CharacterSpawnLocations;

	UPROPERTY()
	TMap<FName, FName> CharactersAtLocation; // Character Id to Spawn Location

	UPROPERTY()
	UGameSaveSubsystem* SaveGameSubsystem;
	
	UPROPERTY()
	bool bRestoreCharactersAfterLoad = false;

	UPROPERTY()
	FGameSnapshot SnapshotToApply;

	struct FLatentExecutor
	{
		UObject* TargetToReturnTo;
		UFunction* FunctionToCall;
		int32 Linkage;

		void Setup(const FLatentActionInfo& LatentInfo);
		void ProcessEvent();
	};

	FLatentExecutor LatentExecutor;
};
