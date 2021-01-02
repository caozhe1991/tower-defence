// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_RucksackSystem.generated.h"

class UUI_Inventory;
/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_RucksackSystem : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(meta = (Bindwidget))
		UUI_Inventory* Inventory;


public:
	virtual void NativeConstruct() override;
	
};
