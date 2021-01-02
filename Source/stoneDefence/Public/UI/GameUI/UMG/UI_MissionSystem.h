// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_MissionSystem.generated.h"


class UTextBlock;
class UButton;
/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_MissionSystem : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:

	UPROPERTY(meta = (BindWidget))
		UTextBlock* ConditionBase;	// 基础任务，必须要完成的

	UPROPERTY(meta = (BindWidget))
		UTextBlock* ConditionA;		// 附加任务1，完成后可加1星

	UPROPERTY(meta = (BindWidget))
		UTextBlock* ConditionB;		// 附加任务2，完成后可在加1星

	UPROPERTY(meta = (BindWidget))
		UButton* ConditionButton;	// 任务按钮
	
public:
	virtual void NativeConstruct() override;

	UFUNCTION()
		void Condition();
	
};
