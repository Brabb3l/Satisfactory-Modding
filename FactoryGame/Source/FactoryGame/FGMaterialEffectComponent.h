// Copyright 2016-2018 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Resources/FGItemDescriptor.h"
#include "FGMaterialEffectComponent.generated.h"


USTRUCT( BlueprintType )
struct FCostIngredientEffectActorInfo
{
	GENERATED_BODY()

	/** What class is this cost of */
	UPROPERTY( BlueprintReadWrite )
	TSubclassOf< class UFGItemDescriptor > ItemClass;

	/** Delay between this and the previous cost actor spawned */
	UPROPERTY( BlueprintReadWrite )
	float SpawnDelay;

	/** Where this cost actor should travel to */
	UPROPERTY( BlueprintReadWrite )
	FVector TargetLocation;
};

/**
 * Base class for material based effects on actors.
 */
UCLASS( Abstract, Blueprintable, ClassGroup = ( Custom ), meta = ( BlueprintSpawnableComponent ), hidecategories = ( "Component Tick", Collision ) )
class FACTORYGAME_API UFGMaterialEffectComponent : public UActorComponent
{
	GENERATED_BODY()
public:

	/** Called when material effect has finished. */
	void* mOnStarted;

	/** Called when material effect has finished. */
	void* mOnEnded;

protected:
	/** Meshes affected by the material effect. */
	UPROPERTY()
	TArray< UMeshComponent* > mMeshes;

	/** Material to display. */
	UPROPERTY( EditDefaultsOnly, Category = "Material Effect" )
	class UMaterialInterface* mMaterial;

	/** How long is this effect. */
	float mDuration;

	/** Automatically start playing this effect. */
	bool mAutoStart;

	/** Is this effect running */
	bool mIsStarted;

	/** Should this effect be auto destroyed on finish. */
	UPROPERTY( EditDefaultsOnly, Category = "Material Effect" )
	bool mAutoDestroy;

	/** The cached mids we apply effects to. */
	UPROPERTY( BlueprintReadOnly )
	TArray< class UMaterialInstanceDynamic* > mMids;
};
