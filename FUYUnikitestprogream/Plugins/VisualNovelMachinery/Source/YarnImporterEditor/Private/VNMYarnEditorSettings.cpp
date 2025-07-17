// Fill out your copyright notice in the Description page of Project Settings.


#include "VNMYarnEditorSettings.h"

FName UVNMYarnEditorSettings::GetContainerName() const
{
	return TEXT("Project");
}

FName UVNMYarnEditorSettings::GetCategoryName() const
{
	return TEXT("Plugins");
}

FName UVNMYarnEditorSettings::GetSectionName() const
{
	return TEXT("VNM Yarn Editor");
}

#if WITH_EDITOR
FText UVNMYarnEditorSettings::GetSectionText() const
{
	return NSLOCTEXT("VNMYarnEditor", "EditorSettingsName", "Visual Novel Machinery Yarn Editor");
}

FText UVNMYarnEditorSettings::GetSectionDescription() const
{
	return NSLOCTEXT("VNMYarnEditor", "EditorSettingsDescription", "Configure the editor part of Visual Novel Machinery Yarn integration");
}
#endif