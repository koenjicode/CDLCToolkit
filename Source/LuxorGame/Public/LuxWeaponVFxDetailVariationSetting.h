#pragma once
#include "CoreMinimal.h"
#include "ELuxWeaponVariation.h"
#include "LuxWeaponVFxDetailIDSetting.h"
#include "LuxWeaponVFxDetailVariationSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxWeaponVFxDetailVariationSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxWeaponVariation Variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxWeaponVFxDetailIDSetting> IDSettingList;
    
    FLuxWeaponVFxDetailVariationSetting();
};

