// Copyright 2016-2019 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGBuildable.h"
#include "FGBuildableConveyorBase.generated.h"


/**
 * Holds data for an item traveling on the conveyor.
 *
 * @note This item must not contain any object references as they will not get replicated correctly.
 * @note We do not yet support changes to variables, only initial replication will be done.
 * @note We only support adds at the end of the array, no inserts allowed!
 *
 * @see FConveyorBeltItems::NetDeltaSerialize for more comments about the features supported and not.
 */
USTRUCT()
struct FConveyorBeltItem
{
	GENERATED_BODY()

private:
	friend struct FConveyorBeltItems;

	UPROPERTY(NotReplicated)
		int32 ReplicationID;

	UPROPERTY(NotReplicated)
		int32 ReplicationKey;
};

/**
* Struct to help replicate the conveyor belt items array.
* It's a lean version of fast TArray replication that guarantee the same order of the elements on server and client.
* It lacks support for:
*   - Item changes (initial replication only) there is a todo in the source file on how this can be added if needed.
*   - Mapping of object references (objects that are replicated that is). Look at fast TArray replication on how to implement this if needed.
*/
USTRUCT()
struct FConveyorBeltItems
{
	GENERATED_BODY()
private:
	/** Counter for assigning new replication IDs. */
	UPROPERTY(NotReplicated)
		int32 IDCounter;

	/** This maps ReplicationID to our local index into the Items array */
	UPROPERTY(NotReplicated)
		TMap< int32, int32 > ItemMap;

	/** The items on the conveyor belt. */
	UPROPERTY()
		TArray< FConveyorBeltItem > Items;

	/** Like a dirty flag. */
	UPROPERTY(NotReplicated)
		int32 ArrayReplicationKey;
};

/**
 * Shared base for conveyor belts and lifts.
 * Responsible for common logic such as the factory ticking, replication, interactions etc.
 */
UCLASS(Abstract)
class FACTORYGAME_API AFGBuildableConveyorBase : public AFGBuildable
{
	GENERATED_BODY()
protected:
	/** Speed of this conveyor. */
	UPROPERTY(EditDefaultsOnly, Category = "Conveyor")
		float mSpeed;

	/** Length of the conveyor. */
	float mLength;

	/** First connection on conveyor belt, Connections are always in the same order, mConnection0 is the input, mConnection1 is the output. */
	UPROPERTY(VisibleAnywhere, Category = "Conveyor")
		class UFGFactoryConnectionComponent* mConnection0;
	/** Second connection on conveyor belt */
	UPROPERTY(VisibleAnywhere, Category = "Conveyor")
		class UFGFactoryConnectionComponent* mConnection1;

private:
	bool mPendingUpdateItemTransforms;
};
