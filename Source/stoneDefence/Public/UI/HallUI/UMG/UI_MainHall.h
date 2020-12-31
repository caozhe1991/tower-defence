// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_MainHall.generated.h"

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_MainHall : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:
	
	UPROPERTY(meta = (BindWidget))
		class UUI_HallMenuSystem* HallMenuSystem;

public:
	virtual void NativeConstruct() override;
	
};
