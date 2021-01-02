// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/GameUI/UMG/Inventory/UI_Inventory.h"
#include "UI/GameUI/UMG/Inventory/UI_InventorySlot.h"
#include "Components/UniformGridSlot.h"
#include "Components/UniformGridPanel.h"


UUI_Inventory::UUI_Inventory()
{
	static ConstructorHelpers::FClassFinder<UUI_InventorySlot> InventorySlot_BPClass(TEXT("/Game/_UI/Game/Inventory/InventorySlot_BP"));
	if (InventorySlot_BPClass.Succeeded())
	{
		InventorySlotClass = InventorySlot_BPClass.Class;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("'/Game/_UI/Game/Inventoty/InventorySlot_BP' not exist!"));
	}
}

void UUI_Inventory::NativeConstruct()
{
	Super::NativeConstruct();
	LayoutInventorySlot(3, 3);
}

void UUI_Inventory::LayoutInventorySlot(int32 ColumnNumber, int32 RowNumber)
{
	if (InventorySlotClass)
	{
		for (int32 MyRow = 0; MyRow < RowNumber; MyRow ++) 
		{
			for (int32 MyColumn = 0; MyColumn < ColumnNumber; MyColumn ++)
			{
				
				UUI_InventorySlot* SlotWidget = CreateWidget<UUI_InventorySlot>(GetWorld(), InventorySlotClass);
				if (SlotWidget)
				{
					// 将UMG添加进去
					UUniformGridSlot* GridSlot  = SlotArrayInventory->AddChildToUniformGrid(SlotWidget);
					if (GridSlot)
					{
						GridSlot->SetColumn(MyColumn);
						GridSlot->SetRow(MyRow);
						GridSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
						GridSlot->SetVerticalAlignment(EVerticalAlignment::VAlign_Fill);
					}

					InventorySlotArray.Add(SlotWidget);
				}
			}
		}
	}
}
