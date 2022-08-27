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
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static void StepInBattlePause(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static void SetUserInputCheck(UObject* WorldContext, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static void SetSoulGaugeInfinity(UObject* WorldContext, int32 inPlayerIndex, bool bInfinite);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static void SetImmortality(UObject* WorldContext, int32 inPlayerIndex, bool bImmortal);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static void SetBattlePause(UObject* WorldContext, ELuxBattlePauseType inType, bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static bool IsMatchFinished(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static bool IsLocalUserControl(UObject* WorldContext, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static bool IsFinishBlow(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static bool IsBattlePlaying(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static bool IsBattlePaused(UObject* WorldContext, ELuxBattlePauseType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static bool IsBattleOnlineInputSync(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static bool IsBattleOnline(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBuildConfiguration(FString& Configuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static ALuxBattlePauseController* GetBattlePauseController(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static ALuxBattleManager* GetBattleManager(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static ALuxBattleGameMode* GetBattleGameMode(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContext"), Category = "Lux|Battle")
    static bool BattlePauseEnabled(UObject* WorldContext);
    
};

