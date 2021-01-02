// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/GameCore/TowerDefenceGameInstance.h"
#include "SimpleScreenLoading.h"

void UTowerDefenceGameInstance::Init()
{
	Super::Init();

	FSimpleScreenLoadingModule &SimpleScreenLoadingModule = FModuleManager::LoadModuleChecked<FSimpleScreenLoadingModule>("SimpleScreenLoading");
	SimpleScreenLoadingModule.SetupScreenLoading();
}
