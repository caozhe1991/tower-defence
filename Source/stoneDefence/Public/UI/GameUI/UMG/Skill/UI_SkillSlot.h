// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_SkillSlot.generated.h"

class UImage;
class UTextBlock;
class UButton;

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_SkillSlot : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(meta = (BindWidget))
		UImage* SkillIcon;		// 技能图标

	UPROPERTY(meta = (BindWidget))
		UImage* SkillIconCD;		// 技能CD中的蒙板

	UPROPERTY(meta = (BindWidget))
		UTextBlock* SkillNumber;	// 技能可用数量

	UPROPERTY(meta = (BindWidget))
		UTextBlock* KeyValueNumber;	// 技能绑定的数字按键

	UPROPERTY(meta = (BindWidget))
		UTextBlock* SkillCDValue;	// CD时间

	UPROPERTY(meta = (BindWidget))
		UButton* ClickButton;

public:
	virtual void NativeConstruct() override;

	UFUNCTION()
		void OnClickedWidget();
	
	
};
