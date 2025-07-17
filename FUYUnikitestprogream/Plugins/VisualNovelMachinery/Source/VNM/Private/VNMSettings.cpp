// Copyright (c) 2022 Al_Fe

#include "VNMSettings.h"

#include "UObject/ConstructorHelpers.h"


UVNMSettings::UVNMSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Settings.CharacterPositionValues.Add(ECharacterPositioning::LEFT, 0.25f);
	Settings.CharacterPositionValues.Add(ECharacterPositioning::CENTER, 0.5f);
	Settings.CharacterPositionValues.Add(ECharacterPositioning::RIGHT, 0.75f);
}

FName UVNMSettings::GetContainerName() const
{
	return TEXT("Project");
}

FName UVNMSettings::GetCategoryName() const
{
	return TEXT("Plugins");
}

FName UVNMSettings::GetSectionName() const
{
	return TEXT("VNM");
}

#if WITH_EDITOR
FText UVNMSettings::GetSectionText() const
{
	return NSLOCTEXT("VNM", "RuntimeSettingsName", "Visual Novel Machinery");
}

FText UVNMSettings::GetSectionDescription() const
{
	return NSLOCTEXT("VNM", "RuntimeSettingsDescription", "Configure the Visual Novel Machinery plugin");
}
#endif

TArray<FName> UVNMSettings::GetCharacterIds() const
{
	TArray<FName> CharacterIds;

	if (!Settings.CharacterDefinitonsTable)
	{
		return CharacterIds;
	}

	TArray<FCharacterDefinition*> CharacterDefinitions;
	Settings.CharacterDefinitonsTable->GetAllRows("", CharacterDefinitions);
	for (auto* CharacterDefinition: CharacterDefinitions)
	{
		CharacterIds.Add(CharacterDefinition->CharacterId);
	}

	return CharacterIds;
}

TArray<FName> UVNMSettings::GetCustomCharacterPositions() const
{
	TArray<FName> CustomCharacterPositions;

	Settings.CustomCharacterPositionValues.GenerateKeyArray(CustomCharacterPositions);

	return CustomCharacterPositions;
}

TArray<FName> UVNMSettings::GetCharacterEmotionsById(const FName& CharacterId) const
{
	const auto CharacterDefinition = GetCharacterDefinitionById(CharacterId);

	TArray<FName> EmotionIds;
	
	if (!CharacterDefinition.IsValid())
	{
		return EmotionIds;
	}

	for (const auto& CharacterEmotionEntry: CharacterDefinition.CharacterImagePerEmotion)
	{
		EmotionIds.Add(CharacterEmotionEntry.Key);
	}

	return EmotionIds;
}

TArray<FName> UVNMSettings::GetCharacterLayersById(const FName& CharacterId) const
{
	const auto CharacterDefinition = GetCharacterDefinitionById(CharacterId);

	TArray<FName> LayerIds;
	
	if (!CharacterDefinition.IsValid())
	{
		return LayerIds;
	}

	for (const auto& CharacterImageLayerEntry: CharacterDefinition.CharacterImageLayers)
	{
		LayerIds.Add(CharacterImageLayerEntry.Key);
	}

	return LayerIds;
}

TArray<FName> UVNMSettings::GetCharacterLayerImagesById(const FName& CharacterId, const FName& LayerId) const
{
	const auto CharacterDefinition = GetCharacterDefinitionById(CharacterId);

	TArray<FName> LayerImageIds;
	
	if (!CharacterDefinition.IsValid())
	{
		return LayerImageIds;
	}

	if (!CharacterDefinition.CharacterImageLayers.Contains(LayerId))
	{
		return LayerImageIds;
	}

	for (const auto& CharacterLayerImageEntry: CharacterDefinition.CharacterImageLayers[LayerId].LayerImagePerId)
	{
		LayerImageIds.Add(CharacterLayerImageEntry.Key);
	}

	return LayerImageIds;
}

TArray<FName> UVNMSettings::GetCharacter3DEmotionsById(const FName& CharacterId) const
{
	const auto CharacterDefinition = GetCharacterDefinitionById(CharacterId);

	TArray<FName> EmotionIds;
	
	if (!CharacterDefinition.IsValid())
	{
		return EmotionIds;
	}

	for (const auto& CharacterAnimationEntry: CharacterDefinition.CharacterAnimationPerEmotion)
	{
		EmotionIds.Add(CharacterAnimationEntry.Key);
	}

	return EmotionIds;
}

