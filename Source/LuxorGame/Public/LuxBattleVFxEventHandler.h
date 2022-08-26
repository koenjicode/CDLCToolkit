#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxDisableVFxParam.h"
#include "LuxEnableVFxParam.h"
#include "LuxBattleVFxEventHandler.generated.h"

class ULuxVFxMaterialParameterPresetDataAsset;
class ULuxSoulChargeVFxSettingListDataAsset;
class ULuxWeaponVFxDetailSettingListDataAsset;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleVFxEventHandler : public ALuxActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxVFxMaterialParameterPresetDataAsset* StageVFxMaterialParamPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxWeaponVFxDetailSettingListDataAsset* WeaponVFxDetailSettingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxSoulChargeVFxSettingListDataAsset* SoulChargeVFxSettingList;
    
public:
    ALuxBattleVFxEventHandler();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEnableVFx(const FLuxEnableVFxParam& inEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDisableVFx(const FLuxDisableVFxParam& inEvent);
    
};

