// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "BlueprintEditor.h"
#include "WorkflowOrientedApp/WorkflowTabFactory.h"


struct FVNMTabSummoner	: public FWorkflowTabFactory
{
	FVNMTabSummoner(TSharedPtr<FBlueprintEditor> BlueprintEditor);

	virtual TSharedRef<SWidget> CreateTabBody(const FWorkflowTabSpawnInfo& Info) const override;

protected:
	TWeakPtr<FBlueprintEditor> WeakBlueprintEditor;
};
