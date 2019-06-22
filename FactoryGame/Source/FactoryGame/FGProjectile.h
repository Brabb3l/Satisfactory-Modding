// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Actor.h"
#include "Equipment/FGWeaponProjectileFire.h"
#include "FGProjectile.generated.h"

UCLASS(config = Game)
class AFGProjectile : public AActor
{
	GENERATED_BODY()
private:
	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category = "Projectile")
		class USphereComponent* mCollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
		class UProjectileMovementComponent* mProjectileMovement;

	/** Indicates if we should explode if we are taking damage from same actor class as ourselves */
	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		bool mCanTriggerExplodeBySameClass;

	/** Should the projectile explode when it dies of lifespan? */
	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		bool mExplodeAtEndOfLife;
};