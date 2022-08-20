#pragma once
#include "CoreMinimal.h"
#include "LuxTraceParamBase.h"
#include "LuxDisableTraceParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxDisableTraceParam : public FLuxTraceParamBase {
    GENERATED_BODY()
public:
    FLuxDisableTraceParam();
};

