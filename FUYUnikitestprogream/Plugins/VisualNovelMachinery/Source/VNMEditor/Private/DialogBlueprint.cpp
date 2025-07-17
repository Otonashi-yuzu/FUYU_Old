// Copyright (c) 2022 Al_Fe


#include "DialogBlueprint.h"

#include "DialogBlueprintGeneratedClass.h"
#include "DialogObject.h"
#include "EditorFramework/AssetImportData.h"

UClass* UDialogBlueprint::GetBlueprintClass() const
{
    return UDialogBlueprintGeneratedClass::StaticClass();
}

void UDialogBlueprint::GetReparentingRules(TSet<const UClass*>& AllowedChildrenOfClasses,
    TSet<const UClass*>& DisallowedChildrenOfClasses) const
{
    AllowedChildrenOfClasses.Add(UDialogObject::StaticClass());
}

bool UDialogBlueprint::AlwaysCompileOnLoad() const
{
    return true;
}

#if WITH_EDITOR
bool UDialogBlueprint::FindDiffs(const UBlueprint* OtherBlueprint, FDiffResults& Results) const
{
    const UDialogBlueprint* OtherDialogBlueprint = Cast<UDialogBlueprint>(OtherBlueprint);
    if (!OtherDialogBlueprint)
    {
        return false;
    }

    // Dialog BPs should diff correctly, as all the info is stored in graphs or the parent
    return true;
}

void UDialogBlueprint::PostInitProperties()
{
#if WITH_EDITORONLY_DATA
    if (!HasAnyFlags(RF_ClassDefaultObject | RF_NeedLoad))
    {
        AssetImportData = NewObject<UAssetImportData>(this, TEXT("AssetImportData"));
    }
#endif
    Super::PostInitProperties();
}

void UDialogBlueprint::PostLoad()
{
    Super::PostLoad();

#if WITH_EDITORONLY_DATA
    if (AssetImportData == nullptr)
    {
        AssetImportData = NewObject<UAssetImportData>(this, TEXT("AssetImportData"));
    }
#endif

}

void UDialogBlueprint::LoadModulesRequiredForCompilation()
{
    static const FName ModuleName(TEXT("VNMEditor"));
    FModuleManager::Get().LoadModule(ModuleName);
}
#endif