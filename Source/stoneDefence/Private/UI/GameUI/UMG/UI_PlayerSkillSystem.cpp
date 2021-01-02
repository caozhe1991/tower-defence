// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/GameUI/UMG/UI_PlayerSkillSystem.h"
#include "GameFramework/InputSettings.h"

void UUI_PlayerSkillSystem::NativeConstruct()
{
	Super::NativeConstruct();
/*
	auto KeyMapping = GetDefault<UInputSettings>()
		->GetActionMappings().FindByPredicate([&] FInputActionKeyMapping & EntryUI)
	{
		return (EntryUI.ActionName == "FreezeSkill");
	}
*/
}
