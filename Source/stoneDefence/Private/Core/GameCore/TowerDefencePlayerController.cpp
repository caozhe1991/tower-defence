// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/GameCore/TowerDefencePlayerController.h"

ATowerDefencePlayerController::ATowerDefencePlayerController()
{
	// 显示鼠标
	bShowMouseCursor = true;
}

void ATowerDefencePlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	float ScreenMoveSpeed = 20.f;
	ScreenMoveUnits.ListenScreenMove(this, ScreenMoveSpeed);
}

void ATowerDefencePlayerController::SetInputModeGameAndUI()
{
	FInputModeGameAndUI InputMode;
	// 将鼠标锁定在视口范围内
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	// 禁止鼠标点击后隐藏
	InputMode.SetHideCursorDuringCapture(false);

	SetInputMode(InputMode);
}

void ATowerDefencePlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetInputModeGameAndUI();
}
