#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LuxStageBreakableBarrierColorParam.generated.h"

USTRUCT(BlueprintType)
struct FLuxStageBreakableBarrierColorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    LUXORGAME_API FLuxStageBreakableBarrierColorParam();
};

