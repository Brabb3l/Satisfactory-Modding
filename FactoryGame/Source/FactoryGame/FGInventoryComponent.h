#pragma once

#include "Resources/FGItemDescriptor.h"
#include "ItemAmount.h"
#include "GameFramework/Actor.h"
#include "FGInventoryComponent.generated.h"

/**
 * Describes an item that can be placed in the inventory.
 * An item has a type and optionally a state.
 * E.g. a weapon is of type 'Desc_NailGun' and has the state '9 nail loaded'.
 */
USTRUCT(BlueprintType)
struct FInventoryItem
{
	GENERATED_BODY()
public:
	/** A null item. */
	static const FInventoryItem NullInventoryItem;
public:
	/** The type of item */
	UPROPERTY(EditAnywhere)
		TSubclassOf< class UFGItemDescriptor > ItemClass;
};

/**
 * @brief Handles the different parts of the inventory for a actor
 * Composed of several UFGInventoryComponents that does all the dirty work, this
 * object just collects them together and gives access to them
 * The outer object of this object needs to implement GetWorld
 */
UCLASS(BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UFGInventoryComponent : public UActorComponent
{
	GENERATED_BODY()
protected:
	/** When we make an inventory by adding the component to an actor we use this to specify its size */
	UPROPERTY(EditDefaultsOnly)
		int32 mDefaultInventorySize;

	/** When we resize the inventory we save how much bigger or smaller the inventory was made */
	UPROPERTY(SaveGame)
		int32 mAdjustedSizeDiff;
};
