#pragma once

#include "Components/SizeBox.h"

template <class T, class UserObject>
UserObject* CreateAssistWidget(UWorld* World, UClass* AssistClass, USizeBox* WidgetArray)
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

	UserObjectElement = CreateWidget<UserObject>(World, AssistClass);
	if (UserObjectElement)
	{
		if (WidgetArray->AddChild(UserObjectElement))
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