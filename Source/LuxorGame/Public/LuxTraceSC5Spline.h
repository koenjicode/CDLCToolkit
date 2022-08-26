#pragma once
#include "CoreMinimal.h"
#include "LuxTraceBSpline.h"
#include "LuxTraceSC5Spline.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxTraceSC5Spline : public FLuxTraceBSpline {
    GENERATED_BODY()
public:
    FLuxTraceSC5Spline();
};

