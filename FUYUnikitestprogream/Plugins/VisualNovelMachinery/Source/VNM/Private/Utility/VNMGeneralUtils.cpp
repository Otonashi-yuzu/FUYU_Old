// Fill out your copyright notice in the Description page of Project Settings.


#include "VNMGeneralUtils.h"

#include "Character3DControllerComponent.h"
#include "CharacterControllerComponent.h"
#include "DialogControllerComponent.h"
#include "DialogImageControllerComponent.h"
#include "MemoryControllerComponent.h"
#include "VNMModule.h"
#include "GameFramework/HUD.h"
#include "Interfaces/IPluginManager.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/ConfigCacheIni.h"

FString UVNMGeneralUtils::GetProjectVersion()
{
	FString AppVersion;
	GConfig->GetString(
	  TEXT("/Script/EngineSettings.GeneralProjectSettings"),
	  TEXT("ProjectVersion"),
	  AppVersion,
	  GGameIni
	);

	return AppVersion;
}

FString UVNMGeneralUtils::GetProjectName()
{
	FString AppName;
	GConfig->GetString(
	  TEXT("/Script/EngineSettings.GeneralProjectSettings"),
	  TEXT("ProjectName"),
	  AppName,
	  GGameIni
	);

	return AppName;
}

FString UVNMGeneralUtils::GetCompanyName()
{
	FString CompanyName;
	GConfig->GetString(
	  TEXT("/Script/EngineSettings.GeneralProjectSettings"),
	  TEXT("CompanyName"),
	  CompanyName,
	  GGameIni
	);

	return CompanyName;
}

FString UVNMGeneralUtils::GetVisualNovelMachineryVersion()
{
	FString PluginVersion;

	TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("VisualNovelMachinery"));

	if (Plugin)
	{
		const FPluginDescriptor& Descriptor = Plugin->GetDescriptor();

		return Descriptor.VersionName;
	}
	
	return TEXT("Unknown Version Number");
}

UCharacterControllerComponent* UVNMGeneralUtils::GetCharacterControllerComponent(UObject* WorldContextObject)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetCharacterControllerComponent: Player Controller not found!"));
		return nullptr;
	}

   

	auto* Hud = PlayerController->GetHUD();

	if (!Hud)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetCharacterControllerComponent: Hud not found!"));
		return nullptr;
	}

	auto* CharacterController = Hud->FindComponentByClass<UCharacterControllerComponent>();

	if (!CharacterController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetCharacterControllerComponent: Character Controller not found!"));
		return nullptr;
	}

	return CharacterController;
}

UCharacter3DControllerComponent* UVNMGeneralUtils::GetCharacter3DControllerComponent(UObject* WorldContextObject)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetCharacter3DControllerComponent: Player Controller not found!"));
		return nullptr;
	}

	auto* Character3DController = PlayerController->FindComponentByClass<UCharacter3DControllerComponent>();

	if (!Character3DController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetCharacter3DControllerComponent: Character 3D Controller not found!"));
		return nullptr;
	}

	return Character3DController;
}

UDialogControllerComponent* UVNMGeneralUtils::GetDialogControllerComponent(UObject* WorldContextObject)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetCharacterControllerComponent: Player Controller not found!"));
		return nullptr;
	}
	
	auto* Hud = PlayerController->GetHUD();

	if (!Hud)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetCharacterControllerComponent: Hud not found!"));
		return nullptr;
	}

	auto* DialogController = Hud->FindComponentByClass<UDialogControllerComponent>();

	if (!DialogController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetCharacterControllerComponent: Dialog Controller not found!"));
		return nullptr;
	}

	return DialogController;
}

UDialogSceneControllerComponent* UVNMGeneralUtils::GetDialogSceneControllerComponent(UObject* WorldContextObject)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetDialogSceneControllerComponent: Player Controller not found!"));
		return nullptr;
	}

	auto* DialogSceneController = PlayerController->FindComponentByClass<UDialogSceneControllerComponent>();

	if (!DialogSceneController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetDialogSceneControllerComponent: Dialog Scene Controller not found!"));
		return nullptr;
	}

	return DialogSceneController;
}

UDialogImageControllerComponent* UVNMGeneralUtils::GetDialogImageControllerComponent(UObject* WorldContextObject)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetDialogImageControllerComponent: Player Controller not found!"));
		return nullptr;
	}
	
	auto* Hud = PlayerController->GetHUD();

	if (!Hud)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetDialogImageControllerComponent: Hud not found!"));
		return nullptr;
	}

	auto* DialogImageController = Hud->FindComponentByClass<UDialogImageControllerComponent>();

	if (!DialogImageController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetDialogImageControllerComponent: Dialog Image Controller not found!"));
		return nullptr;
	}

	return DialogImageController;
}

UMemoryControllerComponent* UVNMGeneralUtils::GetMemoryControllerComponent(UObject* WorldContextObject)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetMemoryControllerComponent: Player Controller not found!"));
		return nullptr;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetMemoryControllerComponent: Memory Controller not found!"));
		return nullptr;
	}

	return MemoryController;
}

UDialogAudioControllerComponent* UVNMGeneralUtils::GetDialogAudioControllerComponent(UObject* WorldContextObject)
{
	
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetDialogAudioControllerComponent: Player Controller not found!"));
		return nullptr;
	}
	
	auto* Hud = PlayerController->GetHUD();

	if (!Hud)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetDialogAudioControllerComponent: Hud not found!"));
		return nullptr;
	}

	auto* DialogAudioController = Hud->FindComponentByClass<UDialogAudioControllerComponent>();

	if (!DialogAudioController)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMGeneralUtils::GetDialogAudioControllerComponent: Dialog Audio Controller not found!"));
		return nullptr;
	}

	return DialogAudioController;
}
