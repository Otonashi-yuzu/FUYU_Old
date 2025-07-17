// Copyright (c) 2022 Al_Fe

#include "VNMTabSummoner.h"

#include "SVNMTab.h"

FVNMTabSummoner::FVNMTabSummoner(TSharedPtr<FBlueprintEditor> BlueprintEditor)
	: FWorkflowTabFactory("VNMTab", BlueprintEditor)
	, WeakBlueprintEditor(BlueprintEditor)
{
	bIsSingleton = true;

	TabLabel = NSLOCTEXT("VNMEditor", "VNMTabName", "Visual Novel Machinery");
}

TSharedRef<SWidget> FVNMTabSummoner::CreateTabBody(const FWorkflowTabSpawnInfo& Info) const
{
	return SNew(SVNMTab, WeakBlueprintEditor.Pin()->GetBlueprintObj(), WeakBlueprintEditor.Pin());
}
