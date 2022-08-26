#pragma once
#include "CoreMinimal.h"
#include "LuxBGMParamBase.h"
#include "LuxPlayBGMParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxPlayBGMParam : public FLuxBGMParamBase {
    GENERATED_BODY()
public:
    FLuxPlayBGMParam();
};

