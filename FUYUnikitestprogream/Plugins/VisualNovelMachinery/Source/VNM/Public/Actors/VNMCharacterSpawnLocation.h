// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VNMCharacterSpawnLocation.generated.h"

class USkeletalMeshComponent;

UCLASS()
class VNM_API AVNMCharacterSpawnLocation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVNMCharacterSpawnLocation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	void SetCharacterByCharacterIdAndEmotionId(const FName& InCharacterId, const FName& InEmotionId);
	void ClearCharacter();

	FName GetCharacterId() const { return CharacterId; }
	FName GetEmotionId() const { return EmotionId; }

protected:
	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComponent;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category=Preview)
	class USkeletalMesh* PreviewMesh;
	
	UPROPERTY(EditAnywhere, Category=Preview)
	class UAnimationAsset* PreviewAnimation;
	
	UPROPERTY()
	USkeletalMeshComponent* PreviewSkeletalMeshComponent;
#endif
	
	UPROPERTY(BlueprintReadOnly, Category=Character)
	FName CharacterId;

	UPROPERTY(BlueprintReadOnly, Category=Character)
	FName EmotionId;
};
