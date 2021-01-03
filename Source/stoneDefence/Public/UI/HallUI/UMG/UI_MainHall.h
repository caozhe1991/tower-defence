// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_MainHall.generated.h"

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_MainHall : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:

	UPROPERTY(meta = (BindWidget))
		class  UBorder* Border;

	UPROPERTY(meta = (BindWidget))
		class USizeBox* BoxList;
	
	UPROPERTY(meta = (BindWidget))
		class UUI_HallMenuSystem* HallMenuSystem;

	// 存档与读档UI，教程中封装为了插件，这里偷懒就不封装了
//	UPROPERTY(EditDefaultsOnly, Category = UI)
//		TSubclassOf<class UUI_SaveAndLoadinGameSystem> ArchivesSystemClass;

	UPROPERTY(EditDefaultsOnly, Category = UI)
		TSubclassOf<class UUI_GameSettingsSystem> GameSettingsSystem;

	UPROPERTY(EditDefaultsOnly, Category = UI)
		TSubclassOf<class  UUI_TutoriaSystem> TutorialSystem;

public:
	virtual void NativeConstruct() override;

	UBorder* GetBorder();
	USizeBox* GetSizeBox();
	
};
