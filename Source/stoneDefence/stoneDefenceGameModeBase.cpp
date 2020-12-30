// Copyright Epic Games, Inc. All Rights Reserved.


#include "stoneDefenceGameModeBase.h"

#include "Core/GameCore/TowerDefenceGameCamera.h"
#include "Core/GameCore/TowerDefenceGameState.h"
#include "Core/GameCore/TowerDefencePlayerController.h"
#include "Core/GameCore/TowerDefencePlayerState.h"
#include "UI/GameUI/Core/RuleofTheHUD.h"

AstoneDefenceGameModeBase::AstoneDefenceGameModeBase()
{
	// 游戏数据，通常存游戏相关的数据
	GameStateClass = ATowerDefenceGameState::StaticClass();
	// 玩家控制器
	PlayerControllerClass = ATowerDefencePlayerController::StaticClass();
	// 游戏玩家（塔防游戏，一般就一个相机就够了，继承APawn）
	DefaultPawnClass = ATowerDefenceGameCamera::StaticClass();
	// 玩家数据
	PlayerStateClass = ATowerDefencePlayerState::StaticClass();
	// HUD
	HUDClass = ARuleofTheHUD::StaticClass();
}
