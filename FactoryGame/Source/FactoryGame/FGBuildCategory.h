// Copyright 2017 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "UObject/NoExportTypes.h"
#include "FGBuildCategory.generated.h"

/**
 * 
 */
UCLASS( Blueprintable )
class FACTORYGAME_API UFGBuildCategory : public UObject
{
	GENERATED_BODY()
private:
	/** Name of this build category*/
	UPROPERTY( EditDefaultsOnly, Category = "Build Category" )
	FText mDisplayName;

	/** Icon for the category */
	UPROPERTY( EditDefaultsOnly, Category = "Build Category" )
	FSlateBrush mCategoryIcon;
	
};
