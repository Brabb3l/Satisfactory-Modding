// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Resources/FGBuildingDescriptor.h"
#include "FGPoleDescriptor.generated.h"

/**
 * Defines a pole height.
 */
USTRUCT(BlueprintType)
struct FPoleHeightMesh
{
	GENERATED_BODY()
public:
	FPoleHeightMesh() : Mesh(nullptr), Height(0.0f) {}
public:
	/** Mesh for the current pole height. */
	UPROPERTY(EditDefaultsOnly)
		class UStaticMesh* Mesh;

	/** Pole height for the current mesh. */
	UPROPERTY(EditDefaultsOnly)
		float Height;
};

/**
 * Descriptors for poles defined by a set of meshes.
 */
UCLASS()
class FACTORYGAME_API UFGPoleDescriptor : public UFGBuildingDescriptor
{
	GENERATED_BODY()
protected:
	/** Array with meshes and their heights for the pole. */
	UPROPERTY(EditDefaultsOnly, Category = "Pole", Meta = (NoAutoJSON = true))
		TArray< FPoleHeightMesh > mHeightMeshes;
private:
	/** Helper to find the pole mesh component. */
	static FName mPoleMeshComponentTag;

	/** Helper to find the pole mesh component. */
	static FName mPoleHeightComponentTag;
};
