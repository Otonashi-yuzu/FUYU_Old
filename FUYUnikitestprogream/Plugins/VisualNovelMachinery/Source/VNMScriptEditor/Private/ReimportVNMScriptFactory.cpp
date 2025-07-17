// Fill out your copyright notice in the Description page of Project Settings.


#include "ReimportVNMScriptFactory.h"

#include "DialogBlueprint.h"
#include "DialogObject.h"
#include "DialogStartNode.h"
#include "GraphEditAction.h"
#include "LogCategoryVNMScriptEditor.h"
#include "VNMScriptParser.h"
#include "EditorFramework/AssetImportData.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Misc/FileHelper.h"

UReimportVNMScriptFactory::UReimportVNMScriptFactory()
{
	SupportedClass = UDialogBlueprint::StaticClass();
	ParentClass = UDialogObject::StaticClass();

	bCreateNew = false;
}

bool UReimportVNMScriptFactory::CanReimport(UObject* Obj, TArray<FString>& OutFilenames)
{
	UDialogBlueprint* DialogBlueprint = Cast<UDialogBlueprint>(Obj);
	if(DialogBlueprint)
	{
		DialogBlueprint->AssetImportData->ExtractFilenames(OutFilenames);
		return true;
	}
	return false;
}

void UReimportVNMScriptFactory::SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths)
{
	UDialogBlueprint* DialogBlueprint = Cast<UDialogBlueprint>(Obj);
	if(DialogBlueprint && ensure(NewReimportPaths.Num() == 1))
	{
		DialogBlueprint->AssetImportData->UpdateFilenameOnly(NewReimportPaths[0]);
	}
}

EReimportResult::Type UReimportVNMScriptFactory::Reimport(UObject* Obj)
{
	if(!Obj || !Obj->IsA(UDialogBlueprint::StaticClass()))
	{
		return EReimportResult::Failed;
	}

	UDialogBlueprint* DialogBlueprint = Cast<UDialogBlueprint>(Obj);

	const FString ResolvedSourceFilePath = DialogBlueprint->AssetImportData->GetFirstFilename();
	if (!ResolvedSourceFilePath.Len())
	{
		// Since this is a new system most textures don't have paths, so logging has been commented out
		//UE_LOG(LogEditorFactories, Warning, TEXT("-- cannot reimport: texture resource does not have path stored."));
		return EReimportResult::Failed;
	}

	UE_LOG(LogVNMScriptEditor, Log, TEXT("Performing atomic reimport of [%s]"),*ResolvedSourceFilePath);

	// Ensure that the file provided by the path exists
	if (IFileManager::Get().FileSize(*ResolvedSourceFilePath) == INDEX_NONE)
	{
		UE_LOG(LogVNMScriptEditor, Warning, TEXT("-- cannot reimport: source file cannot be found."));
		return EReimportResult::Failed;
	}

	TArray<FString> FileLines;
	FFileHelper::LoadFileToStringArray(FileLines, *ResolvedSourceFilePath);
	FString::CullArray(&FileLines);

	DialogBlueprint->AssetImportData->Update(ResolvedSourceFilePath);			
	auto* ParentGraph = DialogBlueprint->GetLastEditedUberGraph();
	ParentGraph->Nodes.Empty();
	ParentGraph->NotifyGraphChanged();

	FBlueprintEditorUtils::RemoveGraphs(DialogBlueprint, ParentGraph->SubGraphs);
	ParentGraph->SubGraphs.Empty();
	
	auto* DialogStartNode = NewObject<UDialogStartNode>(ParentGraph);
	DialogStartNode->SetFlags(RF_Transactional);
	DialogStartNode->CreateNewGuid();
	DialogStartNode->PostPlacedNewNode();
	DialogStartNode->AllocateDefaultPins();
	DialogStartNode->NodePosX = 0;
	DialogStartNode->NodePosY = 0;
	DialogStartNode->bCommentBubblePinned = true;
	DialogStartNode->bCommentBubbleVisible = true;
	UEdGraphSchema_K2::SetNodeMetaData(DialogStartNode, FNodeMetadata::DefaultGraphNode);
	DialogStartNode->MakeAutomaticallyPlacedGhostNode();

	ParentGraph->AddNode(DialogStartNode);

	
	UVNMScriptParser::CreateDialogBlueprintFromStringArray(DialogBlueprint, DialogStartNode, FileLines);

	UE_LOG(LogVNMScriptEditor, Log, TEXT("-- imported successfully") );

	DialogBlueprint->AssetImportData->Update(ResolvedSourceFilePath);

	// Try to find the outer package so we can dirty it up
	if (DialogBlueprint->GetOuter())
	{
		DialogBlueprint->GetOuter()->MarkPackageDirty();
	}
	else
	{
		DialogBlueprint->MarkPackageDirty();
	}
	
	return EReimportResult::Succeeded;
}

int32 UReimportVNMScriptFactory::GetPriority() const
{
	return ImportPriority;
}

bool UReimportVNMScriptFactory::IsAutomatedImport() const
{
	return Super::IsAutomatedImport() || IsAutomatedReimport();
}
