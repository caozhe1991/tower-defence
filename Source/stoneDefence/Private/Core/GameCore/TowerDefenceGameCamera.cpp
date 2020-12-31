// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/GameCore/TowerDefenceGameCamera.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ATowerDefenceGameCamera::ATowerDefenceGameCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	// 创建组件，弹簧臂
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	// 创建组件，摄像机
	MainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	// 创建组件，box，也就是碰撞盒，用来检测相机石头和其他物体碰到
	MarkBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Sign"));

	// 绑定到根组件， 参数2是绑定方式，当前为保持两个物体之间的相对位置不要变化。
	CameraBoom->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	MainCamera->AttachToComponent(CameraBoom, FAttachmentTransformRules::KeepRelativeTransform);
	MarkBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	
	// 控制摄像机的角度和高度
	CameraBoom->TargetArmLength = 800.f;
	// CameraBoom->RelativeRotation = FRotator(-60.f, 0.f, 0.f);
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
}


// Called when the game starts or when spawned
void ATowerDefenceGameCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called to bind functionality to input
void ATowerDefenceGameCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATowerDefenceGameCamera::Zoom(bool bDirection, const float& ZoomSpeed)
{
	if (bDirection)
	{
		if (CameraBoom->TargetArmLength > 400)
		{
			CameraBoom->TargetArmLength -= ZoomSpeed;
		}
		
	}
	else
	{
		if (CameraBoom->TargetArmLength < 800)
		{
			CameraBoom->TargetArmLength += ZoomSpeed;
		}
	}
	
}

