// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Hologram/FGFactoryBuildingHologram.h"
#include "FGFoundationHologram.generated.h"

/**
 * Base hologram for foundation type buildables.
 */
UCLASS()
class FACTORYGAME_API AFGFoundationHologram : public AFGFactoryBuildingHologram
{
	GENERATED_BODY()
protected:
	/** Size of the foundation, from the default buildable. */
	float mSize;

	/** Height of the foundation, from the default buildable. */
	float mHeight;

	/** Disable snapping on specific sides. */
	FFoundationSideSelectionFlags mDisableSnapOn;
};
