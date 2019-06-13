// Copyright 2016-2018 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FGMaterialEffectComponent.h"
#include "ItemAmount.h"
#include "FGMaterialEffect_Build.generated.h"


/**
 * Material effect for building.
 */
UCLASS( Abstract )
class FACTORYGAME_API UFGMaterialEffect_Build : public UFGMaterialEffectComponent
{
	GENERATED_BODY()

private:
	/** Who built this */
	UPROPERTY(  )
	class AActor* mInstigator;
	/** How much did this cost */
	UPROPERTY(  )
	TArray< FItemAmount > mCost;
	/** The speed of this effect. */
	UPROPERTY()
	float mSpeed;
};
