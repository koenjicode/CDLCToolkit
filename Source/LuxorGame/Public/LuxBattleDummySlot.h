#pragma once
#include "CoreMinimal.h"
#include "LuxBattleDummyMoveSetting.h"
#include "ELuxBattleDummyLethalHitType.h"
#include "ELuxBattleDummyCounterType.h"
#include "ELuxBattleDummyUkemiType.h"
#include "ELuxBattleDummyReversalEdgeType.h"
#include "ELuxBattleDummyAerialControlType.h"
#include "LuxBattleDummySlot.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleDummySlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleDummyMoveSetting> MoveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleDummyCounterType CounterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleDummyLethalHitType LethalHitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleDummyUkemiType UkemiType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleDummyReversalEdgeType ReversalEdgeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleDummyAerialControlType AerialControlType;
    
    FLuxBattleDummySlot();
};

