// Copyright 2017 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Hologram/FGFactoryHologram.h"
#include "FGConveyorAttachmentHologram.generated.h"

/**
 * Hologram for conveyor attachments, such as splitters/mergers.
 */
UCLASS()
class FACTORYGAME_API AFGConveyorAttachmentHologram : public AFGFactoryHologram
{
	GENERATED_BODY()
public:
	/** Name of the pass through input connection. */
	static FName mInputConnection1;

	/** Name of the pass through output connection. */
	static FName mOutputConnection1;

private:
	/** Used to limit the placement in turns. What's the maximum offset to check from center to detect the curve. */
	UPROPERTY( EditDefaultsOnly, Category = "Conveyor Attachment" )
	float mMaxValidTurnOffset;
	/** Used to limit the placement in turns. What's the maximum angle. */
	UPROPERTY( EditDefaultsOnly, Category = "Conveyor Attachment" )
	float mMaxValidTurnAngle;

	/** The conveyor we snapped to. */
	UPROPERTY()
	class AFGBuildableConveyorBelt* mSnappedConveyor;

	/** The offset we snapped on the conveyor. */
	float mSnappedConveyorOffset;
};
