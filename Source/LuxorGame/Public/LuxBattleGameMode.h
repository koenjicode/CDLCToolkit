#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LuxGameMode.h"
#include "ELuxUIBattlePlayerSide.h"
#include "ELuxBattleGameModeState.h"
#include "LuxBattleGameMode.generated.h"

class ALuxBattleManager;

UCLASS(Blueprintable, NonTransient)
class LUXORGAME_API ALuxBattleGameMode : public ALuxGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleManager> BattleManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleManager* BattleManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleGameModeState BattleGameModeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEndless;
    
public:
    ALuxBattleGameMode();
    UFUNCTION(BlueprintCallable)
    void TerminateBattle();
    
    UFUNCTION(BlueprintCallable)
    void RequestTrainingModeBattleReset(ELuxUIBattlePlayerSide side);
    
    UFUNCTION(BlueprintCallable)
    void ManualLaunchBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFinishedLoadingAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLaunchBattleManually() const;
    
};

