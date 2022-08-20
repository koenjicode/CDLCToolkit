#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "LuxCharaAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxCharaAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FLuxCharaAnimInstanceProxy();
};

