// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "BaseControllerComponent.h"
#include "DialogObject.h"
#include "GameSaveSubsystem.h"
#include "VNMBaseSaveGame.h"
#include "VNMControlStructs.h"
#include "CineCameraActor.h"
#include "Components/ActorComponent.h"
#include "Engine/LatentActionManager.h"
#include "DialogSceneControllerComponent.generated.h"


class UDialogControllerComponent;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VNM_API UDialogSceneControllerComponent : public UBaseControllerComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDialogSceneControllerComponent();

	virtual void InitializeComponent() override;

	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void SetupControllerComponent() override;

	virtual bool ApplySnapshot(const FGameSnapshot& Snapshot) override;

	
	FDialogSceneData CollectDialogSceneData();

	void ShowDialogScene(const FShowDialogSceneData& ShowDialogSceneData, FLatentActionInfo LatentInfo);
	void HideDialogScene(const FHideDialogSceneData& HideDialogSceneData, FLatentActionInfo LatentInfo);
	void SwitchToCamera(const FSwitchToCameraData& SwitchToCameraData, FLatentActionInfo LatentInfo);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogSceneChanged, const FName&, DialogSceneId);

	UPROPERTY(BlueprintAssignable)
	FOnDialogSceneChanged OnDialogSceneChanged;

protected:

	UFUNCTION()
	void OnShowDialogSceneComplete();

	UFUNCTION()
	void OnHideDialogSceneComplete();

	UFUNCTION()
	void OnCameraTransitionComplete();
	
	UFUNCTION()
	void OnDialogStarted(UDialogObject* DialogObject);
	UFUNCTION()
	void OnDialogEnded(UDialogObject* DialogObject);
	
	struct FLatentExecutor
	{
		UObject* TargetToReturnTo;
		UFunction* FunctionToCall;
		int32 Linkage;

		void Setup(const FLatentActionInfo& LatentInfo);
		void ProcessEvent();
	};

	FLatentExecutor LatentExecutor;

	FTimerHandle CameraBlendTimerHandle;

	UPROPERTY()
	TSubclassOf<ACameraActor> CameraClass;

	UPROPERTY()
	UDialogControllerComponent* DialogControllerComponent;

	UPROPERTY()
	FName CurrentDialogSceneId;

	UPROPERTY()
	FName CurrentCameraName;

	UPROPERTY()
	FName CameraToSwitchToOnLoad;

	UPROPERTY()
	FDialogSceneData ActiveDialogScene;
	
	UPROPERTY()
	TMap<FName, AActor*> CameraActors;

	UPROPERTY()
	UGameSaveSubsystem* SaveGameSubsystem;
};
