// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Object.h"
#include "Styling/SlateBrush.h"
#include "Engine/Texture2D.h"
#include "FGItemDescriptor.generated.h"

/**
 * The form this item is in, i.e. does it require pipes or conveyors, can the player pick it up etc.
 */
UENUM(BlueprintType)
enum class EResourceForm : uint8
{
	RF_INVALID		UMETA(DisplayName = "Invalid"),
	RF_SOLID		UMETA(DisplayName = "Solid"),
	RF_LIQUID		UMETA(DisplayName = "Liquid"),
	RF_GAS			UMETA(DisplayName = "Gas"),
	RF_HEAT			UMETA(DisplayName = "Heat"),
	RF_LAST_ENUM	UMETA(Hidden)
};

/**
* Stack Size for items
*/
UENUM(BlueprintType)
enum class EStackSize : uint8
{
	SS_ONE			UMETA(DisplayName = "One"),
	SS_SMALL		UMETA(DisplayName = "Small"),
	SS_MEDIUM		UMETA(DisplayName = "Medium"),
	SS_BIG			UMETA(DisplayName = "Big"),
	SS_HUGE			UMETA(DisplayName = "Huge"),
	SS_LAST_ENUM	UMETA(Hidden)
};

USTRUCT(BlueprintType)
struct FItemView
{
	GENERATED_BODY()
		FItemView() :
		Distance(200),
		FocalOffset(0, 0, 0),
		CameraPitch(-35)
	{
	}

	/** The distance to the object when creating it's view */
	UPROPERTY(EditDefaultsOnly, Category = "View")
		float Distance;

	/** Where should the camera focus offsetted on the mesh */
	UPROPERTY(EditDefaultsOnly, Category = "View", meta = (ShowOnlyInnerProperties))
		FVector FocalOffset;

	/** How much "down or up" the camera should be angeled (in degrees) when crating the view */
	UPROPERTY(EditDefaultsOnly, Category = "View")
		float CameraPitch;
};

/**
 * Base for all descriptors in the game like resource, equipment etc.
 */
UCLASS(Blueprintable, Abstract, HideCategories = (Icon, Preview), meta = (AutoJSON = true))
class FACTORYGAME_API UFGItemDescriptor : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * If mDisplayName and mDisplayName is overridden and specified elsewhere.
	 * This is specified in the native constructor and is meant to be per class.
	 * E.g. vehicle descriptors get name and description from the vehicle class so the defaults are useless.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Item")
		bool mUseDisplayNameAndDescription;

	/** Readable name of the item */
	UPROPERTY(EditDefaultsOnly, Category = "Item", meta = (EditCondition = mUseDisplayNameAndDescription, HideEditConditionToggle))
		FText mDisplayName;

	/** Readable description of the item */
	UPROPERTY(EditDefaultsOnly, Category = "Item", meta = (EditCondition = mUseDisplayNameAndDescription, HideEditConditionToggle, MultiLine = true))
		FText mDescription;

	/** How many of this item can be in the same slot in an inventory */
	UPROPERTY(EditDefaultsOnly, Category = "Item")
		EStackSize mStackSize;

protected:
	/** Energy value for this resource if used as fuel. In megawatt seconds (MWs), a.k.a. mega joule (MJ) */
	UPROPERTY(EditDefaultsOnly, Category = "Item")
		float mEnergyValue;

	/**
	 * How much radiation this item gives out in the number of nucleus that decays per second.
	 * 0 means no radiation and 1 is 10^15 (1 quadrillion) decays/s.
	 * Good values are in the range 0 to 1.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Item", meta = (ClampMin = 0, UIMin = 0, UIMax = 1))
		float mRadioactiveDecay;

	/** The state of this resource (cannot change during it's lifetime). */
	UPROPERTY(EditDefaultsOnly, Category = "Item", Meta = (NoAutoJSON = true))
		EResourceForm mForm;

	//@todo @save Maybe clean this up at a later point? /G2 2018-10-25
	/** Old brush used for UI, can't be DEPRECATED_ as it won't work in shipping builds during conversion then */
	UPROPERTY(Meta = (NoAutoJSON = true))
		FSlateBrush mInventoryIcon;

	/** Small icon of the item, always in memory */
	UPROPERTY(EditDefaultsOnly, Category = "UI")
		UTexture2D* mSmallIcon;

	/** Big icon of the item, SHOULD only be loaded by demand, but right now persistent in memory */
	UPROPERTY(EditDefaultsOnly, Category = "UI", DisplayName = "Big Icon")
		UTexture2D* mPersistentBigIcon;

	/** The static mesh we want for representing the resource when they are in the production line. */
	UPROPERTY(EditDefaultsOnly, Category = "Item")
		class UStaticMesh* mConveyorMesh;

	/** The view in the build menu for this item */
	UPROPERTY(EditDefaultsOnly, Category = "Preview", meta = (ShowOnlyInnerProperties, NoAutoJSON = true))
		FItemView mPreviewView;

private:
	friend class FItemDescriptorDetails;
	friend class FFGItemDescriptorPropertyHandle;
};
