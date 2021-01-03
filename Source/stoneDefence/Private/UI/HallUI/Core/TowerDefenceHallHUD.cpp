// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HallUI/Core/TowerDefenceHallHUD.h"
#include "UI/HallUI/UMG/UI_MainHall.h"


ATowerDefenceHallHUD::ATowerDefenceHallHUD()
{
	static ConstructorHelpers::FClassFinder<UUI_MainHall>
		HallMain_BPClass(TEXT("/Game/_UI/Hall/HallMain_BP"));

	MainHallClass = HallMain_BPClass.Class;

}

void ATowerDefenceHallHUD::BeginPlay()
{
	Super::BeginPlay();

	MainHall = CreateWidget<UUI_MainHall>(GetWorld(), MainHallClass);
	MainHall->AddToViewport();
}

UUI_MainHall* ATowerDefenceHallHUD::GetMainHall()
{
	return MainHall;
}
