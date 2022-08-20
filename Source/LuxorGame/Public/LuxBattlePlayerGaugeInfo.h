#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleSoulGaugeType.h"
#include "ELuxBattleLifeGaugeType.h"
#include "ELuxBattleSoulChargeTimeType.h"
#include "ELuxBattleGuardGaugeType.h"
#include "LuxBattlePlayerGaugeInfo.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattlePlayerGaugeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleLifeGaugeType LifeGaugeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleSoulGaugeType SoulGaugeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleGuardGaugeType GuardGaugeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleSoulChargeTimeType SoulChargeTimeType;
    
    FLuxBattlePlayerGaugeInfo();
};

