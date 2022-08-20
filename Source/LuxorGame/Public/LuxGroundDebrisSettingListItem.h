#pragma once
#include "CoreMinimal.h"
#include "LuxGroundDebrisSetting.h"
#include "LuxGroundDebrisSettingListItem.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxGroundDebrisSettingListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxGroundDebrisSetting GDSetting;
    
    FLuxGroundDebrisSettingListItem();
};

