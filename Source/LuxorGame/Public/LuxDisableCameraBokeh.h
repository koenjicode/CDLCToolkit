#pragma once
#include "CoreMinimal.h"
#include "LuxPostProcessParamBase.h"
#include "LuxDisableCameraBokeh.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxDisableCameraBokeh : public FLuxPostProcessParamBase {
    GENERATED_BODY()
public:
    FLuxDisableCameraBokeh();
};

