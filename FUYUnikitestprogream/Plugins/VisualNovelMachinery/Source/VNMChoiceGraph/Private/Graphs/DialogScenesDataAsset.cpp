// Fill out your copyright notice in the Description page of Project Settings.


#include "Graphs/DialogScenesDataAsset.h"

#if WITH_EDITOR
#include "DialogObjectNodesUtils.h"
#endif

#if WITH_EDITOR
void UDialogScenesDataAsset::ConstructScenesData()
{
	if (!UDialogObjectNodesUtils::IsDialogDataComplete(ScenesData))
	{
		ScenesData = UDialogObjectNodesUtils::ConstructScenesDataFromDialogs();
		MarkPackageDirty();
	}
}

#endif