#pragma once
#include "CoreMinimal.h"
#include "LuxVFxMaterialParams.h"
#include "LuxVFxMaterialParamsInfo.generated.h"

USTRUCT(BlueprintType)
struct FLuxVFxMaterialParamsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxVFxMaterialParams Params;
    
    LUXORGAME_API FLuxVFxMaterialParamsInfo();
};

