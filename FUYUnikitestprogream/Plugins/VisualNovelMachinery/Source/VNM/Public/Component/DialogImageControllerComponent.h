// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "BaseCgDisplayWidget.h"
#include "BaseControllerComponent.h"
#include "BaseSceneBackgroundDisplayWidget.h"
#include "DialogControllerComponent.h"
#include "Components/ActorComponent.h"
#include "DialogImageControllerComponent.generated.h"


UCLASS( Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VNM_API UDialogImageControllerComponent : public UBaseControllerComponent
{
	GENERATED_BODY()

public:
	UDialogImageControllerComponent();
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void SetupControllerComponent() override;
	virtual bool ApplySnapshot(const FGameSnapshot& Snapshot) override;

	FDialogImageData CollectCgDialogData();
	FDialogImageData CollectSceneBackgroundDialogData();

	void ShowCG(const FShowCgData& ShowCgData, FLatentActionInfo LatentInfo);
	void AddLayerToCg(const FAddLayerToCgData& AddLayerToCgData, const FLatentActionInfo& LatentInfo);
	void RemoveLayerFromCg(const FRemoveLayerFromCgData& RemoveLayerFromCgData, const FLatentActionInfo& LatentInfo);
	void HideCG(const FHideCgData& HideCgData, FLatentActionInfo LatentInfo);
	void PlayCgAnimation(const FPlayCgAnimationData& PlayCgAnimationData, FLatentActionInfo LatentInfo);

	void ShowSceneBackground(const FShowSceneBackgroundData& ShowSceneBackgroundData, FLatentActionInfo LatentInfo);
	void AddLayerToSceneBackground(const FAddLayerToSceneBackgroundData& AddLayerToSceneBackgroundData, const FLatentActionInfo& LatentInfo);
	void RemoveLayerFromSceneBackground(const FRemoveLayerFromSceneBackgroundData& RemoveLayerFromSceneBackgroundData, const FLatentActionInfo& LatentInfo);
	void HideSceneBackground(const FHideSceneBackgroundData& HideSceneBackgroundData, FLatentActionInfo LatentInfo);
	void PlaySceneBackgroundAnimation(const FPlaySceneBackgroundAnimationData& PlaySceneBackgroundAnimationData, FLatentActionInfo LatentInfo);

protected:
	
	void HideCGInternal();
	void HideSceneBackgroundInternal();

	UFUNCTION()
	void OnTransitionComplete();	

	UFUNCTION()
    void OnDialogStarted(UDialogObject* StartedDialog);

	UFUNCTION()
	void OnDialogEnded(UDialogObject* EndedDialog);

	UPROPERTY()
	bool bIsCurrentlyHidingCG = false;
	
	UPROPERTY()
	bool bIsCurrentlyHidingSceneBackground = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Functionality)
	TSubclassOf<UBaseCgDisplayWidget> CgDisplayWidgetClass;

	UPROPERTY(BlueprintReadOnly, Category=Functionality)
	UBaseCgDisplayWidget* CgDisplayWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Functionality)
	TSubclassOf<UBaseSceneBackgroundDisplayWidget> SceneBackgroundDisplayWidgetClass;

	UPROPERTY(BlueprintReadOnly, Category=Functionality)
	UBaseSceneBackgroundDisplayWidget* SceneBackgroundDisplayWidget;

	UDialogControllerComponent* DialogControllerComponent;

	FDialogImageData ActiveDialogActiveCg;
	FDialogImageData ActiveDialogActiveSceneBackground;
	
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
