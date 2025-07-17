// Fill out your copyright notice in the Description page of Project Settings.


#include "VNMScriptFactory.h"

#include "DialogBlueprint.h"
#include "DialogBlueprintGeneratedClass.h"
#include "DialogObject.h"
#include "DialogStartNode.h"
#include "VNMScriptParser.h"
#include "EditorFramework/AssetImportData.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Misc/FileHelper.h"

#define LOCTEXT_NAMESPACE "VNMScriptEditor"

UVNMScriptFactory::UVNMScriptFactory()
{
	SupportedClass = UDialogBlueprint::StaticClass();
	ParentClass = UDialogObject::StaticClass();

	bCreateNew = false;
	bEditAfterNew = true;

	bEditorImport = true;
	bText = true;

	Formats.Add(TEXT("vnm;Visual Novel Machinery Script File"));
}

bool UVNMScriptFactory::FactoryCanImport(const FString& Filename)
{
	const FString Extension = FPaths::GetExtension(Filename);

	if (Extension == TEXT("vnm"))
	{
		return true;
	}

	return false;
}

UObject* UVNMScriptFactory::FactoryCreateText(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const TCHAR*& Buffer, const TCHAR* BufferEnd, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	// Make sure we are trying to factory a Anim Blueprint, then create and init one
	check(InClass->IsChildOf(UDialogBlueprint::StaticClass()));


	if ( ( ParentClass == nullptr ) || !FKismetEditorUtilities::CanCreateBlueprintOfClass(ParentClass) || !ParentClass->IsChildOf(UDialogObject::StaticClass()) )
	{
		FFormatNamedArguments Args;
		Args.Add( TEXT("ClassName"), ParentClass ? FText::FromString( ParentClass->GetName() ) : LOCTEXT("Null", "(null)") );
		FMessageDialog::Open( EAppMsgType::Ok, FText::Format( LOCTEXT("CannotCreateDialogBlueprint", "Cannot create a Dialogue Blueprint based on the class '{ClassName}'."), Args ) );
		return nullptr;
	}
	else
	{

		UDialogBlueprint* NewBP = CastChecked<UDialogBlueprint>(FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, InName, BPTYPE_Normal, UDialogBlueprint::StaticClass(), UDialogBlueprintGeneratedClass::StaticClass(), NAME_None));

		if (NewBP)
		{
			NewBP->AssetImportData->Update(CurrentFilename);
			
			auto* ParentGraph = NewBP->GetLastEditedUberGraph();
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

			
			FString FileString(Buffer);

			TArray<FString> FileLines;
			FileString.ParseIntoArrayLines(FileLines);

			UVNMScriptParser::CreateDialogBlueprintFromStringArray(NewBP, DialogStartNode, FileLines);
		}
        
		return NewBP;
	}
}

#undef LOCTEXT_NAMESPACE