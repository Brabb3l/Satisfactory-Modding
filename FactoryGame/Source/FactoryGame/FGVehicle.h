// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGUseableInterface.h"
#include "FGDriveablePawn.h"
#include "ItemAmount.h"
#include "FGVehicle.generated.h"

class FDebugDisplayInfo;

/** Physics data we want to be able to restore, we store the bone name to be able to change the bone structure in updates */
USTRUCT()
struct FVehiclePhysicsData
{
	GENERATED_BODY()
};

/**
 * Vehicle has a driver but has empty passenger seats
 */
UCLASS()
class UFGUseState_VehicleHasDriver : public UFGUseState
{
	GENERATED_BODY()
};

/**
 * Vehicle is in water, can't enter
 */
UCLASS()
class UFGUseState_VehicleInWater : public UFGUseState
{
	GENERATED_BODY()
};

/**
 * Vehicle is fully occupied
 */
UCLASS()
class UFGUseState_VehicleOccupied : public UFGUseState
{
	GENERATED_BODY()
};

USTRUCT()
struct FVehicleSeat
{
	GENERATED_BODY()

	/** Seat class to spawn. */
	UPROPERTY(EditDefaultsOnly, NotReplicated)
		TSubclassOf< class AFGPassengerSeat > SeatClass;

	/** Socket to attach character to. */
	UPROPERTY(EditDefaultsOnly, NotReplicated)
		FName SitSocket;

	/** Is seat and characters in this seat visible. */
	UPROPERTY(EditDefaultsOnly, NotReplicated)
		bool IsVisible;

	/** Animation to play on characters in this seat. */
	UPROPERTY(EditDefaultsOnly, NotReplicated)
		UAnimSequence* SitAnimation;

	/** How much damage do we take in this seat. */
	UPROPERTY(EditDefaultsOnly, NotReplicated)
		float DamageMultiplier;

	/** Pawn we possess when entering this seat. */
	UPROPERTY()
		class AFGDriveablePawn* mSeatPawn;

	/** Info about the character in this seat. */
	UPROPERTY()
		class AFGCharacterPlayer* mCharacter;
	UPROPERTY()
		class AController* mController;
};

/**
 * Base class for all vehicles in the game, cars, train etc.
 */
UCLASS()
class FACTORYGAME_API AFGVehicle : public AFGDriveablePawn
{
	GENERATED_BODY()
public:
	/** Name of the MeshComponent. Use this name if you want to prevent creation of the component (with ObjectInitializer.DoNotCreateDefaultSubobject). */
	static FName VehicleMeshComponentName;

	/** The human readable name for this vehicle. */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Vehicle")
		FText mDisplayName;

	/** The human readable description for this vehicle. */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Vehicle", meta = (MultiLine = true))
		FText mDescription;

	/** Hologram to build this class with. */
	UPROPERTY(EditDefaultsOnly, Category = "Vehicle")
		TSubclassOf< class AFGVehicleHologram > mHologramClass;

protected:
	/** The main skeletal mesh associated with this Vehicle */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Vehicle", meta = (AllowPrivateAccess = "true"))
		class USkeletalMeshComponent* mMesh;

	/** If any of these locations enters water, then we are unusable */
	UPROPERTY(EditDefaultsOnly, Category = "Vehicle")
		TArray< FVector > mDisabledByWaterLocations;

	/** Flag for whether this vehicle is being dismantled */
	uint8 mIsDismantled : 1;

	/** Flag to indicate whether the dismantle material should be active */
	uint8 mPendingDismantleHighlighted : 1;

private:
	/** How much did we pay when building this. */
	UPROPERTY(SaveGame)
		TArray< FItemAmount > mDismantleRefund;

	// LNK errors here ?
	///** The AI that controls this vehicle when self-driving is activated. */
	///UPROPERTY()
	///	class AAIController* mSelfDrivingController;

	/** Sound played when this vehicle is created */
	UPROPERTY(EditDefaultsOnly, Category = "Vehicle|Sound")
		class UAkAudioEvent* mConstructSound;

	/** Can this vehicle be destroyed by damage? */
	UPROPERTY(EditDefaultsOnly, Category = "Vehicle")
		uint8 mIsDestructible : 1;

	/** base damping forces to revert to in case a vehicle is no longer submerged */
	float mBaseAngularDamping;
	float mBaseLinearDamping;

	/** increased angular damping when vehicle is under water */
	UPROPERTY(EditDefaultsOnly, Category = "Vehicle")
		float mSubmergedAngularDamping;
	/** increased linear damping when vehicle is under water */
	UPROPERTY(EditDefaultsOnly, Category = "Vehicle")
		float mSubmergedLinearDamping;
	/** upwards force applied to vehicles when underwater */
	UPROPERTY(EditDefaultsOnly, Category = "Vehicle")
		float mSubmergedBouyantForce;

	/** Gas damage typ that should be redirected to the driver*/
	UPROPERTY(EditDefaultsOnly, Category = "Vehicle")
		TSubclassOf< class UFGDamageType > mGasDamageType;
};
