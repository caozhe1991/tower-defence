// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/GameUI/Core/RuleofTheHUD.h"
#include "UI/GameUI/UMG/UI_MainScreen.h"
#include "Blueprint/UserWidget.h"

ARuleofTheHUD::ARuleofTheHUD()
{
	//static ConstructorHelpers::FClassFinder<UUI_SelectLevelMain> SelectMain_BPClass(TEXT("/Game/_UI/Select/SelectMain_BP"));
	static ConstructorHelpers::FClassFinder<UUI_MainScreen> GameMain_BPClass(TEXT("/Game/_UI/Game/MainScreen_BP"));
	if (GameMain_BPClass.Succeeded())
	{
		MainScreenClass = GameMain_BPClass.Class;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("'/Game/_UI/Game/MainScreen_BP' is not exist!"))
	}
	
}

void ARuleofTheHUD::BeginPlay()
{
	Super::BeginPlay();
	if (MainScreenClass)
	{
		MainScreen = CreateWidget<UUI_MainScreen>(GetWorld(), MainScreenClass);
		MainScreen->AddToViewport();
	}
	
	
}
