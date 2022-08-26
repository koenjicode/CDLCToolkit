#pragma once
#include "CoreMinimal.h"
#include "LuxBGMParamBase.h"
#include "LuxPauseBGMParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxPauseBGMParam : public FLuxBGMParamBase {
    GENERATED_BODY()
public:
    FLuxPauseBGMParam();
};

