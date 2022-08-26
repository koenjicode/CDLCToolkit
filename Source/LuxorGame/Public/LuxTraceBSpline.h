#pragma once
#include "CoreMinimal.h"
#include "LuxTraceSpline.h"
#include "LuxTraceBSpline.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxTraceBSpline : public FLuxTraceSpline {
    GENERATED_BODY()
public:
    FLuxTraceBSpline();
};

