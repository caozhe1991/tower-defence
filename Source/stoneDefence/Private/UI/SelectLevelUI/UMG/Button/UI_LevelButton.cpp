// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SelectLevelUI/UMG/Button/UI_LevelButton.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UUI_LevelButton::NativeConstruct()
{
	Super::NativeConstruct();
	NextLevelButton->OnClicked.AddDynamic(this, &UUI_LevelButton::SelectLevel);
}

void UUI_LevelButton::SelectLevel()
{
	UGameplayStatics::OpenLevel(GetWorld(), "TestMap");
	
}
