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
		UTextBlock* ConditionBase;	// �������񣬱���Ҫ��ɵ�

	UPROPERTY(meta = (BindWidget))
		UTextBlock* ConditionA;		// ��������1����ɺ�ɼ�1��

	UPROPERTY(meta = (BindWidget))
		UTextBlock* ConditionB;		// ��������2����ɺ���ڼ�1��

	UPROPERTY(meta = (BindWidget))
		UButton* ConditionButton;	// ����ť
	
public:
	virtual void NativeConstruct() override;

	UFUNCTION()
		void Condition();
	
};
