// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HallUI/UMG/UI_MainHall.h"
#include "Components/SizeBox.h"

/*
template <class T, class UserObject>
UserObject* CreateAssistWidget(T *ThisClass, UClass *AssistClass, USizeBox *WidgetArray)
{
	UserObject* UserObjectElement = nullptr;
	//TODO 播放动画，淡入


	UWidget* LastWidget = WidgetArray->GetChildAt(0);
	if (LastWidget)
	{
		// sizeBox存在元素且和当前要载入的相同时，关闭
		if (LastWidget->IsA(AssistClass))
		{
			//TODO 播放动画，淡出

			return UserObjectElement;
		}
		else
		{
			// 不同元素时，清除
			WidgetArray->ClearChildren();
		}
	}

	UserObjectElement = CreateWidget<UserObject>(ThisClass->GetWord(), AssistClass);
	if (UserObjectElement)
	{
		if(WidgetArray->AddChild(UserObjectElement))
		{
			// 添加成功
		}
		else
		{
			// 添加失败
			UserObjectElement->RemoveFromParent();
		}
	}
	return UserObjectElement;
}
*/
void UUI_MainHall::NativeConstruct()
{
	Super::NativeConstruct();
}

UBorder* UUI_MainHall::GetBorder()
{
	return MainBorder;
}

USizeBox* UUI_MainHall::GetSizeBox()
{
	return BoxList;
}
