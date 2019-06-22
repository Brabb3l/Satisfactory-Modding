// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGBuildable.h"
#include "FGBuildableFactory.generated.h"

/**
 * Production status of the factory, i.e. displayed on the indicator.
 */
UENUM(BlueprintType)
enum class EProductionStatus : uint8
{
	IS_NONE,
	IS_PRODUCING,
	IS_PRODUCING_WITH_CRYSTAL, //We have a crystal in the potential slot and are producing
	IS_STANDBY,
	IS_ERROR,
	IS_MAX
};

/**
 * Base class for factory machines like miners, conveyors, assemblers, storages etc.
 * @todorefactor Comments about the Factory_ and non factory code.
 */
UCLASS(Abstract)
class FACTORYGAME_API AFGBuildableFactory : public AFGBuildable
{
	GENERATED_BODY()
public:
	/** Power consumption of this factory. */
	UPROPERTY(EditDefaultsOnly, Category = "Power", meta = (ClampMin = "0.0"))
		float mPowerConsumption;

	/**
	 * Exponent used in power consumption calculations.
	 * To calculate maximum consumption: max = overclock ^ exponent
	 * Example: 2.5 ^ 1.6 = 4.33      An exponent of 1.6 gives a maximum consumption of 433% at 2.5x overclock.
	 * If exponent is 1.0 the function becomes linear.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Power", meta = (ClampMin = "1.0", ClampMax = 2))
		float mPowerConsumptionExponent;

	/** Class to use for the power simulation on this factory, this is only used if the building has any FGPowerConnectionComponent attached. */
	
	UPROPERTY(EditDefaultsOnly, Category = "Power") //@todo Replicated
		TSubclassOf< class UFGPowerInfoComponent > mPowerInfoClass;

protected:
	/**/
	EProductionStatus mCachedProductionStatus;

	/**
	 * The minimum time one production cycle must take.
	 * If the part is finished earlier the machine remains in the producing state until the minimum time has passed.
	 * If the required input for the next part is available during this time, it starts producing again, thus remaining in the production state.
	 * TickProducing is not called during the wait.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Production")
		float mMinimumProducingTime;

	/**
	 * The minimum time that must pass from when the production is stopped until it can start up again.
	 * If the machine has stopped and new parts are available within the delay, the machine will wait until the minimum time has passed.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Production")
		float mMinimumStoppedTime;

	/** How many cycles back do we base the productivity on */
	UPROPERTY(EditDefaultsOnly, Category = "Productivity")
		int32 mNumCyclesForProductivity;

	/** Set this to true if we want this building to be able to change the production rate potential with the "Slider of Potential" */
	UPROPERTY(EditDefaultsOnly, Category = "Productivity")
		bool mCanChangePotential;

	/** You can never set the potential to less than this when playing */
	UPROPERTY(EditDefaultsOnly, Category = "Productivity")
		float mMinPotential;

	/** You can never set the potential to more than this when playing */
	UPROPERTY(EditDefaultsOnly, Category = "Productivity")
		float mMaxPotential;

	/** When the player adds another crystal in the inventory we unlock even more potential*/
	UPROPERTY(EditDefaultsOnly, Category = "Productivity")
		float mMaxPotentialIncreasePerCrystal;

private:

	/** Last frame's is producing */
	uint8 mLastIsProducing : 1;

	/** if true, then blueprint has implemented Factory_CollectInput */
	uint8 mHasFactory_CollectInput : 1;

	/** if true, then blueprint has implemented OnHasPowerChanged */
	uint8 mHasOnHasPowerChanged : 1;

	/** if true, then blueprint has implemented OnHasProducingChanged */
	uint8 mHasOnIsProducingChanged : 1;

	/** if true, then blueprint has implemented Factory_StartProducing */
	uint8 mHasFactory_StartProducing : 1;

	/** if true, then blueprint has implemented Factory_TickProducing */
	uint8 mHasFactory_TickProducing : 1;

	/** if true, then blueprint has implemented Factory_StopProducing */
	uint8 mHasFactory_StopProducing : 1;

	/** if true, then blueprint has implemented UpdateEffects */
	uint8 mHasUpdateEffects : 1;

	/** Indicates if the factory is within significance distance */
	bool mIsSignificant;

	/** A bias to the significance value */
	UPROPERTY(EditDefaultsOnly, Category = "Significance")
		float mSignificanceBias;

	/** How often effect update should update */
	UPROPERTY(EditDefaultsOnly, Category = "Anim")
		float mEffectUpdateInterval;

	/** Accumulator for the effect update interval */
	float mEffectUpdateAccumulator;
protected:
	/** Indicates if the factory should be handled by significance manager */
	UPROPERTY(EditDefaultsOnly, Category = "Significance")
		bool mAddToSignificanceManager;
};
