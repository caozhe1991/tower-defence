// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HallUI/UMG/UI_HallMenuSystem.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "UI/Common/UMG/UI_SaveAndLoadinGameSystem.h"
#include "UI/HallUI/Core/CreateAssistWidget.h"
#include "UI/HallUI/Core/TowerDefenceHallHUD.h"

void UUI_HallMenuSystem::NativeConstruct()
{
	Super::NativeConstruct();
	GameStartButton->OnClicked.AddDynamic(this, &UUI_HallMenuSystem::GameStart);
	HistoryButton->OnClicked.AddDynamic(this, &UUI_HallMenuSystem::History);
	GameSettingsButton->OnClicked.AddDynamic(this, &UUI_HallMenuSystem::GameSettings);
	TutorialWebsiteButton->OnClicked.AddDynamic(this, &UUI_HallMenuSystem::TutorialWebsite);
	BrowserButton->OnClicked.AddDynamic(this, &UUI_HallMenuSystem::Browser);
	QuitGameButton->OnClicked.AddDynamic(this, &UUI_HallMenuSystem::QuitGame);
	SecretTerritoryButton->OnClicked.AddDynamic(this, &UUI_HallMenuSystem::SecretTerritory);
	SpecialContentButton->OnClicked.AddDynamic(this, &UUI_HallMenuSystem::SpecialContent);
}

void UUI_HallMenuSystem::GameStart()
{
	UGameplayStatics::OpenLevel(GetWorld(), "SelectLevel");
}

void UUI_HallMenuSystem::SecretTerritory() {
}

void UUI_HallMenuSystem::History()
{
	ATowerDefenceHallHUD* hud = Cast<ATowerDefenceHallHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());

	UUI_MainHall* aa = hud->GetMainHall();
	
	CreateAssistWidget<UUI_HallMenuSystem, UUI_SaveAndLoadinGameSystem>(this, ArchivesSystemClass, )
}

void UUI_HallMenuSystem::GameSettings()
{
}

void UUI_HallMenuSystem::TutorialWebsite()
{
}

void UUI_HallMenuSystem::Browser()
{
}

void UUI_HallMenuSystem::SpecialContent() {
}

void UUI_HallMenuSystem::QuitGame()
{
}
