// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
//#include <StoneToolClass/Public/Tool/ScreenMove.h>
#include "Tool/ScreenMove.h"
#include "TowerDefencePlayerController.generated.h"


/**
 * 
 */
UCLASS()
class STONEDEFENCE_API ATowerDefencePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// 构造函数
	ATowerDefencePlayerController();

	virtual void Tick(float DeltaSeconds) override;

	// 设置鼠标模式；例如禁止隐藏，锁定范围
	void SetInputModeGameAndUI();

protected:
	virtual void BeginPlay() override;

	FScreenMoveUnits ScreenMoveUnits;
};
