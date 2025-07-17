// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "BaseCharacterDisplayWidget.h"
#include "DialogControllerComponent.h"
#include "VNMBaseSaveGame.h"
#include "BaseControllerComponent.h"
#include "CharacterControllerComponent.generated.h"


UCLASS( Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VNM_API UCharacterControllerComponent : public UBaseControllerComponent
{
	GENERATED_BODY()

public:
	UCharacterControllerComponent();
	
	virtual void BeginPlay() override;
	virtual void SetupControllerComponent() override;
	virtual bool ApplySnapshot(const FGameSnapshot& Snapshot) override;

	TArray<FCharacterDisplayedData> GetDialogData();
	TMap<FName, FString> GetRenamedCharacters() const;
	
	void ShowCharacter(const FShowCharacterData& ShowCharacterData, const FLatentActionInfo& LatentInfo);
	void AddLayerToCharacter(const FAddLayerToCharacterData& AddLayerToCharacterData, const FLatentActionInfo& LatentInfo);
	void MoveCharacter(const FMoveCharacterData& MoveCharacterData, const FLatentActionInfo& LatentInfo);
	void RemoveLayerFromCharacter(const FRemoveLayerFromCharacterData& RemoveLayerFromCharacterData, const FLatentActionInfo& LatentInfo);
	void HideCharacter(const FHideCharacterData& HideCharacterData, const FLatentActionInfo& LatentInfo);
	void PlayCharacterAnimation(const FPlayCharacterAnimationData& PlayCharacterAnimationData, const FLatentActionInfo& LatentInfo);

	void AddRenamedCharacter(const FName& CharacterId, const FString& NewName);
	FText GetCharacterNameById(const FName& CharacterId);
	FText GetCharacterNameByDefinition(const FCharacterDefinition& CharacterDefinition);
protected:

	void ClearAllCharactersAndRemoveFromView();
	
	void HideCharacterInternal(const FName& CharacterId);

	UFUNCTION()
	void OnDialogStarted(UDialogObject* StartedDialog);

	UFUNCTION()
	void OnDialogEnded(UDialogObject* EndedDialog);
	
	UDialogControllerComponent* DialogControllerComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Functionality)
	TSubclassOf<UBaseCharacterDisplayWidget> CharacterDisplayWidgetClass;

	UPROPERTY(BlueprintReadOnly, Category=Functionality)
	TMap<FName, UBaseCharacterDisplayWidget*> CharacterDisplayWidgets;

	UFUNCTION()
	void OnTransitionComplete();

	UFUNCTION()
	void OnMidTransitionReached();

	UPROPERTY(Transient)
	FName NextCharacterId;

	UPROPERTY(Transient)
	FName NextEmotionId;

	UPROPERTY(Transient)
	FName CharacterIdToHide;

	UPROPERTY(Transient)
	bool bIsCurrentlyHiding;

	UPROPERTY(Transient)
	TMap<FName, FString> RenamedCharacters;

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


