// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogAudioControllerComponent.h"

#include "VNMModule.h"
#include "VNMSettings.h"
#include "Components/AudioComponent.h"


void UDialogAudioControllerComponent::PlayBackgroundMusic(FPlayDialogAudioBackgroundMusicData PlayDialogAudioData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	PlayAudioInternal(PlayDialogAudioData);

	if (PlayDialogAudioData.bIsLooping)
	{
		AudioComponents[EDialogAudioType::Background_Music]->OnAudioFinishedNative.AddUObject(this, &UDialogAudioControllerComponent::OnAudioFinishedNeedsLooping);
	}

	if (!PlayDialogAudioData.bWaitForAudioToFinish)
	{
		LatentExecutor.ProcessEvent();
	}
}

void UDialogAudioControllerComponent::PlaySoundEffect(FPlayDialogAudioData PlayDialogAudioData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}
	
	PlayAudioInternal(PlayDialogAudioData);

	if (!PlayDialogAudioData.bWaitForAudioToFinish)
	{
		LatentExecutor.ProcessEvent();
	}
}

void UDialogAudioControllerComponent::PlayDialogVoiceOver(FPlayDialogAudioDialogVoiceOverData PlayDialogAudioDialogVoiceOverData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}

	FVoiceOverDefinition VoiceOverDefinition = UVNMSettings::GetVNMSettings()->GetVoiceOverDefintionByDialogId(PlayDialogAudioDialogVoiceOverData.DialogId, PlayDialogAudioDialogVoiceOverData.DialogAudioId);

	if (!VoiceOverDefinition.IsValid())
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogAudioControllerComponent::PlayDialogVoiceOver: Character Voice Over doesn't exist!"));
		LatentExecutor.ProcessEvent();
		return;
	}
	
	PlayVoiceOverInternal(PlayDialogAudioDialogVoiceOverData, VoiceOverDefinition);

	if (!PlayDialogAudioDialogVoiceOverData.bWaitForAudioToFinish)
	{
		LatentExecutor.ProcessEvent();
	}
}

void UDialogAudioControllerComponent::PlayCharacterVoiceOver(FPlayDialogAudioCharacterVoiceOverData PlayDialogAudioCharacterVoiceOverData, const FLatentActionInfo& LatentInfo)
{
	if (LatentInfo.CallbackTarget)
	{
		LatentExecutor.Setup(LatentInfo);
	}

	FVoiceOverDefinition VoiceOverDefinition = UVNMSettings::GetVNMSettings()->GetVoiceOverDefintionByCharacterId(PlayDialogAudioCharacterVoiceOverData.CharacterId, PlayDialogAudioCharacterVoiceOverData.DialogAudioId);

	if (!VoiceOverDefinition.IsValid())
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogAudioControllerComponent::PlayCharacterVoiceOver: Character Voice Over doesn't exist!"));
		LatentExecutor.ProcessEvent();
		return;
	}
	
	PlayVoiceOverInternal(PlayDialogAudioCharacterVoiceOverData, VoiceOverDefinition);

	if (!PlayDialogAudioCharacterVoiceOverData.bWaitForAudioToFinish)
	{
		LatentExecutor.ProcessEvent();
	}
}

void UDialogAudioControllerComponent::StopBackgroundMusic(FStopDialogAudioData StopDialogAudioData)
{
	StopAudioInternal(EDialogAudioType::Background_Music, StopDialogAudioData);
}

void UDialogAudioControllerComponent::StopSoundEffect(FStopDialogAudioData StopDialogAudioData)
{
	StopAudioInternal(EDialogAudioType::Sound_Effect, StopDialogAudioData);
}

void UDialogAudioControllerComponent::StopVoiceOver(FStopDialogAudioData StopDialogAudioData)
{
	StopAudioInternal(EDialogAudioType::Voice_Over, StopDialogAudioData);
}

void UDialogAudioControllerComponent::SetupControllerComponent()
{
	bHasFinishedSetup = true;
}

