// Copyright (c) 2022 Al_Fe


#include "DialogObjectAssetActions.h"

#include "BlueprintEditor.h"
#include "BlueprintEditorModes.h"
#include "DialogBlueprintGeneratedClass.h"
#include "SBlueprintDiff.h"
#include "VNMSettings.h"
#include "ThumbnailRendering/SceneThumbnailInfo.h"

FText FDialogObjectAssetActions::GetAssetDescription(const FAssetData& AssetData) const
{
    if (auto* Settings = UVNMSettings::GetVNMSettings())
    {
        auto* Blueprint = Cast<UDialogBlueprint>(AssetData.GetAsset());

        if (!Blueprint ||!Blueprint->GeneratedClass)
        {
            return FText::FromString("");
        }
        
        TSubclassOf<UDialogObject> GeneratedClass = *Blueprint->GeneratedClass;
        const auto& Definition = Settings->GetDialogDefinitionByClass(GeneratedClass);

        return Definition.DialogueDescription;
    }
    
    return FText::FromString("");
}

uint32 FDialogObjectAssetActions::GetCategories()
{
    IAssetTools &AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
    return AssetTools.FindAdvancedAssetCategory(FName(TEXT("VNM")));
}

void FDialogObjectAssetActions::OpenAssetEditor(const TArray<UObject*>& InObjects,
                                                TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
    EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

    for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
    {
        auto Blueprint = Cast<UBlueprint>(*ObjIt);
        if (Blueprint && Blueprint->SkeletonGeneratedClass && Blueprint->GeneratedClass )
        {
            TSharedRef< FBlueprintEditor > NewBlueprintEditor(new FBlueprintEditor());

            TArray<UBlueprint*> Blueprints;
            Blueprints.Add(Blueprint);
            NewBlueprintEditor->InitBlueprintEditor(Mode, EditWithinLevelEditor, Blueprints, false);
            if (NewBlueprintEditor->GetTabManager()->HasTabSpawner(TEXT("VNMTab")))
            {
                NewBlueprintEditor->GetTabManager()->TryInvokeTab(FTabId(TEXT("VNMTab")), true);
            }
        }
        else
        {
            FMessageDialog::Open( EAppMsgType::Ok, NSLOCTEXT("AssetTypeActions","FailedToLoadBlueprint", "Blueprint could not be loaded because it derives from an invalid class.\nCheck to make sure the parent class for this blueprint hasn't been removed!"));
        }
    }
}

void FDialogObjectAssetActions::PerformAssetDiff(UObject* OldAsset, UObject* NewAsset, const FRevisionInfo& OldRevision,
    const FRevisionInfo& NewRevision) const
{
    UBlueprint* OldBlueprint = CastChecked<UBlueprint>(OldAsset);
    UBlueprint* NewBlueprint = CastChecked<UBlueprint>(NewAsset);

    // sometimes we're comparing different revisions of one single asset (other 
    // times we're comparing two completely separate assets altogether)
    const bool bIsSingleAsset = (NewBlueprint->GetName() == OldBlueprint->GetName());

    FText WindowTitle = NSLOCTEXT("AssetTypeActions","NamelessDialogBlueprintDiff", "Dialogue Blueprint Diff");
    // if we're diffing one asset against itself 
    if (bIsSingleAsset)
    {
        // identify the assumed single asset in the window's title
        WindowTitle = FText::Format(NSLOCTEXT("AssetTypeActions","DialogBlueprintDiff", "{0} - Dialogue Blueprint Diff"), FText::FromString(NewBlueprint->GetName()));
    }

    SBlueprintDiff::CreateDiffWindow(WindowTitle, OldBlueprint, NewBlueprint, OldRevision, NewRevision);
}
