// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TowerDefenceGameInstance.generated.h"

/**
 * ��ϷΨһ�����е����࣬����Ϸ��ʼ��������һֱ���ڣ����ܹؿ��л�Ӱ�졣
 */
UCLASS()
class STONEDEFENCE_API UTowerDefenceGameInstance : public UGameInstance
{
	GENERATED_BODY()


public:
	virtual void Init() override;
	
};
