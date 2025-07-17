// Fill out your copyright notice in the Description page of Project Settings.


#include "YarnFactory.h"

#include "DialogBlueprint.h"
#include "DialogBlueprintGeneratedClass.h"
#include "DialogObject.h"
#include "DialogStartNode.h"
#include "EdGraphSchema_K2.h"
#include "LogCategoryYarnImporter.h"
#include "VNMScriptParser.h"
#include "VNMYarnEditorSettings.h"
#include "YarnParser.h"
#include "EditorFramework/AssetImportData.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Misc/MessageDialog.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"

#define LOCTEXT_NAMESPACE "YarnImporterEditor"

UYarnFactory::UYarnFactory()
{
	SupportedClass = UDialogBlueprint::StaticClass();
	ParentClass = UDialogObject::StaticClass();

	bCreateNew = false;
	bEditAfterNew = true;

	bEditorImport = true;
	bText = true;

	Formats.Add(TEXT("yarn;Yarn Script File"));
}

bool UYarnFactory::FactoryCanImport(const FString& Filename)
{
	const FString Extension = FPaths::GetExtension(Filename);

	if (Extension == TEXT("yarn"))
	{
		return true;
	}

	return false;
}

UObject* UYarnFactory::FactoryCreateText(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const TCHAR*& Buffer, const TCHAR* BufferEnd, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{// Make sure we are trying to factory a Anim Blueprint, then create and init one
	check(InClass->IsChildOf(UDialogBlueprint::StaticClass()));

	const FFilePath YarnCompilerPath = UVNMYarnEditorSettings::Get()->YarnCompilerPath;
	if (YarnCompilerPath.FilePath.IsEmpty())
	{
		FMessageDialog::Open( EAppMsgType::Ok, LOCTEXT("CannotCreateDialogBlueprintMissingYarnCompiler", "Yarn Compiler not found. make sure you set the Yarn Compiler Path in the VNM Yarn Settings.") );
		return nullptr;
	}

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

			FString stdOut;
			FString stdErr;

			int32 returnCode;

			FString params;

			params.Append(TEXT("compile "));
			params.Append(TEXT("--stdout "));
			params.Append(CurrentFilename);

			// Run ysc to get our compilation result
			UE_LOG(LogYarnImporter, Log, TEXT("Calling ysc with %s"), *params);
			FPlatformProcess::ExecProcess(*YarnCompilerPath.FilePath, *params, &returnCode, &stdOut, &stdErr);

			UE_LOG(LogYarnImporter, Log, TEXT("ysc returned %i; stdout:\n%s\nstderr:%s\n"), returnCode, *stdOut, *stdErr);
			
			TSharedRef< TJsonReader<> > Reader = TJsonReaderFactory<>::Create( stdOut );

			TSharedPtr<FJsonObject> YarnJson;
			verify( FJsonSerializer::Deserialize( Reader, YarnJson ) );
			check( YarnJson.IsValid() );

			UYarnParser::ParseYarn(NewBP, DialogStartNode, YarnJson);
			UVNMScriptParser::FormatDialogBlueprint(NewBP, DialogStartNode);
		}
        
		return NewBP;
	}
}

#undef LOCTEXT_NAMESPACE