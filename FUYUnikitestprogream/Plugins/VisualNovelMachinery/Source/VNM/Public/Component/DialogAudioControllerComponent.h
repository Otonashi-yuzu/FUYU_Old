// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseControllerComponent.h"
#include "VNMControlStructs.h"
#include "Engine/LatentActionManager.h"
#include "DialogAudioControllerComponent.generated.h"

UENUM()
enum class EDialogAudioType : uint8
{
	Invalid,
	Background_Music,
	Sound_Effect,
	Voice_Over UMETA(Hidden)
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VNM_API UDialogAudioControllerComponent : public UBaseControllerComponent
{
	GENERATED_BODY()

public:
	virtual void PlayBackgroundMusic(FPlayDialogAudioBackgroundMusicData PlayDialogAudioData, const FLatentActionInfo& LatentInfo);
	virtual void PlaySoundEffect(FPlayDialogAudioData PlayDialogAudioData, const FLatentActionInfo& LatentInfo);
	virtual void PlayDialogVoiceOver(FPlayDialogAudioDialogVoiceOverData PlayDialogAudioDialogVoiceOverData, const FLatentActionInfo& LatentInfo);
	virtual void PlayCharacterVoiceOver(FPlayDialogAudioCharacterVoiceOverData PlayDialogAudioCharacterVoiceOverData, const FLatentActionInfo& LatentInfo);

	virtual void StopBackgroundMusic(FStopDialogAudioData StopDialogAudioData);
	virtual void StopSoundEffect(FStopDialogAudioData StopDialogAudioData);
	virtual void StopVoiceOver(FStopDialogAudioData StopDialogAudioData);

protected:
	virtual void SetupControllerComponent() override;
	void PlayAudioInternal(const FPlayDialogAudioData& PlayDialogAudioData);
	void PlayVoiceOverInternal(const FPlayDialogAudioData& PlayDialogAudioData, const struct FVoiceOverDefinition& VoiceOverDefinition);
	void StopAudioInternal(const EDialogAudioType DialogAudioType, const FStopDialogAudioData& StopDialogAudioData);

	void OnAudioFinished(class UAudioComponent* AudioComponent);
	void OnAudioFinishedNeedsLooping(class UAudioComponent* AudioComponent);

	UPROPERTY()
	TMap<EDialogAudioType, class UAudioComponent*> AudioComponents;

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
