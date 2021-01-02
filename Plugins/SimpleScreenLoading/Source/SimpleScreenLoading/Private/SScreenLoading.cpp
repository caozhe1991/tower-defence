#include "SScreenLoading.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Notifications/SProgressBar.h"

inline void SScreenLoading::Construct(const FArguments& InArgs, const FString &InMapName)
{
	MapName = InMapName;
	ChildSlot
		[
			SNew(SProgressBar)
			.Percent(this, &SScreenLoading::GetProgress)
		];
	
}

TOptional<float> SScreenLoading::GetProgress() const
{
	// �첽��ȡ�������ؽ��ȣ�δ��ʼʱ����-1����ɺ�ͬ������-1�����ع��̷��� 0-100
	float const LoadPercentage = GetAsyncLoadPercentage(*MapName);
	return LoadPercentage * 0.01;
}
