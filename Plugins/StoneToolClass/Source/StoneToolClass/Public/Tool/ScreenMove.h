#pragma once

#include "CoreMinimal.h"

enum EScreenMoveState
{
	Screen_None,
	Screen_Up,
	Screen_Down,
	Screen_Right,
	Screen_Left,
	Screen_RightAndUp,
	Screen_RightAndDown,
	Screen_LeftAndUp,
	Screen_LeftAndDown,
};

class APlayerController;

struct STONETOOLCLASS_API FScreenMoveUnits
{
	/**
	 * 监听屏幕移动
	 * @param PlayerController 玩家的控制器
	 * @param ScreenMoveSpeed  屏幕移动速度
	 */
	bool ListenScreenMove(APlayerController* PlayerController, const float &ScreenMoveSpeed);

	
private:
	/**
	 * 获取鼠标在屏幕中的状态
	 * @param PlayerController 玩家的控制器
	 * @return 返回玩家当前鼠标在屏幕中的位置状态
	 */
	EScreenMoveState CursorMove(const APlayerController* PlayerController);

	/**
	 *使当前的Pawn跟随鼠标移动
	 * @param PlayerController 玩家的控制器
	 * @param ScreenMoveState  鼠标在屏幕中的状态
	 * @param ScreenMoveSpeed  屏幕移动速度
	 * @return 返回当前是否移动成功
	 */
	bool MoveDirection(APlayerController* PlayerController, EScreenMoveState ScreenMoveState,
		const float &ScreenMoveSpeed);
};
