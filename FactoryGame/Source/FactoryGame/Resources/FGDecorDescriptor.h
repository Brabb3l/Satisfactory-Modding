#pragma once

#include "Resources/FGBuildingDescriptor.h"
#include "FGDecorDescriptor.generated.h"

UCLASS(Meta = (AutoJson = false))
class FACTORYGAME_API UFGDecorDescriptor : public UFGBuildingDescriptor
{
	GENERATED_BODY()
protected:
	/** The static mesh we want to "plutta ut" on the ground. */
	UPROPERTY(EditDefaultsOnly, Category = "Decor")
		class UStaticMesh* mDecorMesh;
};