FCharacterDefinition UVNMSettings::GetCharacterDefinitionById(const FName& CharacterId) const
{
	if (!Settings.CharacterDefinitonsTable)
	{
		return FCharacterDefinition();
	}
	
	TArray<FCharacterDefinition*> CharacterDefinitions;
	Settings.CharacterDefinitonsTable->GetAllRows("", CharacterDefinitions);
	for (auto* CharacterDefinition: CharacterDefinitions)
	{
		if (CharacterDefinition->CharacterId == CharacterId)
		{
			return *CharacterDefinition;
		}
	}

	return FCharacterDefinition();
}

TMap<FName, FCharacterDefinition> UVNMSettings::GetCharacterDefinitionMap() const
{
	TMap<FName, FCharacterDefinition> CharacterDefinitionsMap;
	if (!Settings.CharacterDefinitonsTable)
	{
		return CharacterDefinitionsMap;
	}
	
	TArray<FCharacterDefinition*> CharacterDefinitions;
	Settings.CharacterDefinitonsTable->GetAllRows("", CharacterDefinitions);
	for (auto* CharacterDefinition: CharacterDefinitions)
	{
		CharacterDefinitionsMap.Add(CharacterDefinition->CharacterId, *CharacterDefinition);
	}

	return CharacterDefinitionsMap;
}

TArray<FName> UVNMSettings::GetCharacterMemoryIdsByCharacterId(const FName& CharacterId) const
{
	TArray<FName> CharacterMemoryIds;
	FCharacterDefinition CharacterDefinition = GetCharacterDefinitionById(CharacterId);

	if (!CharacterDefinition.IsValid())
	{
		return CharacterMemoryIds;
	}

	for (const FMemoryDefinition& Definition : CharacterDefinition.CharacterMemoryDefinitions)
	{
		CharacterMemoryIds.Add(Definition.MemoryId);
	}

	return CharacterMemoryIds;
}

FMemoryDefinition UVNMSettings::GetCharacterMemoryDefinitionById(const FName& CharacterId, const FName& MemoryId) const
{
	FMemoryDefinition CharacterMemoryDefinition;
	FCharacterDefinition CharacterDefinition = GetCharacterDefinitionById(CharacterId);

	if (!CharacterDefinition.IsValid())
	{
		return FMemoryDefinition();
	}

	for (const FMemoryDefinition& Definition : CharacterDefinition.CharacterMemoryDefinitions)
	{
		if (Definition.MemoryId == MemoryId)
		{
			return Definition;
		}
	}

	return FMemoryDefinition();
}

TArray<FMemoryDefinition> UVNMSettings::GetCharacterMemoryDefinitionsByCharacterId(const FName& CharacterId) const
{
	TArray<FName> CharacterMemoryIds;
	FCharacterDefinition CharacterDefinition = GetCharacterDefinitionById(CharacterId);

	return CharacterDefinition.CharacterMemoryDefinitions;
}

TArray<FName> UVNMSettings::GetCgIds() const
{
	TArray<FName> CgIds;
	
	if (!Settings.CgDefinitonsTable)
	{
		return CgIds;
	}

	TArray<FDialogImageDefinition*> CgDefinitions;
	Settings.CgDefinitonsTable->GetAllRows("", CgDefinitions);
	for (auto* CgDefinition: CgDefinitions)
	{
		CgIds.Add(CgDefinition->DialogImageId);
	}

	return CgIds;
}

TArray<FDialogImageDefinition> UVNMSettings::GetCgDefinitions() const
{
	TArray<FDialogImageDefinition> CgDefinitions;
	
	if (!Settings.CgDefinitonsTable)
	{
		return CgDefinitions;
	}

	TArray<FDialogImageDefinition*> CgRDefinitionRows;
	Settings.CgDefinitonsTable->GetAllRows("", CgRDefinitionRows);
	for (auto* CgDefinitionRow: CgRDefinitionRows)
	{
		CgDefinitions.Add(*CgDefinitionRow);
	}

	return CgDefinitions;
}

