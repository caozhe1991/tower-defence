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
	 * ������Ļ�ƶ�
	 * @param PlayerController ��ҵĿ�����
	 * @param ScreenMoveSpeed  ��Ļ�ƶ��ٶ�
	 */
	bool ListenScreenMove(APlayerController* PlayerController, const float &ScreenMoveSpeed);

	
private:
	/**
	 * ��ȡ�������Ļ�е�״̬
	 * @param PlayerController ��ҵĿ�����
	 * @return ������ҵ�ǰ�������Ļ�е�λ��״̬
	 */
	EScreenMoveState CursorMove(const APlayerController* PlayerController);

	/**
	 *ʹ��ǰ��Pawn��������ƶ�
	 * @param PlayerController ��ҵĿ�����
	 * @param ScreenMoveState  �������Ļ�е�״̬
	 * @param ScreenMoveSpeed  ��Ļ�ƶ��ٶ�
	 * @return ���ص�ǰ�Ƿ��ƶ��ɹ�
	 */
	bool MoveDirection(APlayerController* PlayerController, EScreenMoveState ScreenMoveState,
		const float &ScreenMoveSpeed);
};
