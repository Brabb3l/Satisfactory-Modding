#pragma once

#include "FGUseableInterface.generated.h"

UCLASS(Blueprintable,abstract)
class UFGUseState : public UObject
{
	GENERATED_BODY()

protected:
	/** If true, we will allocate a instance of the state, so we can store information in the state */
	UPROPERTY( EditDefaultsOnly, Category="Use" )
	bool mWantAdditonalData;

	/** If true, we will allocate a instance of the state, so we can store information in the state */
	UPROPERTY( EditDefaultsOnly, Category="Use" )
	bool mIsUsableState;
};

/**
 * Default valid state for things to use whenever things just works as they should
 */
UCLASS()
class UFGUseState_Valid : public UFGUseState
{
	GENERATED_BODY()
};

/**
 * Describes a state of a useable object for the player that tries to use it
 */
USTRUCT(BlueprintType)
struct FUseState
{
	GENERATED_BODY()

	/** Additional data that might be heavy to calculate several times the same frame, the reason it's cached here and not in the object, is that several players might want to cache different things */
	UPROPERTY( BlueprintReadOnly )
	class UFGUseState* AdditionalData;

	/** Location of where the use happens */
	UPROPERTY( BlueprintReadOnly )
	FVector UseLocation;

	/** Component that triggered the use */
	UPROPERTY( BlueprintReadOnly )
	UPrimitiveComponent* UseComponent;
protected:
	/** Contains the usable state of the object, might be a error code */
	UPROPERTY( BlueprintReadOnly )
	TSubclassOf< UFGUseState > State;
};

/**
 * For blueprint support of the interface, we will never add anything to it, just use it to
 * have a UCLASS to be able to access
 */
UINTERFACE( Blueprintable )
class UFGUseableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * @brief Interface for all useable classes out there
 */
class IFGUseableInterface
{
	GENERATED_IINTERFACE_BODY()
};