TArray<FName> UVNMSettings::GetCgGroupIds() const
{
	TArray<FName> CgGroupIds;
	
	if (!Settings.CgDefinitonsTable)
	{
		return CgGroupIds;
	}

	TArray<FDialogImageDefinition*> CgDefinitions;
	Settings.CgDefinitonsTable->GetAllRows("", CgDefinitions);
	for (auto* CgDefinition: CgDefinitions)
	{
		if (!CgDefinition->DialogImageGroupId.IsNone())
		{
			CgGroupIds.AddUnique(CgDefinition->DialogImageGroupId);
		}
	}

	return CgGroupIds;
}

TArray<FName> UVNMSettings::GetCgIdsByGroupId(const FName& CgGroupId) const
{
	TArray<FName> CgIds;
	
	if (!Settings.CgDefinitonsTable)
	{
		return CgIds;
	}

	TArray<FDialogImageDefinition*> CgDefinitions;
	Settings.CgDefinitonsTable->GetAllRows("", CgDefinitions);
	for (auto* CgDefinition: CgDefinitions)
	{
		if (CgDefinition->DialogImageGroupId == CgGroupId)
		{
			CgIds.AddUnique(CgDefinition->DialogImageId);
		}
	}

	return CgIds;
}

FDialogImageDefinition UVNMSettings::GetCgDefinitionById(const FName& CgId) const
{
	if (!Settings.CgDefinitonsTable)
	{
		return FDialogImageDefinition();
	}
	
	TArray<FDialogImageDefinition*> CgDefinitions;
	Settings.CgDefinitonsTable->GetAllRows("", CgDefinitions);
	for (auto* CgDefinition: CgDefinitions)
	{
		if (CgDefinition->DialogImageId == CgId)
		{
			return *CgDefinition;
		}
	}

	return FDialogImageDefinition();
}

TArray<FName> UVNMSettings::GetCgLayersById(const FName& CgId) const
{
	const auto CgDefinition = GetCgDefinitionById(CgId);

	TArray<FName> LayerIds;
	
	if (!CgDefinition.IsValid())
	{
		return LayerIds;
	}

	for (const auto& DialogImageLayerEntry: CgDefinition.DialogImageLayers)
	{
		LayerIds.Add(DialogImageLayerEntry.Key);
	}

	return LayerIds;
}

TArray<FName> UVNMSettings::GetCgLayerImagesById(const FName& CgId, const FName& LayerId) const
{
	const auto CgDefinition = GetCgDefinitionById(CgId);

	TArray<FName> LayerImageIds;
	
	if (!CgDefinition.IsValid())
	{
		return LayerImageIds;
	}

	if (!CgDefinition.DialogImageLayers.Contains(LayerId))
	{
		return LayerImageIds;
	}

	for (const auto& CgLayerImageEntry: CgDefinition.DialogImageLayers[LayerId].LayerImagePerId)
	{
		LayerImageIds.Add(CgLayerImageEntry.Key);
	}

	return LayerImageIds;
}

TArray<FName> UVNMSettings::GetSceneBackgroundIds() const
{
	TArray<FName> SceneBackgroundIds;
	
	if (!Settings.SceneBackgroundDefinitonsTable)
	{
		return SceneBackgroundIds;
	}

	TArray<FDialogImageDefinition*> SceneBackgroundDefinitions;
	Settings.SceneBackgroundDefinitonsTable->GetAllRows("", SceneBackgroundDefinitions);
	for (auto* SceneBackgroundDefinition: SceneBackgroundDefinitions)
	{
		SceneBackgroundIds.Add(SceneBackgroundDefinition->DialogImageId);
	}

	return SceneBackgroundIds;
}

FDialogImageDefinition UVNMSettings::GetSceneBackgroundDefinitionById(const FName& SceneBackgroundId) const
{	
	if (!Settings.SceneBackgroundDefinitonsTable)
	{
		return FDialogImageDefinition();
	}
	
	TArray<FDialogImageDefinition*> SceneBackgroundDefinitions;
	Settings.SceneBackgroundDefinitonsTable->GetAllRows("", SceneBackgroundDefinitions);
	for (auto* SceneBackgroundDefinition: SceneBackgroundDefinitions)
	{
		if (SceneBackgroundDefinition->DialogImageId == SceneBackgroundId)
		{
			return *SceneBackgroundDefinition;
		}
	}

	return FDialogImageDefinition();
}

