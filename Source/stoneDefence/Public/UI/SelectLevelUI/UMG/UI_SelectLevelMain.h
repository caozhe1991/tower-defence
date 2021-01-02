// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_SelectLevelMain.generated.h"

class UUI_LevelButton;
class UButton;
class UCanvasPanel;
/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_SelectLevelMain : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(meta = (BindWidget))
		UButton* ReturnMenuButton;

	UPROPERTY(meta = (BindWidget))
		UCanvasPanel* SelectMap;
		

	TArray<UUI_LevelButton*> AllLevelButton;

protected:
	void InitSelectLevelButton();

	UFUNCTION()
	void ReturnMenu();

public:
	virtual void NativeConstruct() override;

	
};
