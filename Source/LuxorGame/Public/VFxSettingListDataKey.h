#pragma once
#include "CoreMinimal.h"
#include "ELuxEffectCategory.h"
#include "VFxSettingListDataKey.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FVFxSettingListDataKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEffectCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubCategory;
    
    FVFxSettingListDataKey();
};