TArray<FName> UVNMSettings::GetSceneBackgroundLayersById(const FName& SceneBackgroundId) const
{
	const auto SceneBackgroundDefinition = GetSceneBackgroundDefinitionById(SceneBackgroundId);

	TArray<FName> LayerIds;
	
	if (!SceneBackgroundDefinition.IsValid())
	{
		return LayerIds;
	}

	for (const auto& DialogImageLayerEntry: SceneBackgroundDefinition.DialogImageLayers)
	{
		LayerIds.Add(DialogImageLayerEntry.Key);
	}

	return LayerIds;
}

TArray<FName> UVNMSettings::GetSceneBackgroundLayerImagesById(const FName& SceneBackgroundId, const FName& LayerId) const
{
	const auto SceneBackgroundDefinition = GetSceneBackgroundDefinitionById(SceneBackgroundId);

	TArray<FName> LayerImageIds;
	
	if (!SceneBackgroundDefinition.IsValid())
	{
		return LayerImageIds;
	}

	if (!SceneBackgroundDefinition.DialogImageLayers.Contains(LayerId))
	{
		return LayerImageIds;
	}

	for (const auto& SceneBackgroundLayerImageEntry: SceneBackgroundDefinition.DialogImageLayers[LayerId].LayerImagePerId)
	{
		LayerImageIds.Add(SceneBackgroundLayerImageEntry.Key);
	}

	return LayerImageIds;
}

TArray<FName> UVNMSettings::GetBackgroundMusicIds() const
{
	TArray<FName> BackgroundMusicIds;
	
	if (!Settings.DialogAudioDefinitionsTable)
	{
		return BackgroundMusicIds;
	}

	TArray<FDialogAudioDefinition*> DialogAudioDefinitions;
	Settings.DialogAudioDefinitionsTable->GetAllRows("", DialogAudioDefinitions);
	for (auto* DialogAudioDefinition: DialogAudioDefinitions)
	{
		if (DialogAudioDefinition->AudioType == EDialogAudioType::Background_Music)
		{
			BackgroundMusicIds.Add(DialogAudioDefinition->DialogAudioId);
		}
	}

	return BackgroundMusicIds;
}

TArray<FString> UVNMSettings::GetBackgroundMusicIdsAsString() const
{
	TArray<FString> BackgroundMusicIds;
	
	if (!Settings.DialogAudioDefinitionsTable)
	{
		return BackgroundMusicIds;
	}

	TArray<FDialogAudioDefinition*> DialogAudioDefinitions;
	Settings.DialogAudioDefinitionsTable->GetAllRows("", DialogAudioDefinitions);
	for (auto* DialogAudioDefinition: DialogAudioDefinitions)
	{
		if (DialogAudioDefinition->AudioType == EDialogAudioType::Background_Music)
		{
			BackgroundMusicIds.Add(DialogAudioDefinition->DialogAudioId.ToString());
		}
	}

	return BackgroundMusicIds;
}

TArray<FName> UVNMSettings::GetSoundEffectIds() const
{
	TArray<FName> SoundEffectIds;
	
	if (!Settings.DialogAudioDefinitionsTable)
	{
		return SoundEffectIds;
	}

	TArray<FDialogAudioDefinition*> DialogAudioDefinitions;
	Settings.DialogAudioDefinitionsTable->GetAllRows("", DialogAudioDefinitions);
	for (auto* DialogAudioDefinition: DialogAudioDefinitions)
	{
		if (DialogAudioDefinition->AudioType == EDialogAudioType::Sound_Effect)
		{
			SoundEffectIds.Add(DialogAudioDefinition->DialogAudioId);
		}
	}

	return SoundEffectIds;
}

TArray<FString> UVNMSettings::GetSoundEffectIdsAsString() const
{
	TArray<FString> SoundEffectIds;
	
	if (!Settings.DialogAudioDefinitionsTable)
	{
		return SoundEffectIds;
	}

	TArray<FDialogAudioDefinition*> DialogAudioDefinitions;
	Settings.DialogAudioDefinitionsTable->GetAllRows("", DialogAudioDefinitions);
	for (auto* DialogAudioDefinition: DialogAudioDefinitions)
	{
		if (DialogAudioDefinition->AudioType == EDialogAudioType::Sound_Effect)
		{
			SoundEffectIds.Add(DialogAudioDefinition->DialogAudioId.ToString());
		}
	}

	return SoundEffectIds;
}

