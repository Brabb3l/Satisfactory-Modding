// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Hologram/FGFactoryHologram.h"
#include "Components/SplineComponent.h"
#include "FGFactoryConnectionComponent.h"
#include "FGConveyorBeltHologram.generated.h"

#define NUM_CONNECTIONS 2

/**
 * Hologram for the conveyor belts, contains all the curve bending magic.
 */
UCLASS()
class FACTORYGAME_API AFGConveyorBeltHologram : public AFGBuildableHologram
{
	GENERATED_BODY()
private:
	/** The spline component we're placing. */
	UPROPERTY()
	class UFGSplineComponent* mSplineComponent;

	/** Index of the currently moved point. */
	int32 mActivePointIdx;

	/** The two connection components for this conveyor. */
	UPROPERTY()
	class UFGFactoryConnectionComponent* mConnectionComponents[ NUM_CONNECTIONS ];

	/** The connections we've made. */
	UPROPERTY()
	class UFGFactoryConnectionComponent* mSnappedConnectionComponents[ NUM_CONNECTIONS ];

	/** If we upgrade another conveyor belt this is the belt we replaces. */
	UPROPERTY()
	class AFGBuildableConveyorBelt* mUpgradedConveyorBelt;

	/** Class of conveyor pole to place at the end. */
	UPROPERTY( EditDefaultsOnly, Category = "Conveyor Belt" )
	TSubclassOf< class UFGRecipe > mDefaultConveyorPoleRecipe;

	/** What radius will the bends have. */
	UPROPERTY( EditDefaultsOnly, Category = "Conveyor Belt" )
	float mBendRadius;

	/** What is the maximum length of one segment. */
	UPROPERTY( EditDefaultsOnly, Category = "Conveyor Belt" )
	int32 mMaxLength;

	/** What is the maximum incline of the conveyor belt (degrees). */
	UPROPERTY( EditDefaultsOnly, Category = "Conveyor Belt" )
	float mMaxIncline;

	/** Arrow to indicate the direction of the conveyor while placing it. */
	UPROPERTY()
	class UStaticMeshComponent* mConnectionArrowComponent;
};
