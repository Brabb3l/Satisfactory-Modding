// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "FGUseableInterface.h"
#include "ItemAmount.h"
#include "Animation/AnimInstance.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Engine/SCS_Node.h"
#include "FactoryTick.h"
#include "FGBuildable.generated.h"

UCLASS()
class AFGCharacterPlayer : public AActor {
	GENERATED_BODY()
};
 
/**
 * Base for everything buildable, buildable things can have factory connections, power connections etc.
 *
 * There are two tick functions on buildables, PrimaryActorTick and FactoryTick.
 * PrimaryActorTick is disabled when the buildable is to far away to to not waste cycles on animations and other effects.
 * FactoryTick is always enabled (as long as bCanEverTick is true) so that the factory part of buildings always can simulate.
 */
UCLASS( Abstract, Config=Engine, Meta=(AutoJson=true) )
class FACTORYGAME_API AFGBuildable : public AActor
{
	GENERATED_BODY()
public:
	/** The hologram class to use for constructing this object. */
	UPROPERTY( EditDefaultsOnly, Category = "Buildable" )
	TSubclassOf< class AFGBuildableHologram > mHologramClass;

	/** The human readable display name of this object. */
	UPROPERTY( BlueprintReadOnly, EditDefaultsOnly, Category = "Buildable" )
	FText mDisplayName;
	
	/** The human readable description of this object. */
	UPROPERTY( BlueprintReadOnly, EditDefaultsOnly, Category = "Buildable", meta= ( MultiLine = true ) )
	FText mDescription;

	/** Delegate will trigger whenever the actor's use state has changed (Start, End) */
	static void* OnRegisterPlayerChange;

protected:
	//@todorefactor With meta = ( ShowOnlyInnerProperties ) it does not show and PrimaryActorTick seems to be all custom properties, so I moved to another category but could not expand.
	/** Controls if we should receive Factory_Tick and how frequent. */
	UPROPERTY( EditDefaultsOnly, Category = "Factory Tick", meta = (NoAutoJson = true) )
	FFactoryTickFunction mFactoryTickFunction;

	/** The primary color of this buildable */
	UPROPERTY( /*ReplicatedUsing = OnRep_PrimaryColor,*/ meta = (NoAutoJson = true) )
	FLinearColor mPrimaryColor;

	/** The primary color of this buildable */
	UPROPERTY( /*ReplicatedUsing = OnRep_SecondaryColor,*/ meta = (NoAutoJson = true) )
	FLinearColor mSecondaryColor;

	/** The color slot of this buildable */
	UPROPERTY( meta = (NoAutoJson = true) )
	uint8 mColorSlot = 0; //[DavalliusA:Sat/23-02-2019] defaut color is 0


	/** HAXX FLAG! Buildings set this to start replicating power graph if they are interacted with */
	bool mInteractionRegisterPlayerWithCircuit;

	/** What build effect to use when building this building */
	UPROPERTY()
	TSubclassOf< class UFGMaterialEffect_Build > mBuildEffectTemplate;

	/** What build effect to use when dismantling this building */
	UPROPERTY()
	TSubclassOf< class UFGMaterialEffect_Build > mDismantleEffectTemplate;

	UFGMaterialEffect_Build* mActiveBuildEffect = nullptr; //Store the active effect so we can cancel an old one if we need to start a new.

	/** Used to sync and start build effect on buildings when created, but not after creation. Set's to true when creating a building, turns off in the construction effect finish play.*/
	UPROPERTY( meta = ( NoAutoJson = true ) )
	AActor* mBuildEffectInstignator = nullptr; //[DavalliusA:Mon/01-04-2019] this is sett to null in default. If it's non null, we expect the build effects need to play.

	/** Name read from config */
	UPROPERTY( config, noclear, meta = (NoAutoJson = true) )
	FSoftClassPath mDismantleEffectClassName;

	/** Name read from config */
	UPROPERTY( config, noclear, meta = (NoAutoJson = true) )
	FSoftClassPath mBuildEffectClassName;

	/** Build effect speed, a constant speed (distance over time) that the build effect should have, so bigger buildings take longer */
	UPROPERTY( EditDefaultsOnly, Category = "Build Effect" )
	float mBuildEffectSpeed;