void UDialogAudioControllerComponent::PlayAudioInternal(const FPlayDialogAudioData& PlayDialogAudioData)
{
	auto* Row = UVNMSettings::GetVNMSettings()->Settings.DialogAudioDefinitionsTable->FindRow<FDialogAudioDefinition>(PlayDialogAudioData.DialogAudioId, TEXT(""));

	if (!Row)
	{
		UE_LOG(LogVNM, Error, TEXT("UDialogAudioControllerComponent::PlayAudioInternal: Dialog Audio doesn't exist!"));
		return;
	}

	UAudioComponent* AudioComponent = nullptr;
	
	if (!AudioComponents.Contains(Row->AudioType))
	{
		AudioComponent = UGameplayStatics::CreateSound2D(this, Row->AudioObject, PlayDialogAudioData.Volume, PlayDialogAudioData.Pitch, PlayDialogAudioData.StartTime, nullptr, false, false);
		AudioComponents.Add(Row->AudioType, AudioComponent);
	}
	else
	{
		AudioComponent = AudioComponents[Row->AudioType];
		AudioComponent->OnAudioFinishedNative.RemoveAll(this);
		AudioComponent->Stop();
		AudioComponent->SetSound(Row->AudioObject);
		AudioComponent->SetVolumeMultiplier(PlayDialogAudioData.Volume);
		AudioComponent->SetPitchMultiplier(PlayDialogAudioData.Pitch);
	}

	if (PlayDialogAudioData.FadeTime > 0.f)
	{
		AudioComponent->FadeIn(PlayDialogAudioData.FadeTime, 1.f, PlayDialogAudioData.StartTime, PlayDialogAudioData.AudioFadeCurve);
	}
	else
	{
		AudioComponent->Play(PlayDialogAudioData.StartTime);
	}

	if (PlayDialogAudioData.bWaitForAudioToFinish)
	{
		AudioComponent->OnAudioFinishedNative.AddUObject(this, &UDialogAudioControllerComponent::OnAudioFinished);
	}
}

void UDialogAudioControllerComponent::PlayVoiceOverInternal(const FPlayDialogAudioData& PlayDialogAudioData, const FVoiceOverDefinition& VoiceOverDefinition)
{
	UAudioComponent* AudioComponent = nullptr;
	
	if (!AudioComponents.Contains(EDialogAudioType::Voice_Over))
	{
		AudioComponent = UGameplayStatics::CreateSound2D(this, VoiceOverDefinition.AudioObject, PlayDialogAudioData.Volume, PlayDialogAudioData.Pitch, PlayDialogAudioData.StartTime, nullptr, false, false);
		AudioComponents.Add(EDialogAudioType::Voice_Over, AudioComponent);
	}
	else
	{
		AudioComponent = AudioComponents[EDialogAudioType::Voice_Over];
		AudioComponent->OnAudioFinishedNative.RemoveAll(this);
		AudioComponent->Stop();
		AudioComponent->SetSound(VoiceOverDefinition.AudioObject);
		AudioComponent->SetVolumeMultiplier(PlayDialogAudioData.Volume);
		AudioComponent->SetPitchMultiplier(PlayDialogAudioData.Pitch);
	}

	if (PlayDialogAudioData.FadeTime > 0.f)
	{
		AudioComponent->FadeIn(PlayDialogAudioData.FadeTime, 1.f, PlayDialogAudioData.StartTime, PlayDialogAudioData.AudioFadeCurve);
	}
	else
	{
		AudioComponent->Play(PlayDialogAudioData.StartTime);
	}

	if (PlayDialogAudioData.bWaitForAudioToFinish)
	{
		AudioComponent->OnAudioFinishedNative.AddUObject(this, &UDialogAudioControllerComponent::OnAudioFinished);
	}
}

void UDialogAudioControllerComponent::StopAudioInternal(const EDialogAudioType DialogAudioType, const FStopDialogAudioData& StopDialogAudioData)
{
	UAudioComponent* AudioComponent = nullptr;
	
	if (!AudioComponents.Contains(DialogAudioType))
	{
		return;
	}
	
	AudioComponent = AudioComponents[DialogAudioType];

	AudioComponent->OnAudioFinishedNative.RemoveAll(this);

	if (StopDialogAudioData.FadeTime > 0.f)
	{
		AudioComponent->FadeOut(StopDialogAudioData.FadeTime, 0.f, StopDialogAudioData.AudioFadeCurve);
	}
	else
	{
		AudioComponent->Stop();
	}
}

void UDialogAudioControllerComponent::OnAudioFinished(UAudioComponent* AudioComponent)
{
	AudioComponent->OnAudioFinishedNative.RemoveAll(this);
	LatentExecutor.ProcessEvent();
}

void UDialogAudioControllerComponent::OnAudioFinishedNeedsLooping(UAudioComponent* AudioComponent)
{
	AudioComponent->Play();
}

void UDialogAudioControllerComponent::FLatentExecutor::Setup(const FLatentActionInfo& LatentInfo)
{
	TargetToReturnTo = LatentInfo.CallbackTarget;
	FunctionToCall = TargetToReturnTo->FindFunction(LatentInfo.ExecutionFunction);
	Linkage = LatentInfo.Linkage;
}

void UDialogAudioControllerComponent::FLatentExecutor::ProcessEvent()
{
	if (TargetToReturnTo && Linkage != INDEX_NONE)
	{
		TargetToReturnTo->ProcessEvent(FunctionToCall, &Linkage);
	}
}