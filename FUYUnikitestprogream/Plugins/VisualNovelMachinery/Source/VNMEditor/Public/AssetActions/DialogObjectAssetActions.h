// Copyright (c) 2022 Al_Fe

#pragma once

#include "DialogObject.h"
#include "AssetTypeActions_Base.h"
#include "DialogBlueprint.h"


class FDialogObjectAssetActions : public FAssetTypeActions_Base
{
public:
	virtual FText GetName() const override { return NSLOCTEXT("AssetActionDIalogObject", "DialogObject","Dialogue Blueprint"); }
	virtual FColor GetTypeColor() const override { return FColor(127,255,255); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override;
	virtual UClass* GetSupportedClass() const override { return UDialogBlueprint::StaticClass(); }

	virtual uint32 GetCategories() override;
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects,
	                             TSharedPtr<IToolkitHost> EditWithinLevelEditor) override;
	virtual void PerformAssetDiff(UObject* OldAsset, UObject* NewAsset, const FRevisionInfo& OldRevision,
		const FRevisionInfo& NewRevision) const override;
};