TArray<FName> UVNMSettings::GetVoiceOverIds() const
{
	TArray<FName> VoiceOverIds;
	
	if (!Settings.DialogAudioDefinitionsTable)
	{
		return VoiceOverIds;
	}

	TArray<FDialogAudioDefinition*> DialogAudioDefinitions;
	Settings.DialogAudioDefinitionsTable->GetAllRows("", DialogAudioDefinitions);
	for (auto* DialogAudioDefinition: DialogAudioDefinitions)
	{
		if (DialogAudioDefinition->AudioType == EDialogAudioType::Voice_Over)
		{
			VoiceOverIds.Add(DialogAudioDefinition->DialogAudioId);
		}
	}

	return VoiceOverIds;
}

TArray<FName> UVNMSettings::GetVoiceOverIdsByDialogClass(const TSubclassOf<UDialogObject> DialogObjectClass) const
{
	TArray<FName> VoiceOverIds;
	FDialogDefinition DialogDefinition = GetDialogDefinitionByClass(DialogObjectClass);

	if (!DialogDefinition.IsValid())
	{
		return VoiceOverIds;
	}

	DialogDefinition.VoiceOverDefinitions.GetKeys(VoiceOverIds);

	return VoiceOverIds;
}

TArray<FName> UVNMSettings::GetVoiceOverIdsByDialogId(const FName& DialogId) const
{
	TArray<FName> VoiceOverIds;
	FDialogDefinition DialogDefinition = GetDialogDefinitionById(DialogId);

	if (!DialogDefinition.IsValid())
	{
		return VoiceOverIds;
	}

	DialogDefinition.VoiceOverDefinitions.GetKeys(VoiceOverIds);

	return VoiceOverIds;
}

FVoiceOverDefinition UVNMSettings::GetVoiceOverDefintionByDialogId(const FName& DialogId, const FName& VoiceOverId) const
{
	FDialogDefinition DialogDefinition = GetDialogDefinitionById(DialogId);

	if (!DialogDefinition.IsValid())
	{
		return FVoiceOverDefinition();
	}

	auto* VoiceOverDefinition = DialogDefinition.VoiceOverDefinitions.Find(VoiceOverId);

	return VoiceOverDefinition ? *VoiceOverDefinition : FVoiceOverDefinition();
}
TArray<FName> UVNMSettings::GetVoiceOverIdsByCharacterId(const FName& CharacterId) const
{
	TArray<FName> VoiceOverIds;
	FCharacterDefinition CharacterDefinition = GetCharacterDefinitionById(CharacterId);

	if (!CharacterDefinition.IsValid())
	{
		return VoiceOverIds;
	}

	CharacterDefinition.VoiceOverDefinitions.GetKeys(VoiceOverIds);

	return VoiceOverIds;
}

FVoiceOverDefinition UVNMSettings::GetVoiceOverDefintionByCharacterId(const FName& CharacterId, const FName& VoiceOverId) const
{
	FCharacterDefinition CharacterDefinition = GetCharacterDefinitionById(CharacterId);

	if (!CharacterDefinition.IsValid())
	{
		return FVoiceOverDefinition();
	}

	auto* VoiceOverDefinition = CharacterDefinition.VoiceOverDefinitions.Find(VoiceOverId);

	return VoiceOverDefinition ? *VoiceOverDefinition : FVoiceOverDefinition();
}


TArray<FString> UVNMSettings::GetVoiceOverIdsByDialogIdAsString(const FName& DialogId) const
{
	TArray<FString> VoiceOverIds;
	FDialogDefinition DialogDefinition = GetDialogDefinitionById(DialogId);

	if (!DialogDefinition.IsValid())
	{
		return VoiceOverIds;
	}

	for (const auto& VoiceOverDefinition: DialogDefinition.VoiceOverDefinitions)
	{
		VoiceOverIds.Add(VoiceOverDefinition.Key.ToString());
	}

	return VoiceOverIds;
}

