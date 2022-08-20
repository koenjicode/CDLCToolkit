#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "LuxBattleStateResetData.h"
#include "LuxBattleRecordingData.h"
#include "LuxBattleReplayPlayer.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleReplayPlayer : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleStateResetData StateResetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleRecordingData RecordingData;
    
public:
    ALuxBattleReplayPlayer();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistNextRound() const;
    
};

