// Fill out your copyright notice in the Description page of Project Settings.


#include "DetailsCustomization/DialogSceneDefinitionCustomization.h"

#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "EngineUtils.h"
#include "VNMCharacterSpawnLocation.h"
#include "VNMSettings.h"
#include "Camera/CameraActor.h"

// From SRowEditor.cpp
class FStructFromDataTable : public FStructOnScope
{
	TWeakObjectPtr<UDataTable> DataTable;
	FName RowName;

public:
	FStructFromDataTable(UDataTable* InDataTable, FName InRowName)
		: FStructOnScope()
		, DataTable(InDataTable)
		, RowName(InRowName)
	{}

	virtual uint8* GetStructMemory() override
	{
		return (DataTable.IsValid() && !RowName.IsNone()) ? DataTable->FindRowUnchecked(RowName) : nullptr;
	}

	virtual const uint8* GetStructMemory() const override
	{
		return (DataTable.IsValid() && !RowName.IsNone()) ? DataTable->FindRowUnchecked(RowName) : nullptr;
	}

	virtual const UScriptStruct* GetStruct() const override
	{
		return DataTable.IsValid() ? DataTable->GetRowStruct() : nullptr;
	}

	virtual UPackage* GetPackage() const override
	{
		return DataTable.IsValid() ? DataTable->GetOutermost() : nullptr;
	}

	virtual void SetPackage(UPackage* InPackage) override
	{
	}

	virtual bool IsValid() const override
	{
		return !RowName.IsNone()
			&& DataTable.IsValid()
			&& DataTable->GetRowStruct()
			&& DataTable->FindRowUnchecked(RowName);
	}

	virtual void Destroy() override
	{
		DataTable = nullptr;
		RowName = NAME_None;
	}

	FName GetRowName() const
	{
		return RowName;
	}

	TWeakObjectPtr<UDataTable> GetDataTable() const
	{
		return DataTable;
	}
};

TSharedRef<IDetailCustomization> FDialogSceneDefinitionCustomization::MakeInstance()
{
	// Create the instance and returned a SharedRef
	return MakeShareable(new FDialogSceneDefinitionCustomization());
}

void FDialogSceneDefinitionCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	TArray<TSharedPtr<FStructOnScope>> Structs;
	DetailBuilder.GetStructsBeingCustomized(Structs);

	auto* Struct = static_cast<FStructFromDataTable*>(Structs[0].Get());
	FDialogSceneDefinition* Definition = reinterpret_cast<FDialogSceneDefinition*>(Struct->GetStructMemory());
	IDetailCategoryBuilder& Category = DetailBuilder.EditCategory(TEXT("Dialog Scene"));

	Category.AddCustomRow(NSLOCTEXT("VNMEditor", "RegenerateCameraNames", "Rengerate Camera Names"))
 	[
 		SNew(SHorizontalBox)
 		+ SHorizontalBox::Slot()
 		.AutoWidth()
 		[
			SNew(SButton)
			.OnClicked(this, &FDialogSceneDefinitionCustomization::OnRegenerateCameraNamesButtonClicked, Struct->GetDataTable(), Definition)
			[
				SNew(STextBlock)
				.Text(FText::FromString(TEXT("Generate Camera Names from Level")))
			]
		]
		+ SHorizontalBox::Slot()
		.AutoWidth()
		[
		   SNew(SButton)
		   .OnClicked(this, &FDialogSceneDefinitionCustomization::OnRegenerateSpawnLocationNamesButtonClicked, Struct->GetDataTable(), Definition)
		   [
			   SNew(STextBlock)
			   .Text(FText::FromString(TEXT("Generate Spawn Location Names from Level")))
		   ]
		]
 	];
}

FReply FDialogSceneDefinitionCustomization::OnRegenerateCameraNamesButtonClicked(TWeakObjectPtr<UDataTable> DataTable, FDialogSceneDefinition* Definition)
{
	if (!Definition)
	{
		return FReply::Handled();
	}
	
	auto* World = Definition->DialogScene.LoadSynchronous();

	if (!World)
	{
		return FReply::Handled();
	}

	DataTable->MarkPackageDirty();

	Definition->DialogCameraNames.Empty();

	for (TActorIterator<ACameraActor> ActorItr(World); ActorItr; ++ActorItr)
	{
		FActorIdentifier ActorIdentifier;
#if ENGINE_MAJOR_VERSION >= 5
		ActorIdentifier.ActorLabel = ActorItr->GetActorLabel();
		ActorIdentifier.ActorInternalName = ActorItr->GetFName();
#else
		ActorIdentifier.ActorLabel = ActorItr->GetName();
		ActorIdentifier.ActorInternalName = ActorItr->GetFName();
#endif
		
		Definition->DialogCameraNames.Add(ActorIdentifier);
	}
	
	return FReply::Handled();
}

FReply FDialogSceneDefinitionCustomization::OnRegenerateSpawnLocationNamesButtonClicked(TWeakObjectPtr<UDataTable> DataTable, FDialogSceneDefinition* Definition)
{
	if (!Definition)
	{
		return FReply::Handled();
	}
	
	auto* World = Definition->DialogScene.LoadSynchronous();

	if (!World)
	{
		return FReply::Handled();
	}

	DataTable->MarkPackageDirty();

	Definition->DialogSpawnLocationNames.Empty();

	for (TActorIterator<AVNMCharacterSpawnLocation> ActorItr(World); ActorItr; ++ActorItr)
	{
		FActorIdentifier ActorIdentifier;
#if ENGINE_MAJOR_VERSION >= 5
		ActorIdentifier.ActorLabel = ActorItr->GetActorLabel();
		ActorIdentifier.ActorInternalName = ActorItr->GetFName();
#else
		ActorIdentifier.ActorLabel =  ActorItr->GetName();
		ActorIdentifier.ActorInternalName = ActorItr->GetFName();
#endif
		Definition->DialogSpawnLocationNames.Add(ActorIdentifier);
	}
	
	return FReply::Handled();
}
