// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HallUI/UMG/UI_MainHall.h"
#include "Components/SizeBox.h"

/*
template <class T, class UserObject>
UserObject* CreateAssistWidget(T *ThisClass, UClass *AssistClass, USizeBox *WidgetArray)
{
	UserObject* UserObjectElement = nullptr;
	//TODO ���Ŷ���������


	UWidget* LastWidget = WidgetArray->GetChildAt(0);
	if (LastWidget)
	{
		// sizeBox����Ԫ���Һ͵�ǰҪ�������ͬʱ���ر�
		if (LastWidget->IsA(AssistClass))
		{
			//TODO ���Ŷ���������

			return UserObjectElement;
		}
		else
		{
			// ��ͬԪ��ʱ�����
			WidgetArray->ClearChildren();
		}
	}

	UserObjectElement = CreateWidget<UserObject>(ThisClass->GetWord(), AssistClass);
	if (UserObjectElement)
	{
		if(WidgetArray->AddChild(UserObjectElement))
		{
			// ��ӳɹ�
		}
		else
		{
			// ���ʧ��
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
