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
		UTextBlock* GameGold;			// ��Ϸ���
	
	UPROPERTY(meta = (BindWidget))
		UTextBlock* TowerDeathNumber;		// ����������

	UPROPERTY(meta = (BindWidget))
		UTextBlock* GameCount;			// ��Ϸ��ʱ

	UPROPERTY(meta = (BindWidget))
		UTextBlock* KillSolider;		// ɱ�˶��ٵ���

	UPROPERTY(meta = (BindWidget))
		UTextBlock* GameLevelSurplusQuantity;	// ʣ���������

	UPROPERTY(meta = (BindWidget))
		UProgressBar* GSProgressBar;		// ʣ����������Ľ�����

public:
	virtual void NativeConstruct() override;
};