TArray<FString> UVNMSettings::GetVoiceOverIdsByCharacterIdAsString(const FName& CharacterId) const
{
	TArray<FString> VoiceOverIds;
	FCharacterDefinition CharacterDefinition = GetCharacterDefinitionById(CharacterId);

	if (!CharacterDefinition.IsValid())
	{
		return VoiceOverIds;
	}

	for (const auto& VoiceOverDefinition: CharacterDefinition.VoiceOverDefinitions)
	{
		VoiceOverIds.Add(VoiceOverDefinition.Key.ToString());
	}

	return VoiceOverIds;
}

TArray<FString> UVNMSettings::GetVoiceOverIdsAsString() const
{
	TArray<FString> VoiceOverIds;
	
	if (!Settings.DialogAudioDefinitionsTable)
	{
		return VoiceOverIds;
	}

	TArray<FDialogAudioDefinition*> DialogAudioDefinitions;
	Settings.DialogAudioDefinitionsTable->GetAllRows("", DialogAudioDefinitions);
	for (auto* DialogAudioDefinition: DialogAudioDefinitions)
	{
		if (DialogAudioDefinition->AudioType == EDialogAudioType::Voice_Over)
		{
			VoiceOverIds.Add(DialogAudioDefinition->DialogAudioId.ToString());
		}
	}

	return VoiceOverIds;
}

TArray<FName> UVNMSettings::GetDialogSceneIds() const
{
	TArray<FName> DialogSceneIds;
	
	if (!Settings.DialogSceneDefinitionsTable)
	{
		return DialogSceneIds;
	}

	TArray<FDialogSceneDefinition*> DialogSceneDefinitions;
	Settings.DialogSceneDefinitionsTable->GetAllRows("", DialogSceneDefinitions);
	for (auto* DialogSceneDefinition: DialogSceneDefinitions)
	{
		DialogSceneIds.Add(DialogSceneDefinition->DialogSceneId);
	}

	return DialogSceneIds;
}

TArray<FDialogSceneDefinition> UVNMSettings::GetDialogSceneDefinitions() const
{
	TArray<FDialogSceneDefinition> DialogSceneDefinitionsReturnList;
	
	if (!Settings.DialogSceneDefinitionsTable)
	{
		return DialogSceneDefinitionsReturnList;
	}

	TArray<FDialogSceneDefinition*> DialogSceneDefinitions;
	Settings.DialogSceneDefinitionsTable->GetAllRows("", DialogSceneDefinitions);
	for (auto* DialogSceneDefinition: DialogSceneDefinitions)
	{
		DialogSceneDefinitionsReturnList.Add(*DialogSceneDefinition);
	}

	return DialogSceneDefinitionsReturnList;
}

FDialogSceneDefinition UVNMSettings::GetDialogSceneDefinitionById(const FName& DialogSceneId) const
{
	TArray<FDialogSceneDefinition> DialogSceneDefinitions = GetDialogSceneDefinitions();

	for (const auto& DialogSceneDefinition: DialogSceneDefinitions)
	{
		if (DialogSceneDefinition.DialogSceneId == DialogSceneId)
		{
			return DialogSceneDefinition;
		}
	}

	return FDialogSceneDefinition();
}

TArray<FActorIdentifier> UVNMSettings::GetDialogSceneCameraNamesByDialogSceneId(const FName& DialogSceneId) const
{
	FDialogSceneDefinition DialogSceneDefinition = GetDialogSceneDefinitionById((DialogSceneId));

	return DialogSceneDefinition.DialogCameraNames;
}

FName UVNMSettings::GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel(const FName& DialogSceneId, const FString& CameraLabel) const
{
	TArray<FActorIdentifier> Cameras = GetDialogSceneCameraNamesByDialogSceneId(DialogSceneId);

	FActorIdentifier* CameraIdentifier = Cameras.FindByPredicate([CameraLabel](FActorIdentifier ActorIdentifier){ return ActorIdentifier.ActorLabel == CameraLabel; });

	return (CameraIdentifier) ? CameraIdentifier->ActorInternalName : NAME_None;
}

TArray<FActorIdentifier> UVNMSettings::GetDialogSceneSpawnLocationNamesByDialogSceneId(const FName& DialogSceneId) const
{
	FDialogSceneDefinition DialogSceneDefinition = GetDialogSceneDefinitionById((DialogSceneId));

	return DialogSceneDefinition.DialogSpawnLocationNames;
}

