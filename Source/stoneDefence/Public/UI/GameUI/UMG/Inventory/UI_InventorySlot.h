// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_InventorySlot.generated.h"


class UImage;
class UTextBlock;
class UButton;
/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_InventorySlot : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()
	
private:
	UPROPERTY(meta = (BindWidget))
		UImage* TowersIcon;		// ͼ��

	UPROPERTY(meta = (BindWidget))
		UImage* TowersIconCD;	// CD�ɰ�

	// Towers Prepare Building Number
	UPROPERTY(meta = (BindWidget))
		UTextBlock* TCBNumber;	// ����׼������������

	// Towers Completion Of Construction Number
	UPROPERTY(meta = (BindWidget))
		UTextBlock* TCOCNumber;	// �����Ѿ���ɵ�����

	UPROPERTY(meta = (BindWidget))
		UTextBlock* TowersCDValue;	// ��ǰCDֵ

	// Towers Inventory Slot Button
	UPROPERTY(meta = (BindWidget))
		UButton* TISButton;

public:
	virtual void NativeConstruct() override;

	UFUNCTION()
		void OnClickedWidget();
};
