// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_SkillSlot.generated.h"

class UImage;
class UTextBlock;
class UButton;

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_SkillSlot : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(meta = (BindWidget))
		UImage* SkillIcon;		// ����ͼ��

	UPROPERTY(meta = (BindWidget))
		UImage* SkillIconCD;		// ����CD�е��ɰ�

	UPROPERTY(meta = (BindWidget))
		UTextBlock* SkillNumber;	// ���ܿ�������

	UPROPERTY(meta = (BindWidget))
		UTextBlock* KeyValueNumber;	// ���ܰ󶨵����ְ���

	UPROPERTY(meta = (BindWidget))
		UTextBlock* SkillCDValue;	// CDʱ��

	UPROPERTY(meta = (BindWidget))
		UButton* ClickButton;

public:
	virtual void NativeConstruct() override;

	UFUNCTION()
		void OnClickedWidget();
	
	
};
