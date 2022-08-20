#pragma once
#include "CoreMinimal.h"
#include "LuxBattleRoundRecordingData.h"
#include "LuxBattleRecordingData.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleRecordingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleRoundRecordingData> Rounds;
    
    FLuxBattleRecordingData();
};

