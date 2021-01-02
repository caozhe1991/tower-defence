// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_PlayerSkillSystem.generated.h"

class UUI_SkillSlot;
//class FKey;
/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_PlayerSkillSystem : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(meta = (BindWidget))
		UUI_SkillSlot* FreezeSkill;		// ���Ἴ��

	UPROPERTY(meta = (BindWidget))
		UUI_SkillSlot* ExplosionSkill;	// ��ը����

	UPROPERTY(meta = (BindWidget))
		UUI_SkillSlot* RecoverySkill;	// �ָ�������������ֵ

	UPROPERTY(meta = (BindWidget))
		UUI_SkillSlot* RecoveryMainTowerSkill;	// �ָ���������

private:
	FKey FreezeSkillKey;
	FKey ExplosionSkillKey;
	FKey RecoverySkillKey;
	FKey RecoveryMainTowerSkillKey;

public:
	virtual void NativeConstruct() override;


	
};
