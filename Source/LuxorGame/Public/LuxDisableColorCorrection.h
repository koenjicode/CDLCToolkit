#pragma once
#include "CoreMinimal.h"
#include "LuxPostProcessParamBase.h"
#include "LuxDisableColorCorrection.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxDisableColorCorrection : public FLuxPostProcessParamBase {
    GENERATED_BODY()
public:
    FLuxDisableColorCorrection();
};

