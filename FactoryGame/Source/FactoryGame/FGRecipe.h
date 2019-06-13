// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "ItemAmount.h"
#include "FGRecipe.generated.h"


/**
 * This is a class describing a recipe, subclass this in blueprint to make a new recipe.
 */
UCLASS( Blueprintable, Meta=(AutoJSON=true) )
class FACTORYGAME_API UFGRecipe : public UObject
{
	GENERATED_BODY()

public:
	UFGRecipe() :
		mDisplayNameOverride( false ),
		mManufactoringDuration( 1.0f )
	{
	}
protected:
	friend class FRecipeDetails;

	/** If we override the display name or get it from the first products item name. */
	UPROPERTY( meta=(NoAutoJson = true) )
	bool mDisplayNameOverride;

	/** Overridden name for this recipe, if mDisplayNameOverride is false the first product's item name is used. */
	UPROPERTY( EditDefaultsOnly, Category = "Recipe", meta = ( EditCondition = mDisplayNameOverride ) )
	FText mDisplayName;

	/** Ingredients needed to produce the products. */
	UPROPERTY( EditDefaultsOnly, Category = "Recipe" )
	TArray< FItemAmount > mIngredients;
	
	/** The products produced from this recipe. */
	UPROPERTY( EditDefaultsOnly, Category = "Rewards" )
	TArray< FItemAmount > mProduct;

	/** The time it takes to produce the output. */
	UPROPERTY( EditDefaultsOnly, Category = "Recipe" )
	float mManufactoringDuration;

	/** Defines where this recipe can be produced */
	UPROPERTY( EditDefaultsOnly, Meta = ( MustImplement = "FGRecipeProducerInterface", Category = "Recipe" ) )
	TArray< TSoftClassPtr< UObject > > mProducedIn;
	
private:
	/** @todo Deprecated since 2018-10-23, but have been unused since MAM refactor. */
	UPROPERTY()
	TArray< TSubclassOf< UFGRecipe > > mRewardedRecipes_DEPRECATED;
};