	/** Whether or not this building should use ForceNetUpdate() when a player registers/unregisters from it. */
	UPROPERTY( EditDefaultsOnly, Category = "Replication" )
	bool mForceNetUpdateOnRegisterPlayer;

	/** Flag for whether the build effect is active */
	uint8 mBuildEffectIsPlaying : 1;

	/** Flag for whether this buildable is being dismantled */
	uint8 mIsDismantled : 1;

	/** Flag to indicate whether the dismantle material should be active. Used to being able to activate the material when other effects end (like the build effect) */
	uint8 mPendingDismantleHighlighted : 1;

	/** Name read from config */
	UPROPERTY( config, noclear, meta = (NoAutoJson = true) )
	FStringClassReference mHighlightParticleClassName;

	/** Particle system component  */
	UPROPERTY( EditDefaultsOnly, Category = "Buildable" )
	class UParticleSystem* mHighlightParticleSystemTemplate;

	/** Particle system component  */
	UPROPERTY( EditDefaultsOnly, Category = "Buildable" )
	class UParticleSystemComponent* mHighlightParticleSystemComponent;

	/** If this building should show highlight before first use, save when it has been shown */
	UPROPERTY( meta = (NoAutoJson = true) )
	bool mDidFirstTimeUse;

	/** Should we show highlight when building this building */
	UPROPERTY( EditDefaultsOnly, Category = "Buildable" )
	bool mShouldShowHighlight;

	/** Caching the extent for use later */
	FBox mCachedBounds;
private:
	friend class UFGFactoryConnectionComponent;
	friend class AFGBuildableSubsystem;

	/** Factory Stat id of this object, 0 if nobody asked for it yet */
	STAT( mutable TStatId mFactoryStatID; )

	/** Squared distance to closest camera */
	UPROPERTY( meta = (NoAutoJson = true) )
	float mCameraDistanceSq;

	/** The building ID this belongs to. */
	UPROPERTY( meta = (NoAutoJson = true) )
	int32 mBuildingID;

	/** How much did we pay when building this. */
	UPROPERTY( meta = (NoAutoJson = true) )
	TArray< FItemAmount > mDismantleRefund;
	
	/** The cached main mesh of this buildable */
	TArray< UMeshComponent* > mCachedMainMeshes;

	/** If you can interact with this factory. */
	UPROPERTY( EditDefaultsOnly, Category = "Interaction" )
	bool mIsUseable;

	/** The widget that will present our UI. */
	UPROPERTY( EditDefaultsOnly, Category = "Interaction", meta = ( EditCondition = mIsUseable ) )
	TSubclassOf< class UFGInteractWidget > mInteractWidgetClass;

	/** Caches the number of factory components for sanity checking */
	uint8 mNumFactoryConnections;

	/** Caches the number of power components for sanity checking */
	uint8 mNumPowerConnections;

	/** Players interacting with this building */
	UPROPERTY()
	TArray< class AFGCharacterPlayer* > mInteractingPlayers;

	/** If this buildable is replicating details, i.e. for the UI. */
	uint8 mReplicateDetails:1;

	/** if true, then blueprint has implemented Factory_ReceiveTick */
	uint8 mHasBlueprintFactoryTick:1;

	/** if true, then blueprint has implemented Factory_PeekOutput */
	uint8 mHasFactory_PeekOutput:1;

	/** if true, then blueprint has implemented Factory_GrabOutput */
	uint8 mHasFactory_GrabOutput:1;

	uint8 mHasColorableComponents : 1;
	uint8 mHasColorableComponentsDirty : 1; //make us update the value the first time


	/** Recipe this building was built with. */
	UPROPERTY( )
	TSubclassOf< class UFGRecipe > mBuiltWithRecipe;

	/** Time when this building was built */
	UPROPERTY( meta = (NoAutoJson = true) )
	float mBuildTimeStamp;

	/** Caching the shapecomponent once we have gotten it */
	UPROPERTY()
	UShapeComponent* mCachedShapeComponent;

	/** Component used to determine highlighteffects location */
	UPROPERTY( EditAnywhere )
	USceneComponent* mHighlightLocation;

	TMap<class UMeshComponent*, TArray<class UMaterialInterface*>> mCachedMeshMaterials;
};