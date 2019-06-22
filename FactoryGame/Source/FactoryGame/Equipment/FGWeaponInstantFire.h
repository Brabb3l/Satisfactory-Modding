// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGWeapon.h"
#include "FGWeaponInstantFire.generated.h"

UCLASS()
class FACTORYGAME_API AFGWeaponInstantFire : public AFGWeapon
{
	GENERATED_BODY()
public:
	/** Instant hit damage */
	UPROPERTY(EditDefaultsOnly)
		float mInstantHitDamage;

	/** How far we should trace for the weapon*/
	UPROPERTY(EditDefaultsOnly)
		float mWeaponTraceLength;

	/** The particle to use when hitting the ground */
	UPROPERTY(EditDefaultsOnly)
		class UParticleSystem* mHitParticleEffect;
};