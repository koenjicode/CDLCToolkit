#pragma once
#include "CoreMinimal.h"
#include "ELuxFightStyle.h"
#include "LuxWeaponVFxDetailVariationSetting.h"
#include "LuxWeaponVFxDetailStyleSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxWeaponVFxDetailStyleSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxFightStyle STYLE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxWeaponVFxDetailVariationSetting> VariationSettingList;
    
    FLuxWeaponVFxDetailStyleSetting();
};

