// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_MainScreen.generated.h"

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_MainScreen : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(meta = (BindWidget))
		class UUI_GameMenuSystem* GameMenuSystem;

	UPROPERTY(meta = (BindWidget))
		class UUI_GameInfoPrintSystem* GameInfoPrintSystem;

	UPROPERTY(meta = (BindWidget))
		class UUI_MiniMapSystem* MiniMapSystem;

	// 任务系统UI
	UPROPERTY(meta = (BindWidget))
		class UUI_MissionSystem* MissionSystem;

	UPROPERTY(meta = (BindWidget))
		class UUI_PlayerSkillSystem* PlayerSkillSystem;

	// 背包系统
	UPROPERTY(meta = (BindWidget))
		class UUI_RucksackSystem* RucksackSystem;

	UPROPERTY(meta = (BindWidget))
		class UUI_ToolBarSystem* ToolBarSystem;

public:
	virtual void NativeConstruct() override;
	
};
