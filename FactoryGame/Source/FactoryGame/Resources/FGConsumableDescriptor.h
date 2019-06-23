#pragma once

#include "FGEquipmentDescriptor.h"
#include "FGConsumableDescriptor.generated.h"

UCLASS()
class UFGConsumableDescriptor : public UFGEquipmentDescriptor
{
	GENERATED_BODY()
protected:
	/** Custom scale of mesh in hands */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Consumeable")
		float mCustomHandsMeshScale;

	/** Custom local rotaion of mesh in hands */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Consumeable")
		FRotator mCustomRotation;

	/** Custom local location of mesh in hands */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Consumeable")
		FVector mCustomLocation;

	/** The skeletal  mesh we want for representing the resource when it is in first person. */
	UPROPERTY(EditDefaultsOnly, Category = "Consumeable")
		class USkeletalMesh* mFPOverrideMesh;

	/** The static mesh we want for representing the resource when it is in third person. */
	UPROPERTY(EditDefaultsOnly, Category = "Consumeable")
		class UStaticMesh* mTPOverrideMesh;
};