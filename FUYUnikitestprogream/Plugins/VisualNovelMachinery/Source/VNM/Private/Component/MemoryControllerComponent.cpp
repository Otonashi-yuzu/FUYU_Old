// Copyright (c) 2022 Al_Fe


#include "MemoryControllerComponent.h"


#include "GameSaveSubsystem.h"
#include "VNMModule.h"
#include "VNMSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"

UMemoryControllerComponent::UMemoryControllerComponent()
{
	bWantsInitializeComponent = true;
}

void UMemoryControllerComponent::InitializeComponent()
{
	Super::InitializeComponent();
}

// Called when the game starts
void UMemoryControllerComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UMemoryControllerComponent::SetupControllerComponent()
{
	Super::SetupControllerComponent();

	auto* Settings = UVNMSettings::GetVNMSettings();
	TArray<FName> CharacterIds = Settings->GetCharacterIds();

	for (const FName& CharacterId: CharacterIds)
	{
		TArray<FMemoryDefinition> CharacterMemoryDefinitions = Settings->GetCharacterMemoryDefinitionsByCharacterId(CharacterId);

		if (CharacterMemoryDefinitions.Num() <= 0)
		{
			continue;
		}
		
		FMemoryObject CharacterMemory;
		CharacterMemory.Id = CharacterId;
		for (const FMemoryDefinition& CharacterMemoryDefinition : CharacterMemoryDefinitions)
		{
			FMemoryValue CharacterMemoryValue;
			CharacterMemoryValue.Id = CharacterMemoryDefinition.MemoryId;
			CharacterMemoryValue.Type = CharacterMemoryDefinition.Type;
			CharacterMemoryValue.SetInitialValue();			

			CharacterMemory.Values.Emplace(CharacterMemoryDefinition.MemoryId, CharacterMemoryValue);
		}

		CharacterMemories.Emplace(CharacterId, CharacterMemory);
	}
	
	TArray<FName> DialogIds = Settings->GetDialogIds();

	for (const FName& DialogId: DialogIds)
	{
		TArray<FMemoryDefinition> DialogMemoryDefinitions = Settings->GetDialogMemoryDefinitionsByDialogId(DialogId);

		if (DialogMemoryDefinitions.Num() <= 0)
		{
			continue;
		}
		
		FMemoryObject DialogMemory;
		DialogMemory.Id = DialogId;
		for (const FMemoryDefinition& DialogMemoryDefinition : DialogMemoryDefinitions)
		{
			FMemoryValue DialogMemoryValue;
			DialogMemoryValue.Id = DialogMemoryDefinition.MemoryId;
			DialogMemoryValue.Type = DialogMemoryDefinition.Type;
			DialogMemoryValue.SetInitialValue();			

			DialogMemory.Values.Emplace(DialogMemoryDefinition.MemoryId, DialogMemoryValue);
		}

		DialogMemories.Emplace(DialogId, DialogMemory);
	}

	auto* GameInstance = UGameplayStatics::GetGameInstance(GetWorld());
	if (!GameInstance)
	{
		bHasFinishedSetup = true;
		return;
	}

	auto* Subsystem = GameInstance->GetSubsystem<UGameSaveSubsystem>();

	if (!Subsystem || !Subsystem->IsCurrentlyLoading())
	{
		bHasFinishedSetup = true;
		return;
	}

	auto* SaveGame = Subsystem->GetSaveGame();

	ApplySnapshot(SaveGame->Snapshot);

	bHasFinishedSetup = true;
}

bool UMemoryControllerComponent::ApplySnapshot(const FGameSnapshot& Snapshot)
{
	for (const auto& CharacterMemorySaveInfo: Snapshot.CharacterMemories)
	{
		if (!CharacterMemories.Contains(CharacterMemorySaveInfo.Key))
		{
			continue;	
		}
		
		FMemoryObject& CharacterMemory = CharacterMemories[CharacterMemorySaveInfo.Key];

		for (const auto& CharacterMemoryValueSaveInfo: CharacterMemorySaveInfo.Value.MemoryValues)
		{
			if (!CharacterMemory.Values.Contains(CharacterMemoryValueSaveInfo.Key))
			{
				continue;	
			}

			auto& CharacterMemoryValue = CharacterMemory.Values[CharacterMemoryValueSaveInfo.Key];

			CharacterMemoryValue.Value = CharacterMemoryValueSaveInfo.Value;
		}
	}

	
	for (const auto& DialogMemorySaveInfo: Snapshot.DialogMemories)
	{
		if (!DialogMemories.Contains(DialogMemorySaveInfo.Key))
		{
			continue;	
		}
		
		FMemoryObject& DialogMemory = DialogMemories[DialogMemorySaveInfo.Key];

		for (const auto& DialogMemoryValueSaveInfo: DialogMemorySaveInfo.Value.MemoryValues)
		{
			if (!DialogMemory.Values.Contains(DialogMemoryValueSaveInfo.Key))
			{
				continue;	
			}

			auto& CharacterMemoryValue = DialogMemory.Values[DialogMemoryValueSaveInfo.Key];

			CharacterMemoryValue.Value = DialogMemoryValueSaveInfo.Value;
		}
	}

	return true;
}

TMap<FName, FMemoryData> UMemoryControllerComponent::GetCharacterMemoryData() const
{
	TMap<FName, FMemoryData> CharacterMemoriesSaveInfo;

	for (const auto& CharacterMemory: CharacterMemories)
	{
		FMemoryData CharacterMemorySaveInfo;
		for (const auto& CharacterMemoryValue: CharacterMemory.Value.Values)
		{
			CharacterMemorySaveInfo.MemoryValues.Emplace(CharacterMemoryValue.Key, CharacterMemoryValue.Value.Value);
		}
		CharacterMemoriesSaveInfo.Emplace(CharacterMemory.Key, CharacterMemorySaveInfo);
	}

	return CharacterMemoriesSaveInfo;
}

