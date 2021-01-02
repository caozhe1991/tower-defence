// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SelectLevelUI/Core/TowerDefenceSelectLevelHUD.h"
#include "UI/SelectLevelUI/UMG/UI_SelectLevelMain.h"

ATowerDefenceSelectLevelHUD::ATowerDefenceSelectLevelHUD()
{
	static ConstructorHelpers::FClassFinder<UUI_SelectLevelMain> SelectMain_BPClass(TEXT("/Game/_UI/Select/SelectMain_BP"));
	if(SelectMain_BPClass.Succeeded())
	{
		SelectLevelMainClass = SelectMain_BPClass.Class;
	}else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("SelectMain_BP not exist!"));
	}
	
	
}

void ATowerDefenceSelectLevelHUD::BeginPlay()
{
	Super::BeginPlay();

	if (SelectLevelMainClass)
	{
		SelectLevelMain = CreateWidget<UUI_SelectLevelMain>(GetWorld(), SelectLevelMainClass);
		SelectLevelMain->AddToViewport();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("SelectLevelMain not exist!"));
	}
	
	
}
