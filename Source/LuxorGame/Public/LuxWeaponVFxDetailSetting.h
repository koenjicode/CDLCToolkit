#pragma once
#include "CoreMinimal.h"
#include "LuxWeaponVFxDetailStyleSetting.h"
#include "LuxWeaponVFxDetailSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxWeaponVFxDetailSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxWeaponVFxDetailStyleSetting> StyleSettingList;
    
    FLuxWeaponVFxDetailSetting();
};

