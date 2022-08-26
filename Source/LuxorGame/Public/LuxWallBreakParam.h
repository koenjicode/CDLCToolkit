#pragma once
#include "CoreMinimal.h"
#include "ELuxGroundMaterialType.h"
#include "LuxWallBreakParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxWallBreakParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGroundMaterialType Material;
    
    FLuxWallBreakParam();
};

