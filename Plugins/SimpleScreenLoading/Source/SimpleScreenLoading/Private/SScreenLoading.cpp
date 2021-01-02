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
	// 异步获取场景加载进度，未开始时返回-1，完成后同样返回-1，加载过程返回 0-100
	float const LoadPercentage = GetAsyncLoadPercentage(*MapName);
	return LoadPercentage * 0.01;
}
