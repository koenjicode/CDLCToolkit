#pragma once
#include "CoreMinimal.h"
#include "ELuxEffectCategory.h"
#include "LuxVFxSettingListItem.generated.h"

class ULuxGroundDebrisSettingListDataAsset;
class ULuxParticleSystemSettingListDataAsset;

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxVFxSettingListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEffectCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxParticleSystemSettingListDataAsset* PSSettingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxGroundDebrisSettingListDataAsset* GDSettingList;
    
    FLuxVFxSettingListItem();
};

