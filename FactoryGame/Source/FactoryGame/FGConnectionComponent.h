// Copyright 2016-2018 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Components/SceneComponent.h"
#include "FGConnectionComponent.generated.h"


/**
 * Base class for connection components, i.e. factory, power, track connections...
 */
UCLASS(Abstract, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FACTORYGAME_API UFGConnectionComponent : public USceneComponent
{
	GENERATED_BODY()
};
