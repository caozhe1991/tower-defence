// Copyright Epic Games, Inc. All Rights Reserved.


#include "stoneDefenceGameModeBase.h"

#include "Core/GameCore/TowerDefenceGameCamera.h"
#include "Core/GameCore/TowerDefenceGameState.h"
#include "Core/GameCore/TowerDefencePlayerController.h"
#include "Core/GameCore/TowerDefencePlayerState.h"
#include "UI/GameUI/Core/RuleofTheHUD.h"

AstoneDefenceGameModeBase::AstoneDefenceGameModeBase()
{
	// ��Ϸ���ݣ�ͨ������Ϸ��ص�����
	GameStateClass = ATowerDefenceGameState::StaticClass();
	// ��ҿ�����
	PlayerControllerClass = ATowerDefencePlayerController::StaticClass();
	// ��Ϸ��ң�������Ϸ��һ���һ������͹��ˣ��̳�APawn��
	DefaultPawnClass = ATowerDefenceGameCamera::StaticClass();
	// �������
	PlayerStateClass = ATowerDefencePlayerState::StaticClass();
	// HUD
	HUDClass = ARuleofTheHUD::StaticClass();
}
