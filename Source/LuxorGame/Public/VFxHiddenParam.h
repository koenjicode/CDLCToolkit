#pragma once
#include "CoreMinimal.h"
#include "ELuxEffectCategory.h"
#include "VFxHiddenParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FVFxHiddenParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEffectCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubGroup;
    
    FVFxHiddenParam();
};

