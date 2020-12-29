// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Bullet/RulOfTheBullet.h"

// Sets default values
ARulOfTheBullet::ARulOfTheBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARulOfTheBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARulOfTheBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

