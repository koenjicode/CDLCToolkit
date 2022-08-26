#pragma once
#include "CoreMinimal.h"
#include "LuxBattlePlayerGaugeInfo.h"
#include "LuxBattleCommonActor.h"
#include "ELuxBattleLifeGaugeType.h"
#include "ELuxBattleSoulGaugeType.h"
#include "ELuxBattleGuardGaugeType.h"
#include "ELuxBattleSoulChargeTimeType.h"
#include "LuxBattleGaugeTypeChanger.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleGaugeTypeChanger : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattlePlayerGaugeInfo> PlayerInfos;
    
public:
    ALuxBattleGaugeTypeChanger();
    UFUNCTION(BlueprintCallable)
    void SetSoulGaugeType(int32 inPlayerIndex, ELuxBattleSoulGaugeType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetSoulChargeTimeType(int32 inPlayerIndex, ELuxBattleSoulChargeTimeType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetLifeGaugeType(int32 inPlayerIndex, ELuxBattleLifeGaugeType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetGuardGaugeType(int32 inPlayerIndex, ELuxBattleGuardGaugeType inType);
    
    UFUNCTION(BlueprintCallable)
    void ReapplySetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleSoulGaugeType GetSoulGaugeType(int32 inPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleSoulChargeTimeType GetSoulChargeTimeType(int32 inPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleLifeGaugeType GetLifeGaugeType(int32 inPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleGuardGaugeType GetGuardGaugeType(int32 inPlayerIndex) const;
    
};

