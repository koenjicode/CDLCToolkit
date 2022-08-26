#pragma once
#include "CoreMinimal.h"
#include "LuxTraceSpline.h"
#include "LuxTraceCatmullRomSpline.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxTraceCatmullRomSpline : public FLuxTraceSpline {
    GENERATED_BODY()
public:
    FLuxTraceCatmullRomSpline();
};

