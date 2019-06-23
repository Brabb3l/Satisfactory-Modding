// Copyright 2016-2019 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGEquipmentChild.generated.h"

/**
* Equipment children are a second actor spawned when the FGEquipable parent is spawned from FGCharacterPlayer
* They are not saved and thus all actions should be driven by their parent.
* If the FGEquipable parent is loaded from save, then their FGEquipmentChild (this) is spawned in PostLoadGame()
*/
UCLASS()
class FACTORYGAME_API AFGEquipmentChild : public AActor
{
	GENERATED_BODY()
};
