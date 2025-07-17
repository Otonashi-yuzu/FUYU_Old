#include "AssetActions/MainMenuWidgetAssetActions.h"

#include "MainMenuWidget.h"
#include "SBlueprintDiff.h"
#include "WidgetBlueprintEditor.h"
#include "Misc/MessageDialog.h"

FText FMainMenuWidgetAssetActions::GetName() const
{
	return NSLOCTEXT("VNMEditor", "VNMMainMenuWidget", "Visual Novel Machinery Main Menu Widget");
}

UClass* FMainMenuWidgetAssetActions::GetSupportedClass() const
{
	return UMainMenuWidget::StaticClass();
}

FColor FMainMenuWidgetAssetActions::GetTypeColor() const
{
	return FColor(127,255,255);
}

uint32 FMainMenuWidgetAssetActions::GetCategories()
{
	IAssetTools &AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	return AssetTools.FindAdvancedAssetCategory(FName(TEXT("VNM")));
}

void FMainMenuWidgetAssetActions::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		auto Blueprint = Cast<UBlueprint>(*ObjIt);
		if (Blueprint && Blueprint->SkeletonGeneratedClass && Blueprint->GeneratedClass )
		{
			TSharedRef< FWidgetBlueprintEditor > NewBlueprintEditor(new FWidgetBlueprintEditor());

			TArray<UBlueprint*> Blueprints;
			Blueprints.Add(Blueprint);
			NewBlueprintEditor->InitWidgetBlueprintEditor(Mode, EditWithinLevelEditor, Blueprints, true);
		}
		else
		{
			FMessageDialog::Open( EAppMsgType::Ok, NSLOCTEXT("VNMEditor", "FailedToLoadWidgetBlueprint", "Widget Blueprint could not be loaded because it derives from an invalid class.\nCheck to make sure the parent class for this blueprint hasn't been removed!"));
		}
	}
}

void FMainMenuWidgetAssetActions::PerformAssetDiff(UObject* Asset1, UObject* Asset2, const FRevisionInfo& OldRevision, const FRevisionInfo& NewRevision) const
{
	UBlueprint* OldBlueprint = CastChecked<UBlueprint>(Asset1);
	UBlueprint* NewBlueprint = CastChecked<UBlueprint>(Asset2);

	// sometimes we're comparing different revisions of one single asset (other 
	// times we're comparing two completely separate assets altogether)
	bool bIsSingleAsset = (NewBlueprint->GetName() == OldBlueprint->GetName());

	FText WindowTitle = NSLOCTEXT("VNMEditor", "NamelessWidgetBlueprintDiff", "Widget Blueprint Diff");
	// if we're diffing one asset against itself 
	if (bIsSingleAsset)
	{
		// identify the assumed single asset in the window's title
		WindowTitle = FText::Format(NSLOCTEXT("VNMEditor", "WidgetBlueprintDiff", "{0} - Widget Blueprint Diff"), FText::FromString(NewBlueprint->GetName()));
	}

	SBlueprintDiff::CreateDiffWindow(WindowTitle, OldBlueprint, NewBlueprint, OldRevision, NewRevision);
}
