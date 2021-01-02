#pragma once
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"

class SScreenLoading : public SCompoundWidget
{
	
public:
	SLATE_BEGIN_ARGS(SScreenLoading)
	{}
	SLATE_END_ARGS();


	void Construct(const FArguments& InArgs, const FString &InMapName);

private:
	TOptional<float> GetProgress() const;
	FString MapName;
};

