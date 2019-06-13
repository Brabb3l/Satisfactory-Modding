// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Hologram/FGHologram.h"
#include "FGBuildableHologram.generated.h"

UCLASS()
class UFGFactoryLegsComponent : public UObject {
	GENERATED_BODY()
};

/**
 * The base class for building holograms.
 * The hologram is created from a buildables class.
 * The hologram is responsible for:
 * Snapping functionality when building.
 * Constructing the buildable.
 */
UCLASS()
class FACTORYGAME_API AFGBuildableHologram : public AFGHologram
{
	GENERATED_BODY()

protected:
	/** The class for the buildable this hologram wants to construct. Set on spawn. */
	UPROPERTY( )
	TSubclassOf< class AFGBuildable > mBuildableClass;

	/** The maximum allowed angle on the floor for this hologram to be placed on (in degrees). */
	UPROPERTY( EditDefaultsOnly, Category = "Hologram", meta = ( ClampMin = "0.0", ClampMax = "90.0", UIMin = "0.0", UIMax = "90.0" ) )
	float mMaxPlacementFloorAngle;
	UPROPERTY()
	class UFGFactoryLegsComponent* mLegs;

	/** If the frame mesh should be used to highlight connections in hologram. */
	uint32 mUseConveyorConnectionFrameMesh : 1;

	/** If the arrow mesh should be used to highlight a connection's direction in hologram. */
	uint32 mUseConveyorConnectionArrowMesh : 1;

	/** Component to check build clearance to other buildings. */
	UPROPERTY()
	class UBoxComponent* mClearanceBox;

	/** If we have snapped to another buildable, i.e. foundation, floor etc, this is it. */
	class AFGBuildable* mSnappedBuilding;
};
