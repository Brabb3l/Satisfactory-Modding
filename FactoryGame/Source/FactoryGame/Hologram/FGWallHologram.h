// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Hologram/FGFactoryBuildingHologram.h"
#include "FGWallHologram.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYGAME_API AFGWallHologram : public AFGFactoryBuildingHologram
{
	GENERATED_BODY()
private:
	/** Width of the wall, from the default buildable. */
	float mWidth;

	/** Height of the wall, from the default buildable. */
	float mHeight;
};
