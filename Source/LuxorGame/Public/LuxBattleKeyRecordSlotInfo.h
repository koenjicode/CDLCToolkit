#pragma once
#include "CoreMinimal.h"
#include "LuxBattleKeyRecordSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleKeyRecordSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecordFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaybackFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaybackLoop;
    
    FLuxBattleKeyRecordSlotInfo();
};

