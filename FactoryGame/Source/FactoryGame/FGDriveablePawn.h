// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "GameFramework/Pawn.h"
#include "FGDriveablePawn.generated.h"


/**
 * Base class for pawns that can be driven by a player character, this includes vehicles, remote drones and passenger seats.
 */
UCLASS()
class FACTORYGAME_API AFGDriveablePawn : public APawn
{
	GENERATED_BODY()
public:
	/** True if the driver should be attached, false if this is a "remote controlled" pawn. */
	UPROPERTY(EditDefaultsOnly, Category = "Driveable")
		bool mShouldAttachDriver;

	/** True if the driver should be visible, set from FVehicleSeat */
	UPROPERTY(EditDefaultsOnly, Category = "Driveable")
		bool mIsDriverVisible;

	/** Socket to attach the driver to, if mShouldAttachDriver is true, set from FVehicleSeat */
	UPROPERTY(EditDefaultsOnly, Category = "Driveable")
		FName mDriverSeatSocket;

	/** Animation to play on the character player when in the driver seat, set from FVehicleSeat */
	UPROPERTY(EditDefaultsOnly, Category = "Driveable")
		class UAnimSequence* mDriverSeatAnimation;

	/** Where to place the driver upon exiting (local space), set from FVehicleSeat */
	UPROPERTY(EditDefaultsOnly, Category = "Driveable")
		FVector mDriverExitOffset;
};
