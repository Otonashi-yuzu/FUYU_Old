// Copyright (c) 2022 Al_Fe


#include "VisualNovelNodeFunctionsLibrary.h"


#include "Character3DControllerComponent.h"
#include "DialogImageControllerComponent.h"
#include "CharacterControllerComponent.h"
#include "DialogControllerComponent.h"
#include "DialogSceneControllerComponent.h"
#include "VNMGeneralUtils.h"
#include "VNMModule.h"
#include "GameFramework/HUD.h"
#include "Kismet/GameplayStatics.h"

void UVisualNovelNodeFunctionsLibrary::DisplayDialogText(UObject* WorldContextObject, FDisplayDialogTextData DisplayDialogTextData,  FLatentActionInfo LatentInfo)
{
    auto* DialogController = UVNMGeneralUtils::GetDialogControllerComponent(WorldContextObject);

    if (!DialogController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::DisplayDialogText: Dialog Controller not found!"));
        return;
    }

    DialogController->DisplayDialog(DisplayDialogTextData, LatentInfo);    
}

void UVisualNovelNodeFunctionsLibrary::DisplayDialogChoices(UObject* WorldContextObject, FDisplayDialogChoicesData DisplayDialogChoicesData, FLatentActionInfo LatentInfo, FName& SelectedChoice)
{
    auto* DialogController = UVNMGeneralUtils::GetDialogControllerComponent(WorldContextObject);

    if (!DialogController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::DisplayDialogText: Dialog Controller not found!"));
        return;
    }

    DialogController->DisplayChoices(DisplayDialogChoicesData, SelectedChoice, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::GetDialogPlayerInput(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString& PlayerInput)
{
    auto* DialogController = UVNMGeneralUtils::GetDialogControllerComponent(WorldContextObject);

    if (!DialogController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::InteractiveRenameCharacter: Dialog Controller not found!"));
        return;
    }

    DialogController->GetDialogPlayerInput(PlayerInput, LatentInfo);  
}

void UVisualNovelNodeFunctionsLibrary::PlayDialogWindowAnimation(UObject* WorldContextObject, FPlayDialogWindowAnimationData PlayDialogWindowAnimationData, FLatentActionInfo LatentInfo)
{
    auto* DialogController = UVNMGeneralUtils::GetDialogControllerComponent(WorldContextObject);

    if (!DialogController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::PlayDialogWindowAnimation: Dialog Controller not found!"));
        return;
    }

    DialogController->PlayDialogWindowAnimation(PlayDialogWindowAnimationData, LatentInfo); 
}

void UVisualNovelNodeFunctionsLibrary::ShowCharacter(UObject* WorldContextObject, FShowCharacterData ShowCharacterData, FLatentActionInfo LatentInfo)
{
    auto* CharacterController = UVNMGeneralUtils::GetCharacterControllerComponent(WorldContextObject);

    if (!CharacterController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::ShowCharacter: Character Controller not found!"));
        return;
    }

    CharacterController->ShowCharacter(ShowCharacterData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::AddLayerToCharacter(UObject* WorldContextObject, FAddLayerToCharacterData AddLayerToCharacterData, FLatentActionInfo LatentInfo)
{
    auto* CharacterController = UVNMGeneralUtils::GetCharacterControllerComponent(WorldContextObject);

    if (!CharacterController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::AddLayerToCharacter: Character Controller not found!"));
        return;
    }

    CharacterController->AddLayerToCharacter(AddLayerToCharacterData, LatentInfo);    
}

void UVisualNovelNodeFunctionsLibrary::MoveCharacter(UObject* WorldContextObject, FMoveCharacterData MoveCharacterData, FLatentActionInfo LatentInfo)
{
    auto* CharacterController = UVNMGeneralUtils::GetCharacterControllerComponent(WorldContextObject);

    if (!CharacterController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::MoveCharacter: Character Controller not found!"));
        return;
    }

    CharacterController->MoveCharacter(MoveCharacterData, LatentInfo);  
}

void UVisualNovelNodeFunctionsLibrary::RemoveLayerFromCharacter(UObject* WorldContextObject, FRemoveLayerFromCharacterData RemoveLayerFromCharacterData, FLatentActionInfo LatentInfo)
{
    auto* CharacterController = UVNMGeneralUtils::GetCharacterControllerComponent(WorldContextObject);

    if (!CharacterController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::RemoveLayerFromCharacter: Character Controller not found!"));
        return;
    }

    CharacterController->RemoveLayerFromCharacter(RemoveLayerFromCharacterData, LatentInfo);        
}

void UVisualNovelNodeFunctionsLibrary::HideCharacter(UObject* WorldContextObject, FHideCharacterData HideCharacterData, FLatentActionInfo LatentInfo)
{
    auto* CharacterController = UVNMGeneralUtils::GetCharacterControllerComponent(WorldContextObject);

    if (!CharacterController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::HideCharacter: Character Controller not found!"));
        return;
    }

    CharacterController->HideCharacter(HideCharacterData, LatentInfo);    
}

void UVisualNovelNodeFunctionsLibrary::PlayCharacterAnimation(UObject* WorldContextObject, FPlayCharacterAnimationData PlayCharacterAnimationData, FLatentActionInfo LatentInfo)
{
    auto* CharacterController = UVNMGeneralUtils::GetCharacterControllerComponent(WorldContextObject);

    if (!CharacterController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::PlayCharacterAnimation: Character Controller not found!"));
        return;
    }

    CharacterController->PlayCharacterAnimation(PlayCharacterAnimationData, LatentInfo);    
}

void UVisualNovelNodeFunctionsLibrary::RenameCharacter(UObject* WorldContextObject, FRenameCharacterData RenameCharacterData, FLatentActionInfo LatentInfo)
{
    auto* DialogController = UVNMGeneralUtils::GetDialogControllerComponent(WorldContextObject);

    if (!DialogController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::DisplayDialogText: Dialog Controller not found!"));
        return;
    }

    DialogController->RenameCharacter(RenameCharacterData, LatentInfo);   
}

void UVisualNovelNodeFunctionsLibrary::InteractiveRenameCharacter(UObject* WorldContextObject, FInteractiveRenameCharacterData InteractiveRenameCharacterData, FLatentActionInfo LatentInfo)
{
    auto* DialogController = UVNMGeneralUtils::GetDialogControllerComponent(WorldContextObject);

    if (!DialogController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::InteractiveRenameCharacter: Dialog Controller not found!"));
        return;
    }

    DialogController->InteractiveRenameCharacter(InteractiveRenameCharacterData, LatentInfo);   
}

void UVisualNovelNodeFunctionsLibrary::ShowDialogWindow(UObject* WorldContextObject, FDialogWindowData DialogWindowData, FLatentActionInfo LatentInfo)
{
    auto* DialogController = UVNMGeneralUtils::GetDialogControllerComponent(WorldContextObject);

    if (!DialogController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::ShowDialogWindow: Dialog Controller not found!"));
        return;
    }

    DialogController->ShowDialogWindow(DialogWindowData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::HideDialogWindow(UObject* WorldContextObject, FDialogWindowData DialogWindowData, FLatentActionInfo LatentInfo)
{
    auto* DialogController = UVNMGeneralUtils::GetDialogControllerComponent(WorldContextObject);

    if (!DialogController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::HideDialogWindow: Dialog Controller not found!"));
        return;
    }

    DialogController->HideDialogWindow(DialogWindowData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::ShowWidget(UObject* WorldContextObject, FWidgetShowData WidgetShowData, FLatentActionInfo LatentInfo)
{
    auto* DialogController = UVNMGeneralUtils::GetDialogControllerComponent(WorldContextObject);

    if (!DialogController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::ShowWidget: Dialog Controller not found!"));
        return;
    }

    DialogController->ShowWidget(WidgetShowData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::HideWidget(UObject* WorldContextObject, FWidgetHideData WidgetHideData, FLatentActionInfo LatentInfo)
{
    auto* DialogController = UVNMGeneralUtils::GetDialogControllerComponent(WorldContextObject);

    if (!DialogController)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::HideWidget: Dialog Controller not found!"));
        return;
    }

    DialogController->HideWidget(WidgetHideData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::ShowCg(UObject* WorldContextObject, FShowCgData ShowCgData, FLatentActionInfo LatentInfo)
{
    auto* DialogImageControllerComponent = UVNMGeneralUtils::GetDialogImageControllerComponent(WorldContextObject);

    if (!DialogImageControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::ShowCg: Dialog Image Controller not found!"));
        return;
    }

    DialogImageControllerComponent->ShowCG(ShowCgData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::AddLayerToCg(UObject* WorldContextObject, FAddLayerToCgData AddLayerToCgData, FLatentActionInfo LatentInfo)
{
    auto* DialogImageControllerComponent = UVNMGeneralUtils::GetDialogImageControllerComponent(WorldContextObject);

    if (!DialogImageControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::AddLayerToCg: Dialog Image Controller not found!"));
        return;
    }

    DialogImageControllerComponent->AddLayerToCg(AddLayerToCgData, LatentInfo);   
}

void UVisualNovelNodeFunctionsLibrary::RemoveLayerFromCg(UObject* WorldContextObject, FRemoveLayerFromCgData RemoveLayerFromCgData, FLatentActionInfo LatentInfo)
{
    auto* DialogImageControllerComponent = UVNMGeneralUtils::GetDialogImageControllerComponent(WorldContextObject);

    if (!DialogImageControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::RemoveLayerFromCg: Dialog Image Controller not found!"));
        return;
    }

    DialogImageControllerComponent->RemoveLayerFromCg(RemoveLayerFromCgData, LatentInfo);   
}

void UVisualNovelNodeFunctionsLibrary::HideCg(UObject* WorldContextObject, FHideCgData HideCgData, FLatentActionInfo LatentInfo)
{
    auto* DialogImageControllerComponent = UVNMGeneralUtils::GetDialogImageControllerComponent(WorldContextObject);

    if (!DialogImageControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::HideCg: Dialog Image Controller not found!"));
        return;
    }

    DialogImageControllerComponent->HideCG(HideCgData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::PlayCgAnimation(UObject* WorldContextObject, FPlayCgAnimationData PlayCgAnimationData, FLatentActionInfo LatentInfo)
{
    auto* DialogImageControllerComponent = UVNMGeneralUtils::GetDialogImageControllerComponent(WorldContextObject);

    if (!DialogImageControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::PlayCgAnimation: Dialog Image Controller not found!"));
        return;
    }

    DialogImageControllerComponent->PlayCgAnimation(PlayCgAnimationData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::ShowSceneBackground(UObject* WorldContextObject, FShowSceneBackgroundData ShowSceneBackgroundData, FLatentActionInfo LatentInfo)
{
    auto* DialogImageControllerComponent = UVNMGeneralUtils::GetDialogImageControllerComponent(WorldContextObject);

    if (!DialogImageControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::ShowSceneBackground: Dialog Image Controller not found!"));
        return;
    }

    DialogImageControllerComponent->ShowSceneBackground(ShowSceneBackgroundData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::AddLayerToSceneBackground(UObject* WorldContextObject, FAddLayerToSceneBackgroundData AddLayerToSceneBackgroundData, FLatentActionInfo LatentInfo)
{
    auto* DialogImageControllerComponent = UVNMGeneralUtils::GetDialogImageControllerComponent(WorldContextObject);

    if (!DialogImageControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::AddLayerToSceneBackground: Dialog Image Controller not found!"));
        return;
    }

    DialogImageControllerComponent->AddLayerToSceneBackground(AddLayerToSceneBackgroundData, LatentInfo);   
}

void UVisualNovelNodeFunctionsLibrary::RemoveLayerFromSceneBackground(UObject* WorldContextObject, FRemoveLayerFromSceneBackgroundData RemoveLayerFromSceneBackgroundData, FLatentActionInfo LatentInfo)
{
    auto* DialogImageControllerComponent = UVNMGeneralUtils::GetDialogImageControllerComponent(WorldContextObject);

    if (!DialogImageControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::RemoveLayerFromSceneBackground: Dialog Image Controller not found!"));
        return;
    }

    DialogImageControllerComponent->RemoveLayerFromSceneBackground(RemoveLayerFromSceneBackgroundData, LatentInfo);   
}

void UVisualNovelNodeFunctionsLibrary::HideSceneBackground(UObject* WorldContextObject, FHideSceneBackgroundData HideSceneBackgroundData, FLatentActionInfo LatentInfo)
{
    auto* DialogImageControllerComponent = UVNMGeneralUtils::GetDialogImageControllerComponent(WorldContextObject);

    if (!DialogImageControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::HideSceneBackground: Dialog Image Controller not found!"));
        return;
    }

    DialogImageControllerComponent->HideSceneBackground(HideSceneBackgroundData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::PlaySceneBackgroundAnimation(UObject* WorldContextObject, FPlaySceneBackgroundAnimationData PlaySceneBackgroundAnimationData, FLatentActionInfo LatentInfo)
{
    auto* DialogImageControllerComponent = UVNMGeneralUtils::GetDialogImageControllerComponent(WorldContextObject);

    if (!DialogImageControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::PlaySceneBackgroundAnimation: Dialog Image Controller not found!"));
        return;
    }

    DialogImageControllerComponent->PlaySceneBackgroundAnimation(PlaySceneBackgroundAnimationData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::ShowDialogScene(UObject* WorldContextObject, FShowDialogSceneData ShowDialogSceneData, FLatentActionInfo LatentInfo)
{
    auto* DialogSceneControllerComponent = UVNMGeneralUtils::GetDialogSceneControllerComponent(WorldContextObject);

    if (!DialogSceneControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::ShowDialogScene: Dialog Scene Controller not found!"));
        return;
    }

    DialogSceneControllerComponent->ShowDialogScene(ShowDialogSceneData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::HideDialogScene(UObject* WorldContextObject, FHideDialogSceneData HideDialogSceneData, FLatentActionInfo LatentInfo)
{
    auto* DialogSceneControllerComponent = UVNMGeneralUtils::GetDialogSceneControllerComponent(WorldContextObject);

    if (!DialogSceneControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::HideDialogScene: Dialog Scene Controller not found!"));
        return;
    }

    DialogSceneControllerComponent->HideDialogScene(HideDialogSceneData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::SwitchToCamera(UObject* WorldContextObject, FSwitchToCameraData SwitchToCameraData, FLatentActionInfo LatentInfo)
{
    auto* DialogSceneControllerComponent = UVNMGeneralUtils::GetDialogSceneControllerComponent(WorldContextObject);

    if (!DialogSceneControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::SwitchToCamera: Dialog Scene Controller not found!"));
        return;
    }

    DialogSceneControllerComponent->SwitchToCamera(SwitchToCameraData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::ShowCharacter3D(UObject* WorldContextObject, FShowCharacter3DData ShowCharacter3DData, FLatentActionInfo LatentInfo)
{
    auto* Character3DControllerComponent = UVNMGeneralUtils::GetCharacter3DControllerComponent(WorldContextObject);

    if (!Character3DControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::ShowCharacter3D: Character 3D Controller not found!"));
        return;
    }

    Character3DControllerComponent->ShowCharacter3D(ShowCharacter3DData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::HideCharacter3D(UObject* WorldContextObject, FHideCharacter3DData HideCharacter3DData, FLatentActionInfo LatentInfo)
{
    auto* Character3DControllerComponent = UVNMGeneralUtils::GetCharacter3DControllerComponent(WorldContextObject);

    if (!Character3DControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::HideCharacter3D: Character 3D Controller not found!"));
        return;
    }

    Character3DControllerComponent->HideCharacter3D(HideCharacter3DData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::PlayBackgroundMusic(UObject* WorldContextObject, FPlayDialogAudioBackgroundMusicData PlayDialogAudioBackgroundMusicData, FLatentActionInfo LatentInfo)
{
    auto* DialogAudioControllerComponent = UVNMGeneralUtils::GetDialogAudioControllerComponent(WorldContextObject);

    if (!DialogAudioControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::PlayBackgroundMusic: Dialog Audio Controller not found!"));
        return;
    }

    DialogAudioControllerComponent->PlayBackgroundMusic(PlayDialogAudioBackgroundMusicData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::PlaySoundEffect(UObject* WorldContextObject, FPlayDialogAudioData PlayDialogAudioData, FLatentActionInfo LatentInfo)
{    
    auto* DialogAudioControllerComponent = UVNMGeneralUtils::GetDialogAudioControllerComponent(WorldContextObject);

    if (!DialogAudioControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::PlaySoundEffect: Dialog Audio Controller not found!"));
        return;
    }

    DialogAudioControllerComponent->PlaySoundEffect(PlayDialogAudioData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::PlayCharacterVoiceOver(UObject* WorldContextObject, FPlayDialogAudioCharacterVoiceOverData PlayDialogAudioCharacterVoiceOverData, FLatentActionInfo LatentInfo)
{
    auto* DialogAudioControllerComponent = UVNMGeneralUtils::GetDialogAudioControllerComponent(WorldContextObject);

    if (!DialogAudioControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::PlayCharacterVoiceOver: Dialog Audio Controller not found!"));
        return;
    }

    DialogAudioControllerComponent->PlayCharacterVoiceOver(PlayDialogAudioCharacterVoiceOverData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::PlayDialogVoiceOver(UObject* WorldContextObject, FPlayDialogAudioDialogVoiceOverData PlayDialogAudioDialogVoiceOverData, FLatentActionInfo LatentInfo)
{
    auto* DialogAudioControllerComponent = UVNMGeneralUtils::GetDialogAudioControllerComponent(WorldContextObject);

    if (!DialogAudioControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::PlayDialogVoiceOver: Dialog Audio Controller not found!"));
        return;
    }

    DialogAudioControllerComponent->PlayDialogVoiceOver(PlayDialogAudioDialogVoiceOverData, LatentInfo);
}

void UVisualNovelNodeFunctionsLibrary::StopBackgroundMusic(UObject* WorldContextObject, FStopDialogAudioData StopDialogAudioData)
{
    auto* DialogAudioControllerComponent = UVNMGeneralUtils::GetDialogAudioControllerComponent(WorldContextObject);

    if (!DialogAudioControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::StopBackgroundMusic: Dialog Audio Controller not found!"));
        return;
    }

    DialogAudioControllerComponent->StopBackgroundMusic(StopDialogAudioData);
}

void UVisualNovelNodeFunctionsLibrary::StopSoundEffect(UObject* WorldContextObject, FStopDialogAudioData StopDialogAudioData)
{
    auto* DialogAudioControllerComponent = UVNMGeneralUtils::GetDialogAudioControllerComponent(WorldContextObject);

    if (!DialogAudioControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::StopSoundEffect: Dialog Audio Controller not found!"));
        return;
    }

    DialogAudioControllerComponent->StopSoundEffect(StopDialogAudioData);
}

void UVisualNovelNodeFunctionsLibrary::StopVoiceOver(UObject* WorldContextObject, FStopDialogAudioData StopDialogAudioData)
{
    auto* DialogAudioControllerComponent = UVNMGeneralUtils::GetDialogAudioControllerComponent(WorldContextObject);

    if (!DialogAudioControllerComponent)
    {
        UE_LOG(LogVNM, Error, TEXT("UVisualNovelNodeFunctionsLibrary::StopVoiceOver: Dialog Audio Controller not found!"));
        return;
    }

    DialogAudioControllerComponent->StopVoiceOver(StopDialogAudioData);
}

bool UVisualNovelNodeFunctionsLibrary::Conv_StringToBool(const FString& InString)
{
    return InString.ToBool();
}

uint8 UVisualNovelNodeFunctionsLibrary::Conv_StringToByte(const FString& InString)
{
    return static_cast<uint8>(FCString::Atoi(*InString));
}

int64 UVisualNovelNodeFunctionsLibrary::Conv_StringToInt64(const FString& InString)
{
    return static_cast<int64>(FCString::Atoi(*InString));
}
