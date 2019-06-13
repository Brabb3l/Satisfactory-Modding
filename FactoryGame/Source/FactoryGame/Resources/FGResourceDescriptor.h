// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Resources/FGItemDescriptor.h"
#include "FGResourceDescriptor.generated.h"

/**
*
*/
UCLASS( Abstract )
class UFGResourceDescriptor : public UFGItemDescriptor
{
	GENERATED_BODY()
	
protected:
	/** The static mesh we want the ResourceNode to use when it has this class selected */
	UPROPERTY( EditDefaultsOnly, Category = "Item|World", meta = ( EditCondition="!mUseMaterialDecal" ) )
	class UStaticMesh* mGroundMesh;

	/** The static mesh we want the Resource Deposit to use when it has this class selected */
	UPROPERTY( EditDefaultsOnly, Category = "Item|World", meta = (EditCondition = "!mUseMaterialDecal") )
	class UStaticMesh* mDepositMesh;

	/** The material this resource deposit use (if any) */
	UPROPERTY( EditDefaultsOnly, Category = "Item|World" )
	class UMaterialInstance* mDepositMaterial;

	/** If this is non-null, then we will use this material instead of the material specified in the mGroundMesh */
	UPROPERTY( EditDefaultsOnly, Category = "Item|World" )
	class UMaterialInstance* mGroundMeshMaterialOverride;

	/** The decal this resource use (if any) */
	UPROPERTY( EditDefaultsOnly, Category = "Item|World" )
	class UMaterial* mDecalMaterial;

	/** How big will the decal on the ground be (and the collision for it) if we have mUseMaterialDecal enabled */
	UPROPERTY( EditDefaultsOnly, Category="Item|World", meta = ( EditCondition = "mUseMaterialDecal" ) )
	float mDecalSize;
	
	//@todo This may not be the best place but break it out if there is a need for it.
	/** The color the ping should have for this material */
	UPROPERTY( EditDefaultsOnly, Category = "Item|Resource" )
	FLinearColor mPingColor;

	/** A multiplier for this resource to set if it is fast or slow to pick up. 1.0 = normal  */
	UPROPERTY( EditDefaultsOnly, Category = "Item|Resource" )
	float mCollectSpeedMultiplier;

	/** Texture to show in the compass when this resource has been scanned and found. */
	UPROPERTY( EditDefaultsOnly, Category = "Item|Resource" )
	UTexture2D* mCompassTexture;

	/** Particle to show when mining by hand */
	UPROPERTY( EditDefaultsOnly, Category = "Resources" )
	class UParticleSystem* mManualMiningParticle;

	/** Particle to show when mining with machine */
	UPROPERTY( EditDefaultsOnly, Category = "Resources" )
	class UParticleSystem* mFactoryMiningParticle;

	/** Particle to show when mining with machine */
	UPROPERTY( EditDefaultsOnly, Category = "Resources" )
	class UParticleSystem* mDestroyedParticle;

	/** name of sound to play when mining by hand */
	UPROPERTY( EditDefaultsOnly, Category = "Resources" )
	FName mManualMiningAudioName;
private:
};
