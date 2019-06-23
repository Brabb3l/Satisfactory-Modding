// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGUseableInterface.h"
#include "FGBuildableConveyorBase.h"
#include "Components/SplineComponent.h"
#include "FGSplineComponent.h"
#include "FGBuildableConveyorBelt.generated.h"

UCLASS()
class UFGSoundSplineComponent : public UObject {
	GENERATED_BODY()
};

/**
 * Valid state for picking up conveyor belt items.
 */
UCLASS()
class UFGUseState_ConveyorBeltValid : public UFGUseState
{
	GENERATED_BODY()
public:
	UFGUseState_ConveyorBeltValid() { mIsUsableState = true; mWantAdditonalData = true; }

public:
	/** index for the looked at item in mItems */
	int32 mItemIndex;
};

UCLASS()
class UFGUseState_ConveyorBeltFullInventory : public UFGUseState
{
	GENERATED_BODY()
public:
	UFGUseState_ConveyorBeltFullInventory() { mIsUsableState = false; mWantAdditonalData = true; }

public:
	/** index for the looked at item in mItems */
	int32 mItemIndex;
};

/**
 * State for when the belt is empty.
 */
UCLASS()
class UFGUseState_ConveyorBeltEmpty : public UFGUseState
{
	GENERATED_BODY()
public:
	UFGUseState_ConveyorBeltEmpty() { mIsUsableState = false; mWantAdditonalData = false; }
};

/**
 * Base for conveyor belts.
 * Assumption: Conveyors are never rotated, rotation is always 0,0,0.
 */
UCLASS(Abstract)
class FACTORYGAME_API AFGBuildableConveyorBelt : public AFGBuildableConveyorBase
{
	GENERATED_BODY()
private:
	friend class AFGConveyorBeltHologram;

	/** Meshes for items. */
	UPROPERTY(Meta = (NoAutoJson))
		TMap< FName, class UInstancedStaticMeshComponent* > mItemMeshMap;

	/** The spline component for this splined factory. */
	UPROPERTY(VisibleAnywhere, Category = "Spline")
		class UFGSplineComponent* mSplineComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "Audio")
		class UFGSoundSplineComponent* mSoundSplineComponent;

	/** The ak event to post for the sound spline */
	UPROPERTY(EditDefaultsOnly, Category = "AkComponent")
		class UAkAudioEvent* mSplineAudioEvent;

	/** Indicates if the factory is within significance distance */
	bool mIsSignificant;
};
