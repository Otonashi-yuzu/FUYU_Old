// Copyright (c) 2022 Al_Fe


#include "VNMCharacterSpawnLocation.h"

#include "VNMSettings.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AVNMCharacterSpawnLocation::AVNMCharacterSpawnLocation()
	: Super()
{
	RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DefaultSceneRoot"));
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMeshComponent->SetupAttachment(RootComponent);

	{
		// Structure to hold one-time initialization
		struct FConstructorStatics
		{
			ConstructorHelpers::FObjectFinderOptional<USkeletalMesh> CubeMesh;
			FConstructorStatics()
				: CubeMesh(TEXT("/Engine/EngineMeshes/SkeletalCube"))
			{
			}
		};
		static FConstructorStatics ConstructorStatics;
	
		SkeletalMeshComponent->SkeletalMesh = ConstructorStatics.CubeMesh.Get();
	}

	

#if WITH_EDITOR
	PreviewSkeletalMeshComponent = CreateEditorOnlyDefaultSubobject<USkeletalMeshComponent>(TEXT("PreviewSkeletalMesh"));

	if (PreviewSkeletalMeshComponent)
	{
		PreviewSkeletalMeshComponent->SetupAttachment(RootComponent);
		PreviewSkeletalMeshComponent->bIsEditorOnly = true;
	}
#endif
}

// Called when the game starts or when spawned
void AVNMCharacterSpawnLocation::BeginPlay()
{
	Super::BeginPlay();

#if WITH_EDITOR
	if (PreviewSkeletalMeshComponent)
	{
		PreviewSkeletalMeshComponent->SetSkeletalMesh(nullptr);
	}
#endif
	SkeletalMeshComponent->SetSkeletalMesh(nullptr);
}

#if WITH_EDITOR
void AVNMCharacterSpawnLocation::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
	if (PropertyName == GET_MEMBER_NAME_CHECKED(AVNMCharacterSpawnLocation, PreviewMesh))
	{
		PreviewSkeletalMeshComponent->SetSkeletalMesh(PreviewMesh);
	}
	if (PropertyName == GET_MEMBER_NAME_CHECKED(AVNMCharacterSpawnLocation, PreviewAnimation))
	{
		PreviewSkeletalMeshComponent->SetUpdateAnimationInEditor(IsValid(PreviewAnimation));
		PreviewSkeletalMeshComponent->PlayAnimation(PreviewAnimation, true);
	}
}
#endif

void AVNMCharacterSpawnLocation::SetCharacterByCharacterIdAndEmotionId(const FName& InCharacterId, const FName& InEmotionId)
{
	CharacterId = InCharacterId;
	EmotionId = InEmotionId;
	
	const FCharacterDefinition CharacterDefinition = UVNMSettings::GetVNMSettings()->GetCharacterDefinitionById(InCharacterId);
	
	SkeletalMeshComponent->SetSkeletalMesh(CharacterDefinition.CharacterMesh);
	SkeletalMeshComponent->PlayAnimation(CharacterDefinition.CharacterAnimationPerEmotion[InEmotionId], true);
}

void AVNMCharacterSpawnLocation::ClearCharacter()
{
	CharacterId = NAME_None;
	EmotionId = NAME_None;
	SkeletalMeshComponent->SetSkeletalMesh(nullptr);
}


