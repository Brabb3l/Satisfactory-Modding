// Copyright 2016-2019 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Buildables/FGBuildableWall.h"
#include "FGBuildableSignWall.generated.h"


USTRUCT(BlueprintType)
struct FSignWallData
{
	GENERATED_BODY()

		FSignWallData() :
		TextColorIndex(0),
		BackgroundColorIndex(2),
		SignText("THIS IS A WALL SIGN")
	{}

	/** Index of the selected color for the text from the FGSignSettings color data array  */
	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "SignWall")
		int32 TextColorIndex;

	/** Index of the selected color for the background from the FGSignSettings color data array  */
	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "SignWall")
		int32 BackgroundColorIndex;

	/** Text to be displayed on the sign */
	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "SignWall")
		FString SignText;

};


/**
 *  Represents a wall that contains sign elements and is interactable
 */
UCLASS()
class FACTORYGAME_API AFGBuildableSignWall : public AFGBuildableWall
{
	GENERATED_BODY()
protected:
	/** Root Component that holds all the sign elements, text, mesh etc. */
	UPROPERTY(VisibleAnywhere, Category = "WallSign")
		USceneComponent* mSignDisplayRoot;

	/** Root component that parents the text objects */
	UPROPERTY(VisibleAnywhere, Category = "WallSign")
		USceneComponent* mTextDisplayRoot;

	/** Front text render component*/
	UPROPERTY(VisibleAnywhere, Category = "WallSign")
		class UTextRenderComponent* mTextRenderComponent;
};
