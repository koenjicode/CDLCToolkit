#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleMode.h"
#include "LuxBattleDramaticVoicePlayerTriggerCondition.h"
#include "LuxBattleDramaticVoiceTriggerCondition.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleDramaticVoiceTriggerCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleMode BattleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleDramaticVoicePlayerTriggerCondition> PlayerArray;
    
    FLuxBattleDramaticVoiceTriggerCondition();
};

