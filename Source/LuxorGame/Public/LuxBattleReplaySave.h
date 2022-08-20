#pragma once
#include "CoreMinimal.h"
#include "LuxSaveGameBase.h"
#include "LuxBattleRecordingData.h"
#include "LuxBattleReplayData.h"
#include "LuxBattleStateResetData.h"
#include "LuxBattleReplaySave.generated.h"

class ULuxBattleReplaySave;
class ULuxBattleSetup;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBattleReplaySave : public ULuxSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLuxBattleReplayData ReplayData;
    
    ULuxBattleReplaySave();
    UFUNCTION(BlueprintCallable)
    static bool SaveReplayToSlot(const ULuxBattleSetup* inBattleSetup, const FLuxBattleStateResetData& inStateResetData, const FLuxBattleRecordingData& inRecordingData, const FString& inSuffix);
    
    UFUNCTION(BlueprintCallable)
    static ULuxBattleReplaySave* LoadReplaySave(const FString& inSuffix);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesReplaySaveExist(const FString& inSuffix);
    
};

