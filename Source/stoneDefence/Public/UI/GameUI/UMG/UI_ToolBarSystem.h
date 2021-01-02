// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_ToolBarSystem.generated.h"


class UTextBlock;
class UProgressBar;

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_ToolBarSystem : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(meta = (BindWidget))
		UTextBlock* GameGold;			// 游戏金币
	
	UPROPERTY(meta = (BindWidget))
		UTextBlock* TowerDeathNumber;		// 塔死亡数量

	UPROPERTY(meta = (BindWidget))
		UTextBlock* GameCount;			// 游戏计时

	UPROPERTY(meta = (BindWidget))
		UTextBlock* KillSolider;		// 杀了多少敌人

	UPROPERTY(meta = (BindWidget))
		UTextBlock* GameLevelSurplusQuantity;	// 剩余敌人数量

	UPROPERTY(meta = (BindWidget))
		UProgressBar* GSProgressBar;		// 剩余敌人数量的进度条

public:
	virtual void NativeConstruct() override;
};
