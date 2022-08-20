#pragma once
#include "CoreMinimal.h"
#include "LuxStageBreakableBarrierScalarParam.h"
#include "LuxStageBreakableBarrierColorParam.h"
#include "LuxStageBreakableBarrierMaterialParamList.generated.h"

USTRUCT(BlueprintType)
struct FLuxStageBreakableBarrierMaterialParamList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxStageBreakableBarrierScalarParam> ScalarParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxStageBreakableBarrierColorParam> ColorParams;
    
    LUXORGAME_API FLuxStageBreakableBarrierMaterialParamList();
};

