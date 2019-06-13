// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Resources/FGItemDescriptor.h"
#include "ItemAmount.generated.h"

/**
 * Struct used to specify an amount of items.
 * E.g. a cost, a recipe product or ingredient.
 */
USTRUCT( BlueprintType )
struct FItemAmount
{
	GENERATED_BODY()

	FItemAmount() :
		ItemClass( nullptr ),
		Amount( 0 )
	{
	}

	FItemAmount( TSubclassOf< class UFGItemDescriptor > inClass, int32 inAmount ) :
		ItemClass( inClass ),
		Amount( inAmount )
	{
	}

	/** The item. */
	UPROPERTY( BlueprintReadWrite, EditAnywhere, Category = "Item" )
	TSubclassOf< class UFGItemDescriptor > ItemClass;

	/** The amount of this item. */
	UPROPERTY( BlueprintReadWrite, EditAnywhere, Category = "Item", meta = ( ClampMin = 0 ) )
	int32 Amount;
};