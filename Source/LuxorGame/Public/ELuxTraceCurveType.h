#pragma once
#include "CoreMinimal.h"
#include "ELuxTraceCurveType.generated.h"

UENUM(BlueprintType)
enum class ELuxTraceCurveType : uint8 {
    ETC_Spline,
    EFB_BSpline,
    ENUM_MAX UMETA(Hidden),
};

