#pragma once
#include "CoreMinimal.h"
#include "LuxSequenceDataRecorder.h"
#include "LuxBattleRoundRecordingData.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleRoundRecordingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxSequenceDataRecorder> Recorders;
    
    FLuxBattleRoundRecordingData();
};

