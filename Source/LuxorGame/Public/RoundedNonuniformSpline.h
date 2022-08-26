#pragma once
#include "CoreMinimal.h"
#include "LuxTraceSpline.h"
#include "RoundedNonuniformSpline.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FRoundedNonuniformSpline : public FLuxTraceSpline {
    GENERATED_BODY()
public:
    FRoundedNonuniformSpline();
};

