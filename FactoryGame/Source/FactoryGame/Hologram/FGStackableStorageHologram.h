// Copyright 2016-2019 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Hologram/FGFactoryHologram.h"
#include "FGStackableStorageHologram.generated.h"

/**
 * Hologram for stackable storage boxes.
 */
UCLASS()
class FACTORYGAME_API AFGStackableStorageHologram : public AFGFactoryHologram
{
	GENERATED_BODY()
private:
	float mStackingHeight;
};