FName UVNMSettings::GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel(const FName& DialogSceneId, const FString& LocationLabel) const
{
	TArray<FActorIdentifier> Locations = GetDialogSceneSpawnLocationNamesByDialogSceneId(DialogSceneId);

	FActorIdentifier* LocationIdentifier = Locations.FindByPredicate([LocationLabel](FActorIdentifier ActorIdentifier){ return ActorIdentifier.ActorLabel == LocationLabel; });

	return (LocationIdentifier) ? LocationIdentifier->ActorInternalName : NAME_None;
}

TArray<FName> UVNMSettings::GetDialogIds() const
{
	TArray<FName> DialogIds;

	if (!Settings.DialogDefinitonsTable)
	{
		return DialogIds;
	}

	TArray<FDialogDefinition*> DialogDefinitions;
	Settings.DialogDefinitonsTable->GetAllRows("", DialogDefinitions);
	for (auto* DialogDefinition: DialogDefinitions)
	{
		DialogIds.Add(DialogDefinition->DialogueId);
	}

	return DialogIds;
}

TArray<FDialogDefinition> UVNMSettings::GetDialogDefinitions() const
{
	TArray<FDialogDefinition> DialogDefinitionsReturnList;

	TArray<FDialogDefinition*> DialogDefinitions;

	if (!Settings.DialogDefinitonsTable)
	{
		return DialogDefinitionsReturnList;
	}
	
	Settings.DialogDefinitonsTable->GetAllRows("", DialogDefinitions);
	for (auto* DialogDefinition: DialogDefinitions)
	{
		DialogDefinitionsReturnList.Add(*DialogDefinition);
	}

	return DialogDefinitionsReturnList;
}

FDialogDefinition UVNMSettings::GetDialogDefinitionById(const FName& DialogId) const
{
	TArray<FDialogDefinition> DialogDefinitions = GetDialogDefinitions();

	for (const auto& DialogDefinition: DialogDefinitions)
	{
		if (DialogDefinition.DialogueId == DialogId)
		{
			return DialogDefinition;
		}
	}

	return FDialogDefinition();
}

FDialogDefinition UVNMSettings::GetDialogDefinitionByClass(const TSubclassOf<UDialogObject> DialogObjectClass) const
{
	TArray<FDialogDefinition> DialogDefinitions = GetDialogDefinitions();

	for (const auto& DialogDefinition: DialogDefinitions)
	{
		if (DialogDefinition.DialogueObjectClass == DialogObjectClass)
		{
			return DialogDefinition;
		}
	}

	return FDialogDefinition();
}

TArray<FName> UVNMSettings::GetDialogMemoryIdsByDialogId(const FName& DialogId) const
{
	TArray<FName> DialogMemoryIds;
	FDialogDefinition DialogDefinition = GetDialogDefinitionById(DialogId);

	if (!DialogDefinition.IsValid())
	{
		return DialogMemoryIds;
	}

	for (const FMemoryDefinition& Definition : DialogDefinition.DialogMemoryDefinitions)
	{
		DialogMemoryIds.Add(Definition.MemoryId);
	}

	return DialogMemoryIds;
}

FMemoryDefinition UVNMSettings::GetDialogMemoryDefinitionById(const FName& DialogId, const FName& MemoryId) const
{
	FMemoryDefinition DialogMemoryDefinition;
	FDialogDefinition DialogDefinition = GetDialogDefinitionById(DialogId);

	if (!DialogDefinition.IsValid())
	{
		return FMemoryDefinition();
	}

	for (const FMemoryDefinition& Definition : DialogDefinition.DialogMemoryDefinitions)
	{
		if (Definition.MemoryId == MemoryId)
		{
			return Definition;
		}
	}

	return FMemoryDefinition();	
}

TArray<FMemoryDefinition> UVNMSettings::GetDialogMemoryDefinitionsByDialogId(const FName& DialogId) const
{
	TArray<FName> CharacterMemoryIds;
	FDialogDefinition DialogDefinition = GetDialogDefinitionById(DialogId);

	return DialogDefinition.DialogMemoryDefinitions;
}
