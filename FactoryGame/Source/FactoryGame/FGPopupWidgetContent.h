// Copyright 2016-2019 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FGPopupWidgetContent.generated.h"



/**
 *
 */
UCLASS()
class FACTORYGAME_API UFGPopupWidgetContent : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PopupContent")
		UObject* mInstigator;

	UPROPERTY(BlueprintReadWrite, Category = "PopupContent")
		class UFGPopupWidget* mPopupWidget;

};
