// Copyright 2016 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGPopupInstigatorInterface.h"
#include "UI/FGInteractWidget.h"
#include "FGPopupWidget.generated.h"

UENUM(BlueprintType)
enum EPopupId
{
	PID_OK,
	PID_OK_CANCEL,
	PID_NONE
};

USTRUCT(BlueprintType)
struct FPopupData
{
	GENERATED_BODY();
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Popup")
		FText Title;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Popup")
		FText Body;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Popup")
		TEnumAsByte< EPopupId > ID;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Popup")
		TSubclassOf< class UUserWidget > PopupClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Popup")
		UObject* Instigator;

};

/**
 *
 */
UCLASS()
class FACTORYGAME_API UFGPopupWidget : public UFGInteractWidget
{
	GENERATED_BODY()
};
