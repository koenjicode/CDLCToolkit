#pragma once
#include "CoreMinimal.h"
#include "LuxBattleRuleParam.h"
#include "LuxProfileData.h"
#include "LuxBattleStateResetData.h"
#include "LuxBattleRecordingData.h"
#include "LuxBattleReplayData.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleReplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleRuleParam BattleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileData LeftProfileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileData RightProfileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleStateResetData StateResetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleRecordingData RecordingData;
    
    FLuxBattleReplayData();
};

