// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_Inventory.generated.h"

class UUniformGridPanel;
class UUI_InventorySlot;
/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_Inventory : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(meta = (BindWidget))
		UUniformGridPanel* SlotArrayInventory;

	//UPROPERTY(EditDefaultsOnly, Category = UI)
		TSubclassOf<UUI_InventorySlot> InventorySlotClass;

	TArray<UUI_InventorySlot*> InventorySlotArray;

public:
	UUI_Inventory();
	
	virtual void NativeConstruct() override;

	void LayoutInventorySlot(int32 ColumnNumber, int32 RowNumber);
};
