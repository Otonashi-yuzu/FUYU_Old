// Fill out your copyright notice in the Description page of Project Settings.


#include "VNMYarnSettings.h"

FName UVNMYarnSettings::GetContainerName() const
{
	return TEXT("Project");
}

FName UVNMYarnSettings::GetCategoryName() const
{
	return TEXT("Plugins");
}

FName UVNMYarnSettings::GetSectionName() const
{
	return TEXT("VNM Yarn");
}

#if WITH_EDITOR
FText UVNMYarnSettings::GetSectionText() const
{
	return NSLOCTEXT("VNMYarn", "EditorSettingsName", "Visual Novel Machinery Yarn");
}

FText UVNMYarnSettings::GetSectionDescription() const
{
	return NSLOCTEXT("VNMYarnEditor", "EditorSettingsDescription", "Configure the Visual Novel Machinery Yarn integration");
}
#endif
