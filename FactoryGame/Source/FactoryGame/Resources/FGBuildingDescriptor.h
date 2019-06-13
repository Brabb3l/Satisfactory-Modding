// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Resources/FGBuildDescriptor.h"
#include "FGBuildingDescriptor.generated.h"


UCLASS( Abstract )
class FACTORYGAME_API UFGBuildingDescriptor : public UFGBuildDescriptor
{
	GENERATED_BODY()
protected:
	/** Value to display instead of display name and description. */
	static FText mOverrideDisplayNameAndDescription;

	/** The class to build. */
	UPROPERTY( EditDefaultsOnly, Category = "Building" )
	TSubclassOf< class AFGBuildable > mBuildableClass;
};
