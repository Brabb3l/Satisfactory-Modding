// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Resources/FGBuildDescriptor.h"
#include "FGVehicleDescriptor.generated.h"

/**
 * Descriptor for vehicles.
 */
UCLASS()
class FACTORYGAME_API UFGVehicleDescriptor : public UFGBuildDescriptor
{
	GENERATED_BODY()
public:
	/** Value to display instead of display name and description. */
	static FText mOverrideDisplayNameAndDescription;

	/** The vehicle this descriptor describes. */
	UPROPERTY(EditDefaultsOnly, Category = "Vehicle")
		TSubclassOf< class AFGVehicle > mVehicleClass;
};
