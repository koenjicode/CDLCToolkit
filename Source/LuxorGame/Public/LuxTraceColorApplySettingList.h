#pragma once
#include "CoreMinimal.h"
#include "LuxTraceColorApplySetting.h"
#include "LuxTraceColorApplySettingList.generated.h"

USTRUCT(BlueprintType)
struct FLuxTraceColorApplySettingList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxTraceColorApplySetting> TraceColorApplySettings;
    
    LUXORGAME_API FLuxTraceColorApplySettingList();
};

