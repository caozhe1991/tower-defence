// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_LevelButton.generated.h"

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_LevelButton : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(meta = (BindWidget))
		class UBorder* LevelBorder;

	UPROPERTY(meta = (BindWidget))
		class UProgressBar* LevelProBar;

	UPROPERTY(meta = (BindWidget))
		class UButton* NextLevelButton;


public:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void SelectLevel();
};
