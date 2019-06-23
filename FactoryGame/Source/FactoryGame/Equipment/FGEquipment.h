// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "ItemAmount.h"
#include "Blueprint/UserWidget.h"
#include "FGEquipment.generated.h"

//Equipments are equip on different slots on the player. One EQ per slot. These are the slots.
UENUM(BlueprintType)
enum class EEquipmentSlot :uint8
{
	ES_NONE			UMETA(DisplayName = "Please specify a slot."),
	ES_ARMS			UMETA(DisplayName = "Arms"),
	ES_BACK			UMETA(DisplayName = "Body"),
	ES_MAX			UMETA(Hidden)
};

UCLASS()
class UAkAudioEvent : public UObject {
	GENERATED_BODY()
};

UCLASS()
class FACTORYGAME_API AFGEquipment : public AActor
{
	GENERATED_BODY()
public:
	/** This is the attachment for this class */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment")
		TSubclassOf< class AFGEquipmentAttachment > mAttachmentClass;

	/** This is the secondary attachment for this class */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment")
		TSubclassOf< class AFGEquipmentAttachment > mSecondaryAttachmentClass;

	/** To what slot is this limited to? */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment")
		EEquipmentSlot mEquipmentSlot;

	/** Camera shake to play when sprinting */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment")
		TSubclassOf< class UCameraShake > mSprintHeadBobShake;

	//@todo Are these used by Joel or legacy?
	/** Sound played when equipping */
	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		class UAkAudioEvent* mEquipSound;

	/** Sound played when unequipping */
	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		class UAkAudioEvent* mUnequipSound;

	/** Class of widget to add when equipping this equipment */
	UPROPERTY(EditDefaultsOnly, Category = "UI")
		TSubclassOf< UUserWidget > mEquipmentWidget;

protected:
	/** The AnimBlueprint class to use for the 1p anim for our pawn, specifying none here means that the pawn default 1p anim will be used */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment")
		TSubclassOf< class UAnimInstance > m1PAnimClass;

	/** If this equipment should attach to a socket, this is the socket. */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment")
		FName mAttachSocket;

	/** The class (if any) to use to spawn a child equipment */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment")
		TSubclassOf< class AFGEquipmentChild > mChildEquipmentClass;

	//@todo FIXUP Remove BlueprintReadOnly
	/** The cost of using this equipment */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment")
		TArray< FItemAmount > mCostToUse;

	/** If the owner is persistent throughout the lifetime of this equipment */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment", AdvancedDisplay)
		bool mHasPersistentOwner;

private:
	/** This is the attachment of this equipment */
	UPROPERTY()
		class AFGEquipmentAttachment* mAttachment;

	/** This is a potential secondary attachment */
	UPROPERTY()
		class AFGEquipmentAttachment* mSecondaryAttachment;
};
