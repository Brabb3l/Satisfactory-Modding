// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "FGResourceDescriptor.h"
#include "FGResourceNode.generated.h"

class UFGResourceDescriptor;

/** How much resources this node contains, a rich vein will deplete later */
UENUM( BlueprintType )
enum EResourceAmount
{
	RA_Poor UMETA(DisplayName="Poor"),
	RA_Normal UMETA( DisplayName = "Normal" ),
	RA_Rich UMETA( DisplayName = "Rich" ),
	RA_Infinite UMETA( DisplayName = "Infinite"),
	RA_MAX UMETA( Hidden )
};

/** How how fast it is to mine the resource */
UENUM()
enum EResourcePurity
{
	RP_Inpure UMETA( DisplayName = "Impure" ),
	RP_Normal UMETA( DisplayName = "Normal" ),
	RP_Pure UMETA( DisplayName = "Pure" ),
	RP_MAX UMETA( Hidden )
};

USTRUCT( BlueprintType )
struct FPurityTextPair
{
	GENERATED_BODY()

	FPurityTextPair() :
		Text( FText() ),
		Purity( EResourcePurity::RP_Inpure )
	{
	}

	/** Localizable text */
	UPROPERTY( EditDefaultsOnly, Category = "Resources" )
	FText Text;

	/** Enum to localize */
	UPROPERTY( EditDefaultsOnly, Category = "Resources" )
	TEnumAsByte< EResourcePurity > Purity;
};

UCLASS(Blueprintable, Abstract)
class AFGResourceNode : public AActor
{
	GENERATED_BODY()

protected:
	/** Type of resource */
	UPROPERTY(EditAnywhere, Category = "Resources")
		TSubclassOf<UFGResourceDescriptor> mResourceClass;

	/** How pure the resource is */
	UPROPERTY(EditInstanceOnly, Category = "Resources")
		TEnumAsByte<EResourcePurity> mPurity;

	/** How pure the resource is */
	UPROPERTY(EditInstanceOnly, Category = "Resources")
		TEnumAsByte<EResourceAmount> mAmount;

	/** The mesh we use for displaying the resource if it has a ground mesh */
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Resources")
		UStaticMeshComponent* mStaticMeshComponent;

	/** the decal that used for displaying the resource */
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Resources")
		UDecalComponent* mDecalComponent;

	/** If we have no static mesh but a decal, then we use this for collision*/
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Resources")
		UBoxComponent* mBoxComponent;

	/** How much resources is left in this node */
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Resources")
		int32 mResourcesLeft;

	/** If true, then we are occupied by something */
	UPROPERTY(BlueprintReadOnly, Category = "Resources")
		bool mIsOccupied;

	/** Radar tower modifies this to show this resource node in the map */
	UPROPERTY()
		TArray< UObject* > mRevealedOnMapBy;

	/** If true, this node will NEVER join another cluster of nodes, regardless of proximity. */
	UPROPERTY(EditAnywhere, Category = "Resources")
		bool mIsLonerNode;

	/** Can this resource node be used for placing resource extractors on */
	UPROPERTY(EditDefaultsOnly, Category = "Resources")
		bool mCanPlaceResourceExtractor;

	/** is this node a geyser node? */
	bool mIsGeyserNode;

	/** Multiplier that is applied in the end of extraction calculations. Is used for making deposits extract more than regular nodes */
	UPROPERTY(EditDefaultsOnly, Category = "Resources")
		int32 mExtractMultiplier;

	/** Should we display the default mesh? */
	UPROPERTY(EditAnywhere, Category = "Resources")
		bool mUseDefaultMesh;

	/** Text mapped to resource purity */
	UPROPERTY(EditDefaultsOnly, Category = "Resources")
		TArray< FPurityTextPair > mPurityTextArray;
};