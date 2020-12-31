// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/GameCore/TowerDefencePlayerController.h"

#include "Core/GameCore/TowerDefenceGameCamera.h"

ATowerDefencePlayerController::ATowerDefencePlayerController()
{
	// 显示鼠标
	bShowMouseCursor = true;
}

void ATowerDefencePlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	float ScreenMoveSpeed = 200.f * DeltaSeconds;
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

void ATowerDefencePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// 绑定鼠标滚轮事件
	InputComponent->BindAction("MouseWheelUp", IE_Pressed, this, &ATowerDefencePlayerController::MouseWheelUp);
	InputComponent->BindAction("MouseWheelDown", IE_Pressed, this, &ATowerDefencePlayerController::MouseWheelDown);	
	
}

static float WheelValue = 15.f;
void ATowerDefencePlayerController::MouseWheelUp()
{
	ATowerDefenceGameCamera* ZoomCamera = Cast<ATowerDefenceGameCamera>(GetPawn());
	if (ZoomCamera)
	{
		ZoomCamera->Zoom(true, WheelValue);
	}
}

void ATowerDefencePlayerController::MouseWheelDown()
{
	ATowerDefenceGameCamera* ZoomCamera = Cast<ATowerDefenceGameCamera>(GetPawn());
	if (ZoomCamera)
	{
		ZoomCamera->Zoom(false, WheelValue);
	}
}

void ATowerDefencePlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetInputModeGameAndUI();
}
