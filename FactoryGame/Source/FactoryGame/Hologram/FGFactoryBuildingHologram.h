// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Hologram/FGBuildableHologram.h"
#include "Buildables/FGBuildableFactoryBuilding.h"
#include "FGFactoryBuildingHologram.generated.h"


UCLASS()
class FACTORYGAME_API AFGFactoryBuildingHologram : public AFGBuildableHologram
{
	GENERATED_BODY()
private:
	UPROPERTY()
	UStaticMeshComponent* mBuildingMesh;
};
