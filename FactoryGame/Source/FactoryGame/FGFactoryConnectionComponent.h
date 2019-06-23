// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGConnectionComponent.h"
#include "FGInventoryComponent.h"
#include "FGFactoryConnectionComponent.generated.h"

/**
 * Type of connections in the game.
 */
UENUM(BlueprintType)
enum class EFactoryConnectionConnector : uint8
{
	FCC_CONVEYOR	UMETA(DisplayName = "Conveyor"),
	FCC_PIPE		UMETA(DisplayName = "Pipe"),
	FCC_MAX			UMETA(Hidden)
};

/**
 * Type of connections in the game.
 */
UENUM(BlueprintType)
enum class EFactoryConnectionDirection : uint8
{
	FCD_INPUT		UMETA(DisplayName = "Input"),
	FCD_OUTPUT		UMETA(DisplayName = "Output"),
	FCD_ANY			UMETA(DisplayName = "Any"),
	FCD_SNAP_ONLY	UMETA(DisplayName = "Snap Only"), // Special case for conveyor poles, may need refactor later.
	FCD_MAX			UMETA(Hidden)
};

/**
 * This component is used on factories to connect to.
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FACTORYGAME_API UFGFactoryConnectionComponent : public UFGConnectionComponent
{
	GENERATED_BODY()
protected:
	/** Physical type of connector used for this connection. */
	UPROPERTY(EditDefaultsOnly, Category = "Connection")
		EFactoryConnectionConnector mConnector;

	/** Direction for this connection. */
	UPROPERTY(EditDefaultsOnly, SaveGame, Category = "Connection")
		EFactoryConnectionDirection mDirection;

	/** How long the connector is extending, indicates where the connected conveyor may start turning. */
	UPROPERTY(EditDefaultsOnly, Category = "Connection")
		float mConnectorClearance;

	/** Connection to another component. If this is set we're connected. */
	UPROPERTY(SaveGame)
		class UFGFactoryConnectionComponent* mConnectedComponent;

	/** The inventory of this connection */
	UPROPERTY(SaveGame)
		class UFGInventoryComponent* mConnectionInventory;

	/** Buildable owning us, cached for performance (no need to UPROPERTY this) */
	class AFGBuildable* mOuterBuildable;

	/** Forward implementation details to our owner. */
	UPROPERTY(EditDefaultsOnly, Category = "Connection")
		uint8 mForwardPeekAndGrabToBuildable : 1;
};
