// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGEquipment.h"
#include "FGHookshot.generated.h"

UCLASS()
class FACTORYGAME_API AFGHookshot : public AFGEquipment
{
	GENERATED_BODY()
public:
	/** How far we will trace to try and find something to attach to */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float mMaxHookDistance;

	/** How fast do we accellerate toward the grappled target. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float mAccelRate;

	/** Accel bonus added when we are moving away from the grappled target. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float mBrakeAccelRate;

	/** A cached instance of the instigators movementcomponent */
	class UFGCharacterMovementComponent* mCachedMovementComponent;
protected:
	/** Component handling our hookshot sounds */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Equipment")
		class UAkComponent* mHookshotAudio;
private:
	/** Distance from player when attached, caluclated from mHookshotAudio */
	float mAttachDistance;
};
