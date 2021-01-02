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
		UImage* TowersIcon;		// 图标

	UPROPERTY(meta = (BindWidget))
		UImage* TowersIconCD;	// CD蒙板

	// Towers Prepare Building Number
	UPROPERTY(meta = (BindWidget))
		UTextBlock* TCBNumber;	// 塔，准备构建的数量

	// Towers Completion Of Construction Number
	UPROPERTY(meta = (BindWidget))
		UTextBlock* TCOCNumber;	// 塔，已经完成的数量

	UPROPERTY(meta = (BindWidget))
		UTextBlock* TowersCDValue;	// 当前CD值

	// Towers Inventory Slot Button
	UPROPERTY(meta = (BindWidget))
		UButton* TISButton;

public:
	virtual void NativeConstruct() override;

	UFUNCTION()
		void OnClickedWidget();
};
