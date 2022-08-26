#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "LuxTraceAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxTraceAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FLuxTraceAnimInstanceProxy();
};

