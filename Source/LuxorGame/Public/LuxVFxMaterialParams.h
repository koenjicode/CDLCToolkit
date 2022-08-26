#pragma once
#include "CoreMinimal.h"
#include "LuxVFxScalarParam.h"
#include "LuxVFxVectorParam.h"
#include "LuxVFxColorParam.h"
#include "LuxVFxMaterialParams.generated.h"

USTRUCT(BlueprintType)
struct FLuxVFxMaterialParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxVFxScalarParam> ScalarParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxVFxVectorParam> VectorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxVFxColorParam> ColorParams;
    
    LUXORGAME_API FLuxVFxMaterialParams();
};

