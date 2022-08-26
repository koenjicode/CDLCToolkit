#pragma once
#include "CoreMinimal.h"
#include "ELuxGroundMaterialType.h"
#include "ELuxFloorBreakType.h"
#include "LuxFloorBreakParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxFloorBreakParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SmokeParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmokeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FloorBreakPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGroundMaterialType Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxFloorBreakType FloorBreakType;
    
    FLuxFloorBreakParam();
};

