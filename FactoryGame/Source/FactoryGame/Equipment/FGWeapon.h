// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "FGEquipment.h"
#include "FGEquipmentAttachment.h"
#include "FGWeapon.generated.h"

static const FName ReloadAction(TEXT("Reload"));

/**
 * Base class for a weapon in the game, this provides basic firing logic only and does not specify if it's a instant hit or projectile weapon.
 */
UCLASS()
class FACTORYGAME_API AFGWeapon : public AFGEquipment
{
	GENERATED_BODY()
protected:
	///UPROPERTY()
	///	AFGHUD* mAssosiatedHud = nullptr; //[DavalliusA:Wed/20-03-2019] the base hud object will never get invalid during use, so we can use anormal pointer here to access it.

	/** Refire timer */
	FTimerHandle mRefireCheckHandle;

	/** Reload timer */
	FTimerHandle mReloadHandle;

	/** How much ammo does a magazine cover */
	UPROPERTY(EditDefaultsOnly)
		int32 mMagSize;

	/** The item we shoot */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TSubclassOf< class UFGItemDescriptor > mAmmunitionClass;

	/** Damage type to use when hitting others */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TSubclassOf< class UFGDamageType > mDamageTypeClass;

	/** In seconds, how long time does it take to reload the weapon */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float mReloadTime;

	/** How many seconds between between shots */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float mFireRate;

	/** Sound played when reloading */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Sound")
		UAkAudioEvent* mReloadSound;

	/** A cast reference to the spawned child equipment, if it exists*/
	class AFGWeaponChild* mChildWeapon;

};



