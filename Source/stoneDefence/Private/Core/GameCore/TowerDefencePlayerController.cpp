// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/GameCore/TowerDefencePlayerController.h"

ATowerDefencePlayerController::ATowerDefencePlayerController()
{
	// ��ʾ���
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
	// ������������ӿڷ�Χ��
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	// ��ֹ�����������
	InputMode.SetHideCursorDuringCapture(false);

	SetInputMode(InputMode);
}

void ATowerDefencePlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetInputModeGameAndUI();
}
