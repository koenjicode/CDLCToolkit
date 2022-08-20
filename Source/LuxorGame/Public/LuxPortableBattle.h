#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "ELuxSetupType.h"
#include "ELuxBattleGameModeState.h"
#include "LuxPortableBattle.generated.h"

class ULuxBattlePlayerSetup;
class ALuxBattleManager;
class ULuxBattleSetup;
class ULuxBattleStageSetup;
class ULuxBattleSoundSetup;
class ULuxPortableBattle;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxPortableBattle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxBattleSetup* BattleSetup;
    
public:
    ULuxPortableBattle();
    UFUNCTION(BlueprintCallable)
    bool SpawnBattleManager(TSubclassOf<ALuxBattleManager> InClass);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetWorld(const UObject* inContext);
    
    UFUNCTION(BlueprintCallable)
    void ResetBattle();
    
    UFUNCTION(BlueprintCallable)
    void RequestLoad(ELuxSetupType inType);
    
    UFUNCTION(BlueprintCallable)
    void OverrideStageSetup(ULuxBattleStageSetup* inSetup);
    
    UFUNCTION(BlueprintCallable)
    void OverrideSoundSetup(ULuxBattleSoundSetup* inSetup);
    
    UFUNCTION(BlueprintCallable)
    void OverridePlayerSetupRight(ULuxBattlePlayerSetup* inSetup);
    
    UFUNCTION(BlueprintCallable)
    void OverridePlayerSetupLeft(ULuxBattlePlayerSetup* inSetup);
    
    UFUNCTION(BlueprintCallable)
    void OverridePlayerSetupDummy(ULuxBattlePlayerSetup* inSetup);
    
    UFUNCTION(BlueprintCallable)
    void OverrideBattleSetup(ULuxBattleSetup* inSetup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLoaded(ELuxSetupType inType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBattle() const;
    
    UFUNCTION(BlueprintCallable)
    ALuxBattleManager* GetBattleManager();
    
    UFUNCTION(BlueprintCallable)
    void DiscardLoader(ELuxSetupType inType);
    
    UFUNCTION(BlueprintCallable)
    static ULuxPortableBattle* CreatePortableBattle(ULuxBattleSetup* inSetup);
    
    UFUNCTION(BlueprintCallable)
    ELuxBattleGameModeState AutoProgress();
    
};

