// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TowerDefenceSelectLevelGame.generated.h"

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API ATowerDefenceSelectLevelGame : public AGameMode
{
	GENERATED_BODY()

public:
	ATowerDefenceSelectLevelGame();

	virtual void BeginPlay() override;
};
