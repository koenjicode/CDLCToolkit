#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxBattleColorFadeSetting.h"
#include "LuxBattleColorFadeSettingListDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBattleColorFadeSettingListDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleColorFadeSetting> ColorFadeSettingList;
    
    ULuxBattleColorFadeSettingListDataAsset();
};

