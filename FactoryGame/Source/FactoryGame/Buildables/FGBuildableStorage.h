// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGBuildableFactory.h"
#include "FGBuildableStorage.generated.h"

/**
 * Base class for all storage boxes, large and small. May have an arbitrary number of inputs and outputs.
 */
UCLASS(Abstract)
class FACTORYGAME_API AFGBuildableStorage : public AFGBuildableFactory
{
	GENERATED_BODY()
public:
	/** How far apart in Z do multiple storages stack. */
	UPROPERTY(EditDefaultsOnly, Category = "Storage")
		float mStackingHeight;

	/** Default resources in a storage @todo Why this special case here, add the stuff in blueprint instead first time we're being built... I guess this is only used for the tutorial? */
	UPROPERTY(EditDefaultsOnly, Category = "Inventory", Meta = (NoAutoJson = true))
		TArray< FItemAmount > mDefaultResources;

	/** The size of the inventory for this storage. */
	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
		int32 mInventorySizeX;

	/** The size of the inventory for this storage. */
	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
		int32 mInventorySizeY;
};
