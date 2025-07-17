// Copyright (c) 2022 Al_Fe

#include "VNMEditorSettings.h"

UVNMEditorSettings::UVNMEditorSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

FName UVNMEditorSettings::GetContainerName() const
{
	return TEXT("Project");
}

FName UVNMEditorSettings::GetCategoryName() const
{
	return TEXT("Plugins");
}

FName UVNMEditorSettings::GetSectionName() const
{
	return TEXT("VNM Editor");
}

#if WITH_EDITOR
FText UVNMEditorSettings::GetSectionText() const
{
	return NSLOCTEXT("VNMEditor", "EditorSettingsName", "Visual Novel Machinery Editor");
}

FText UVNMEditorSettings::GetSectionDescription() const
{
	return NSLOCTEXT("VNMEditor", "EditorSettingsDescription", "Configure the editor part of Visual Novel Machinery plugin");
}
#endif