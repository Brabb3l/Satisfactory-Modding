// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Hologram/FGBuildableHologram.h"
#include "Components/SplineComponent.h"
#include "FGSplineHologram.generated.h"

//@todo This is only used by the roads for now, use this for the conveyors/tracks as well.
/**
 * Base hologram for all spline type holograms.
 */
UCLASS()
class FACTORYGAME_API AFGSplineHologram : public AFGBuildableHologram
{
	GENERATED_BODY()
protected:
	/** The spline component we're placing. */
	UPROPERTY()
	class USplineComponent* mSplineComponent;

	/** What is the maximum length of the spline. */
	UPROPERTY( EditDefaultsOnly, Category = "Spline" )
	float mMaxLength;
	/** What is the minimum length of the spline. */
	UPROPERTY( EditDefaultsOnly, Category = "Spline" )
	float mMinLength;

	/** What is the minimum radius of an arc on this spline. */
	UPROPERTY( EditDefaultsOnly, Category = "Spline" )
	float mMinBendRadius;

	/** What is the maximum incline of the spline (degrees). */
	UPROPERTY( EditDefaultsOnly, Category = "Spline" )
	float mMaxIncline;
};
