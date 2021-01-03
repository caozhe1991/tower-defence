// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_HallMenuSystem.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_HallMenuSystem : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

private:
        // ��ʼ��Ϸ
	UPROPERTY(meta = (BindWidget))
		UButton* GameStartButton;

        // �ؾ�
	UPROPERTY(meta = (BindWidget))
		UButton* SecretTerritoryButton;

	// �浵
	UPROPERTY(meta = (BindWidget))
		UButton* HistoryButton;

        // ����
	UPROPERTY(meta = (BindWidget))
		UButton* GameSettingsButton;

	// �̳̰�ť
	UPROPERTY(meta = (BindWidget))
		UButton* TutorialWebsiteButton;

	// �����
	UPROPERTY(meta = (BindWidget))
		UButton* BrowserButton;

        // ��������
	UPROPERTY(meta = (BindWidget))
		UButton* SpecialContentButton;

	// �˳���Ϸ
	UPROPERTY(meta = (BindWidget))
		UButton* QuitGameButton;

	UPROPERTY(EditDefaultsOnly, Category = UI)
		TSubclassOf<class UUI_SaveAndLoadinGameSystem> ArchivesSystemClass;

public:
	// ����UMG�ģ��е����� BeginPlay()
	virtual void NativeConstruct() override;

	UFUNCTION()
	void GameStart();

	UFUNCTION()
	void SecretTerritory();

	UFUNCTION()
	void History();

	UFUNCTION()
	void GameSettings();

	UFUNCTION()
	void TutorialWebsite();

	UFUNCTION()
	void Browser();

	UFUNCTION()
	void SpecialContent();

	UFUNCTION()
	void QuitGame();
};
