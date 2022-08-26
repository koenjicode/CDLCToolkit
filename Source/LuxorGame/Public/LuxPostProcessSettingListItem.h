#pragma once
#include "CoreMinimal.h"
#include "LuxPostProcessSettingListItem.generated.h"

class ULuxCurveBase;

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxPostProcessSettingListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxCurveBase* ParameterCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IdList;
    
    FLuxPostProcessSettingListItem();
};

