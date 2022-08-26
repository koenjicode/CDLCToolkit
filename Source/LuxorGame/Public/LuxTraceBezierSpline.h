#pragma once
#include "CoreMinimal.h"
#include "LuxTraceCatmullRomSpline.h"
#include "LuxTraceBezierSpline.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxTraceBezierSpline : public FLuxTraceCatmullRomSpline {
    GENERATED_BODY()
public:
    FLuxTraceBezierSpline();
};

