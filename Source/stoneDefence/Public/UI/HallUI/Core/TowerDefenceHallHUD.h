// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TowerDefenceHallHUD.generated.h"

class UUI_MainHall;
/**
 * 
 */
UCLASS()
class STONEDEFENCE_API ATowerDefenceHallHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATowerDefenceHallHUD();

	virtual void BeginPlay() override;

private:
	TSubclassOf<UUI_MainHall> MainHallClass;
	UUI_MainHall* MainHall;

};
