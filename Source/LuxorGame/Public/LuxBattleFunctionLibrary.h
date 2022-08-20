#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELuxBattlePauseType.h"
#include "LuxBattleFunctionLibrary.generated.h"

class ALuxBattlePauseController;
class UObject;
class ALuxBattleGameMode;
class ALuxBattleManager;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBattleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxBattleFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void StepInBattlePause(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserInputCheck(UObject* WorldContext, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoulGaugeInfinity(UObject* WorldContext, int32 inPlayerIndex, bool bInfinite);
    
    UFUNCTION(BlueprintCallable)
    static void SetImmortality(UObject* WorldContext, int32 inPlayerIndex, bool bImmortal);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattlePause(UObject* WorldContext, ELuxBattlePauseType inType, bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMatchFinished(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocalUserControl(UObject* WorldContext, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFinishBlow(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattlePlaying(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattlePaused(UObject* WorldContext, ELuxBattlePauseType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattleOnlineInputSync(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattleOnline(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBuildConfiguration(FString& Configuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ALuxBattlePauseController* GetBattlePauseController(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ALuxBattleManager* GetBattleManager(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ALuxBattleGameMode* GetBattleGameMode(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BattlePauseEnabled(UObject* WorldContext);
    
};

