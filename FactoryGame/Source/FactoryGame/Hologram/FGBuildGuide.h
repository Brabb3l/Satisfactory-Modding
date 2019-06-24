// Copyright 2016-2018 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGBuildGuide.generated.h"

struct FGuideLineBuildingSweepData
{
	FGuideLineBuildingSweepData(class AActor* building, float angle)
	{
		mBuilding = building;
		mAngle = angle;
	}

	class AActor* mBuilding;
	float mAngle;
};

UENUM()
enum class EGuideLineType : uint8
{
	GLT_Default			UMETA(DisplayName = "Default"),
	GLT_ConveyorBelt	UMETA(DisplayName = "Conveyor Belt"),
};

struct FBuildingGuideLineData
{
public:
	FBuildingGuideLineData(class UObject* referenceObject, FVector startPoint, FVector endPoint, EGuideLineType lineType = EGuideLineType::GLT_Default) :
		mReferenceObject(referenceObject),
		mStartPoint(startPoint),
		mEndPoint(endPoint),
		mGuideLineType(lineType)
	{
	}

	class UObject* mReferenceObject;
	FVector mStartPoint;
	FVector mEndPoint;
	EGuideLineType mGuideLineType;
};

UCLASS()
class FACTORYGAME_API AFGBuildGuide : public AActor
{
	GENERATED_BODY()

public:
	/** Defines what type of build guide line this is. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "BuildGuides")
		EGuideLineType mGuideLineType;

protected:
	class UStaticMeshComponent* mMeshComponent;
	class UStaticMesh* mBuildGuideMesh;
};
