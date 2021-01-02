// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TowerDefenceGameInstance.generated.h"

/**
 * 游戏唯一的运行单例类，从游戏开始到结束，一直存在，不受关卡切换影响。
 */
UCLASS()
class STONEDEFENCE_API UTowerDefenceGameInstance : public UGameInstance
{
	GENERATED_BODY()


public:
	virtual void Init() override;
	
};
