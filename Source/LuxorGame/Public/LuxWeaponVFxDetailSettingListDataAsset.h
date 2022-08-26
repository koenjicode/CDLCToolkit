#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxWeaponVFxDetailSetting.h"
#include "LuxWeaponVFxDetailSettingListDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxWeaponVFxDetailSettingListDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxWeaponVFxDetailSetting> WeaponVFxDetailSettingList;
    
    ULuxWeaponVFxDetailSettingListDataAsset();
};

