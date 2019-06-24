// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Components/SplineComponent.h"
#include "FGSplineComponent.generated.h"

UCLASS()
class UFGInstancedSplineMeshComponent : public UObject {
	GENERATED_BODY()
};

/**
 * A spline with spline meshes combined in the same component.
 * With this you can create a spline that automatically places meshes along itself.
 *
 * @note Only use the provided AddSplinePointFromData, RemoveSplinePointData and ClearSplinePointsData to add/remove points.
 */
UCLASS(ClassGroup = (Utility), ShowCategories = (Collision), meta = (BlueprintSpawnableComponent))
class FACTORYGAME_API UFGSplineComponent : public USplineComponent
{
	GENERATED_BODY()
public:
	/** The mesh to repeat on curved sections. */
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
		class UStaticMesh* mSplineMesh;

	/** The size of each spline mesh. */
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
		float mSplineMeshLength;

	//@todo Rewrite collisions to use the spline collisions. These do not support instancing yet.
	//      Look at how epic cooks the collisions for spline meshes and make use of that for the instanced spline mesh
	//		to create the physx shapes for the whole spline.

	/** Spacing between the collision components. */
	UPROPERTY(EditDefaultsOnly, Category = "Collision|Generated")
		bool mGenerateCollisions;

	/** Spacing between the collision components. */
	UPROPERTY(EditDefaultsOnly, Category = "Collision|Generated", meta = (EditCondition = mGenerateCollisions))
		float mCollisionSpacing;

	/** Extent of the collision components. X is forward. */
	UPROPERTY(EditDefaultsOnly, Category = "Collision|Generated", meta = (EditCondition = mGenerateCollisions))
		FVector mCollisionExtent;

	/** Offset of the collision components. X is forward. */
	UPROPERTY(EditDefaultsOnly, Category = "Collision|Generated", meta = (EditCondition = mGenerateCollisions))
		FVector mCollisionOffset;

private:
	/** The cached material, we cache this as the number of meshes grow/shrink as we drag the conveyor belt. */
	UPROPERTY()
		class UMaterialInterface* mOverrideMaterial;

	/** Whether to use instancing or not. */
	UPROPERTY()
		bool mUseInstancing;

	/** If true, then we will render custom depth but not in main pass */
	bool mAdditionalCustomDepthPass;

	/** The meshes that make up the spline. */
	UPROPERTY()
		TArray< class USplineMeshComponent* > mSplineMeshComponents;

	/** If we have enabled custom depth pass, then we store the custom depth spline meshes here */
	UPROPERTY()
		TArray< class USplineMeshComponent* > mCustomDepthSplineMeshComponents;

	/** The meshes that make up the spline when instanced. */
	UPROPERTY()
		class UFGInstancedSplineMeshComponent* mSplineMeshInstances;

	/** If we have enabled custom depth pass, this will be non-null */
	UPROPERTY()
		class UFGInstancedSplineMeshComponent* mCustomDepthSplineMeshInstances;

	/** The collisions that make up the spline. */
	UPROPERTY()
		TArray< class UShapeComponent* > mSplineCollisionComponents;
};
