#pragma once
#include "CoreMinimal.h"
#include "LuxVoiceParamBase.h"
#include "LuxStopVoiceParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxStopVoiceParam : public FLuxVoiceParamBase {
    GENERATED_BODY()
public:
    FLuxStopVoiceParam();
};

