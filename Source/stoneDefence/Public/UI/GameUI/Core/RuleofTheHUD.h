// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "RuleofTheHUD.generated.h"


class UUI_MainScreen;
/**
 * 
 */
UCLASS()
class STONEDEFENCE_API ARuleofTheHUD : public AHUD
{
	GENERATED_BODY()

public:
	ARuleofTheHUD();

	virtual void BeginPlay() override;

private:
	TSubclassOf<UUI_MainScreen> MainScreenClass;
	UUI_MainScreen* MainScreen;
	
};
