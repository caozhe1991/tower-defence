// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/SelectLevelCore/TowerDefenceSelectLevelGame.h"
#include "UI/SelectLevelUI/Core/TowerDefenceSelectLevelHUD.h"

ATowerDefenceSelectLevelGame::ATowerDefenceSelectLevelGame()
{
	HUDClass = ATowerDefenceSelectLevelHUD::StaticClass();
}

void ATowerDefenceSelectLevelGame::BeginPlay()
{
}
