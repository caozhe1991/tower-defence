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

	// 允许玩家自己更新自己的绑定响应 
	virtual void SetupInputComponent() override;

	// 鼠标滚轮控制
	void MouseWheelUp();
	void MouseWheelDown();

protected:
	virtual void BeginPlay() override;

	FScreenMoveUnits ScreenMoveUnits;
};
