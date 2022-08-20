#pragma once
#include "CoreMinimal.h"
#include "LuxEnableColorCorrection.h"
#include "LuxEnableColorCorrectionDiff.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxEnableColorCorrectionDiff : public FLuxEnableColorCorrection {
    GENERATED_BODY()
public:
    FLuxEnableColorCorrectionDiff();
};

