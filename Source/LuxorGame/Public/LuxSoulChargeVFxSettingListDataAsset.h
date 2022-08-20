#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxSoulChargeVFxSetting.h"
#include "LuxSoulChargeVFxSettingListDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxSoulChargeVFxSettingListDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxSoulChargeVFxSetting> SoulChargeVFxSettingList;
    
    ULuxSoulChargeVFxSettingListDataAsset();
};

