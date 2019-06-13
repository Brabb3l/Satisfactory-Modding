// Copyright 2017 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Resources/FGItemDescriptor.h"
#include "FGBuildSubCategory.h"
#include "FGBuildDescriptor.generated.h"

/**
*
*/
UCLASS( Abstract )
class FACTORYGAME_API UFGBuildDescriptor : public UFGItemDescriptor
{
	GENERATED_BODY()

protected:
	/** The category in the build menu for this building */
	UPROPERTY( EditDefaultsOnly, Category = "Building" )
	TSubclassOf< UFGBuildCategory > mBuildCategory;

	/** The sub categories in the build menu for this building */
	UPROPERTY( EditDefaultsOnly, Category = "Building|SubCategories" )
	TArray< TSubclassOf< UFGBuildSubCategory > > mSubCategories;

	/** The order in the Build Menu is decided by this value. Lower values means earlier in menu. Negative values are allowed. [-N..0..N]*/
	UPROPERTY( EditDefaultsOnly, Category = "Building" )
	float mBuildMenuPriority;

};
