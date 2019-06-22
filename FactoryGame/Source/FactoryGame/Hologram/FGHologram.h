// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "ItemAmount.h"
#include "FGHologram.generated.h"

UCLASS()
class UAkComponent : public UObject {
	GENERATED_BODY()
};

/**
 * Enum for different scroll modes a hologram can implement.
 */
UENUM( BlueprintType )
enum class EHologramScrollMode : uint8
{
	HSM_NONE = 0			UMETA( DisplayName = "None" ),
	HSM_ROTATE = 1			UMETA( DisplayName = "Rotate" ),
	HSM_RAISE_LOWER = 2		UMETA( DisplayName = "Raise/Lower" ),
	HSM_MAX					UMETA( Hidden )
};

/**
 * The base class for all holograms.
 * It defines the interface all "buildable things" must follow.
 *
 * Note : Do not use SetActorLocation(), SetActorRotation() etc to move a hologram.
 *       Use SetHologramLocationAndRotation() instead as this handles snapping etc.
 */
UCLASS( hidecategories = ( "Actor", "Input", "Replication", "Rendering", "Actor Tick" ) )
class FACTORYGAME_API AFGHologram : public AActor
{
	GENERATED_BODY()
	
protected:
	/**
	 * These classes will be considered a valid hit when checking is valid hit result.
	 * By default all static geometry is considered valid.
	 * Buildings, vehicles and pawns are not considered valid by default.
	 */
	UPROPERTY( VisibleDefaultsOnly, Category = "Hologram" )
	TArray< TSubclassOf< class AActor > > mValidHitClasses;

	/** The recipe for this hologram. */
	UPROPERTY( )
	TSubclassOf< class UFGRecipe > mRecipe;

	/** Looping sound to play on holograms */
	UPROPERTY()
	class UAkComponent* mLoopSound;

	/** Clearance detector box */
	UPROPERTY()
	class UBoxComponent* mClearanceDetector;

	/** No enforced snapping, foundations use this for now. */
	bool mNoSnapMode;

	/** Whether the hologram should snap to guide lines or not */
	bool mSnapToGuideLines;

	/** Current scroll mode, determines what calls to Scroll() does. */
	EHologramScrollMode mScrollMode;

	/** Current scroll value of the rotation. How this is interpreted as a rotation is up to the hologram placement code. */
	int32 mScrollRotation;

	/** Current scroll value of the raise/lower. How this is interpreted as a height is up to the hologram placement code. */
	int32 mScrollRaiseLowerValue;

	/** Can we construct the building, updated by SetCanConstruct from the build gun. */
	UPROPERTY( )
	bool mPlacementMaterial;

	/** Material on hologram for valid placement. */
	UPROPERTY()
	class UMaterialInstance* mValidPlacementMaterial;

	/** Material on hologram for invalid placement. */
	UPROPERTY()
	class UMaterialInstance* mInvalidPlacementMaterial;

	/** Tags for marking components in the hologram. */
	static const FName HOLOGRAM_MESH_TAG;
	static const FName HOLOGRAM_DEPTH_MESH_TAG;

	/**
	 * Enables composite holograms.
	 * Children are included in the cost and are constructed together with this hologram.
	 * Children can be optionally disabled with mIsDisabled.
	 *
	 * You're responsible for:
	 *  - updating the childrens location/rotation.
	 *  - validate placement for children.
	 *  - set correct materials on children.
	 */
	UPROPERTY()
	TArray< class AFGHologram* > mChildren;
	
	/** Should we use the simplified material for valid placement? */
	bool mUseSimplifiedHologramMaterial;
private:
	/** Who is building */
	UPROPERTY( )
	APawn* mConstructionInstigator;

	/** If this hologram is disabled and should not be visible or constructed. */
	UPROPERTY()
	bool mIsDisabled;

	/** If the hologram has changed, i.e. multi step placement or rotation. */
	UPROPERTY( )
	bool mIsChanged;

	/** The reason why we couldn't construct this hologram, if it's empty then we can construct it */
	TArray< TSubclassOf< void* > > mConstructDisqualifiers;

	/** The client needs to know the initial saved scroll mode value from the BuildGun. */
	UPROPERTY( )
	int32 mInitialScrollModeValue;
};