TMap<FName, FMemoryData> UMemoryControllerComponent::GetDialogMemoryData() const
{
	TMap<FName, FMemoryData> DialogMemoriesSaveInfo;

	for (const auto& DialogMemory: DialogMemories)
	{
		FMemoryData DialogMemorySaveInfo;
		for (const auto& DialogMemoryValue: DialogMemory.Value.Values)
		{
			DialogMemorySaveInfo.MemoryValues.Emplace(DialogMemoryValue.Key, DialogMemoryValue.Value.Value);
		}
		DialogMemoriesSaveInfo.Emplace(DialogMemory.Key, DialogMemorySaveInfo);
	}

	return DialogMemoriesSaveInfo;
}


FMemoryValue UMemoryControllerComponent::GetMemoryValueForCharacterId(const FName& CharacterId, const FName& ValueId)
{
	if (!CharacterMemories.Contains(CharacterId))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterMemoryControllerComponent::GetMemoryValueForCharacterId: No character for ID %s exists in Memory Controlelr!"), *CharacterId.ToString())
		return FMemoryValue();
	}

	const FMemoryObject CharacterMemory = CharacterMemories[CharacterId];

	if (!CharacterMemory.Values.Contains(ValueId))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterMemoryControllerComponent::GetMemoryValueForCharacterId: No memory with id %s for character %s exists in Memory Controlelr!"), *ValueId.ToString(), *CharacterId.ToString())
		return FMemoryValue();
	}

	return CharacterMemory.Values[ValueId];
}

FMemoryValue* UMemoryControllerComponent::GetMemoryValuePtrForCharacterId(
	const FName& CharacterId, const FName& ValueId)
{
	if (!CharacterMemories.Contains(CharacterId))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterMemoryControllerComponent::GetMemoryValuePtrForCharacterId: No character for ID %s exists in Memory Controlelr!"), *CharacterId.ToString())
		return nullptr;
	}

	FMemoryObject& CharacterMemory = CharacterMemories[CharacterId];

	if (!CharacterMemory.Values.Contains(ValueId))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterMemoryControllerComponent::GetMemoryValuePtrForCharacterId: No memory with id %s for character %s exists in Memory Controlelr!"), *ValueId.ToString(), *CharacterId.ToString())
		return nullptr;
	}

	return &CharacterMemory.Values[ValueId];
}

bool UMemoryControllerComponent::SetMemoryValueForCharacterId(const FName& CharacterId, const FName& ValueId,
                                                                       const FString& Value)
{
	if (!CharacterMemories.Contains(CharacterId))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterMemoryControllerComponent::GetMemoryValueForCharacterId: No character for ID %s exists in Memory Controlelr!"), *CharacterId.ToString())
		return false;
	}

	FMemoryObject& CharacterMemory = CharacterMemories[CharacterId];

	if (!CharacterMemory.Values.Contains(ValueId))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterMemoryControllerComponent::GetMemoryValueForCharacterId: No memory with id %s for character %s exists in Memory Controlelr!"), *ValueId.ToString(), *CharacterId.ToString())
		return false;
	}

	CharacterMemory.Values[ValueId].Value = Value;
	return true;
}

FMemoryValue UMemoryControllerComponent::GetMemoryValueForDialogId(const FName& DialogId, const FName& ValueId)
{
	if (!DialogMemories.Contains(DialogId))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterMemoryControllerComponent::GetMemoryValueForDialogId: No character for ID %s exists in Memory Controlelr!"), *DialogId.ToString())
		return FMemoryValue();
	}

	const FMemoryObject DialogMemory = DialogMemories[DialogId];

	if (!DialogMemory.Values.Contains(ValueId))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterMemoryControllerComponent::GetMemoryValueForDialogId: No memory with id %s for character %s exists in Memory Controlelr!"), *ValueId.ToString(), *DialogId.ToString())
		return FMemoryValue();
	}

	return DialogMemory.Values[ValueId];
}

FMemoryValue* UMemoryControllerComponent::GetMemoryValuePtrForDialogId(const FName& DialogId, const FName& ValueId)
{
	if (!DialogMemories.Contains(DialogId))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterMemoryControllerComponent::GetMemoryValuePtrForDialogId: No character for ID %s exists in Memory Controlelr!"), *DialogId.ToString())
		return nullptr;
	}

	FMemoryObject& DialogMemory = DialogMemories[DialogId];

	if (!DialogMemory.Values.Contains(ValueId))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterMemoryControllerComponent::GetMemoryValuePtrForDialogId: No memory with id %s for character %s exists in Memory Controlelr!"), *ValueId.ToString(), *DialogId.ToString())
		return nullptr;
	}

	return &DialogMemory.Values[ValueId];
}

bool UMemoryControllerComponent::SetMemoryValueForDialogId(const FName& DialogId, const FName& ValueId, const FString& Value)
{
	if (!DialogMemories.Contains(DialogId))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterMemoryControllerComponent::SetMemoryValueForDialogId: No character for ID %s exists in Memory Controlelr!"), *DialogId.ToString())
		return false;
	}

	FMemoryObject& DialogMemory = DialogMemories[DialogId];

	if (!DialogMemory.Values.Contains(ValueId))
	{
		UE_LOG(LogVNM, Error, TEXT("UCharacterMemoryControllerComponent::SetMemoryValueForDialogId: No memory with id %s for character %s exists in Memory Controlelr!"), *ValueId.ToString(), *DialogId.ToString())
		return false;
	}

	DialogMemory.Values[ValueId].Value = Value;
	return true;
}