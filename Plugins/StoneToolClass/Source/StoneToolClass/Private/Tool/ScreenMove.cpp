
#include "Tool/ScreenMove.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"

bool FScreenMoveUnits::ListenScreenMove(APlayerController* PlayerController, const float &ScreenMoveSpeed)
{
	return MoveDirection(PlayerController, CursorMove(PlayerController), ScreenMoveSpeed);
}

EScreenMoveState FScreenMoveUnits::CursorMove(const APlayerController* PlayerController)
{
	if(PlayerController)
	{
		// 屏幕大小
		int32 SizeX = INDEX_NONE;
		int32 SizeY = INDEX_NONE;

		// 鼠标位置
		float MousePositionX = -3.14f;
		float MousePositionY = -3.14f;

		// 获取屏幕大小和鼠标位置
		PlayerController->GetViewportSize(SizeX, SizeY);
		PlayerController->GetMousePosition(MousePositionX, MousePositionY);

		// 先判断是否在4个角内
		// IsNearlyEqual = abs(参数1 - 参数2) <= 参数3
		if (FMath::IsNearlyEqual(MousePositionX, 0.0f, 5.f)
			&& FMath::IsNearlyEqual(MousePositionY, 0.0f, 5.0f))
		{
			return EScreenMoveState::Screen_LeftAndUp;
		}
		if(FMath::IsNearlyEqual(MousePositionX, 0.0f, 5.0f)
			&& FMath::IsNearlyEqual(MousePositionY, SizeY, 5.0f))
		{
			return EScreenMoveState::Screen_LeftAndDown;
		}
		if (FMath::IsNearlyEqual(MousePositionX, SizeX, 5.0f)
			&& FMath::IsNearlyEqual(MousePositionY, 0.0f, 5.0f))
		{
			return EScreenMoveState::Screen_RightAndUp;
		}
		if (FMath::IsNearlyEqual(MousePositionX, SizeX, 5.0f)
			&& FMath::IsNearlyEqual(MousePositionY, SizeY, 5.0f))
		{
			return EScreenMoveState::Screen_RightAndDown;
		}
		// 在判断上下左右方向
		if (FMath::IsNearlyEqual(MousePositionY, 0.0f, 5.0f))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("up"));
			return EScreenMoveState::Screen_Up;
		}
		if (FMath::IsNearlyEqual(MousePositionY, SizeY, 5.0f))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("down"));
			return EScreenMoveState::Screen_Down;
		}
		if (FMath::IsNearlyEqual(MousePositionX, 0.0f, 5.0f))
		{
			return EScreenMoveState::Screen_Left;
		}
		if (FMath::IsNearlyEqual(MousePositionX, SizeX, 5.0f))
		{
			return EScreenMoveState::Screen_Right;
		}
	}

	
	return EScreenMoveState::Screen_None;
}

bool FScreenMoveUnits::MoveDirection(APlayerController* PlayerController, EScreenMoveState ScreenMoveState,
	const float &ScreenMoveSpeed)
{
	FVector offsetValue = FVector::ZeroVector;
	
	if (PlayerController && PlayerController->GetPawn())
	{
		switch (ScreenMoveState) {
		case Screen_None: break;
		case Screen_Up: 
			offsetValue = FVector(ScreenMoveSpeed, 0.f, 0.f);
			break;
		case Screen_Down:
			offsetValue = FVector(-ScreenMoveSpeed, 0.f, 0.f);
			break;
		case Screen_Right: 
			offsetValue = FVector( 0.f, ScreenMoveSpeed, 0.f);
			break;
		case Screen_Left: 
			offsetValue = FVector(0.f, -ScreenMoveSpeed, 0.f);
			break;
		case Screen_RightAndUp:
			offsetValue = FVector(ScreenMoveSpeed, ScreenMoveSpeed, 0.f);
			break;
		case Screen_RightAndDown: 
			offsetValue = FVector(ScreenMoveSpeed, -ScreenMoveSpeed, 0.f);
			break;
		case Screen_LeftAndUp: 
			offsetValue = FVector(ScreenMoveSpeed, -ScreenMoveSpeed, 0.f);
			break;
		case Screen_LeftAndDown: 
			offsetValue = FVector(-ScreenMoveSpeed, -ScreenMoveSpeed, 0.f);
			break;
		}

		PlayerController->GetPawn()->AddActorWorldOffset(offsetValue);
	}
	


	return true;
}
