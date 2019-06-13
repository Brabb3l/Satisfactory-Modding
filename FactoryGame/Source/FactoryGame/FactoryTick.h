#pragma once

#include "Engine/EngineBaseTypes.h"
#include "FactoryTick.generated.h"

/**
 * Tick function that calls AFGBuildable::TickFactory
 */
USTRUCT()
struct FFactoryTickFunction : public FTickFunction
{
	GENERATED_USTRUCT_BODY()
};

template<>
struct TStructOpsTypeTraits<FFactoryTickFunction> : public TStructOpsTypeTraitsBase2<FFactoryTickFunction>
{
	enum
	{
		WithCopy = false
	};
};