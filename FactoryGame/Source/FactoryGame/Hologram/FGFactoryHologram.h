// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGBuildableHologram.h"
#include "FGBuildGuide.h"
#include "FGFactoryConnectionComponent.h"
#include "FGFactoryHologram.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYGAME_API AFGFactoryHologram : public AFGBuildableHologram
{
	GENERATED_BODY()
protected:
	// @todo: Move clearance mesh thingies to BuildableHologram
	/** Mesh component used to display the clearance mesh */
	UPROPERTY()
	class UStaticMeshComponent* mClearanceMeshComponent;

	/** Mesh we want to use in the component */
	UPROPERTY()
	class UStaticMesh* mClearanceMesh;

	/** Material to use on the clearance component */
	UPROPERTY()
	class UMaterialInterface* mClearanceMaterial;

	TMap<class UObject*, class AFGBuildGuide*> mGuideLineBuildings;
};
