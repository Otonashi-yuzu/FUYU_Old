// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "DialogBlueprint.generated.h"

/**
 * 
 */
UCLASS()
class VNMEDITOR_API UDialogBlueprint : public UBlueprint
{
	GENERATED_BODY()

public:
	virtual UClass* GetBlueprintClass() const override;
	virtual bool AllowsDynamicBinding() const override { return true; }
	virtual void GetReparentingRules(TSet<const UClass*>& AllowedChildrenOfClasses,
		TSet<const UClass*>& DisallowedChildrenOfClasses) const override;
	virtual bool AlwaysCompileOnLoad() const override;
#if WITH_EDITOR
	virtual bool FindDiffs(const UBlueprint* OtherBlueprint, FDiffResults& Results) const override;
#endif

	virtual void PostInitProperties() override;
	virtual void PostLoad() override;

#if WITH_EDITORONLY_DATA

	UPROPERTY(VisibleAnywhere, Instanced, Category=ImportSettings)
	class UAssetImportData* AssetImportData;

#endif
	
protected:
#if WITH_EDITOR
	virtual void LoadModulesRequiredForCompilation() override;
#endif

};
