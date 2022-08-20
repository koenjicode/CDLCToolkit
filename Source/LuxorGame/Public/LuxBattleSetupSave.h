#pragma once
#include "CoreMinimal.h"
#include "LuxNamedDNA.h"
#include "LuxSaveGameBase.h"
#include "LuxBattleRuleParam.h"
#include "LuxBattleReplayParam.h"
#include "LuxBattleSetupSave.generated.h"

class ULuxBattleSetup;
class ULuxBattlePlayerSetup;
class ULuxBattleSetupSave;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBattleSetupSave : public ULuxSaveGameBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FLuxBattleRuleParam BattleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FLuxNamedDNA> BattleDNAs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FLuxBattleReplayParam BattleReplay;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAutoStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bEndless;
    
    ULuxBattleSetupSave();
    UFUNCTION(BlueprintCallable)
    static bool SaveBattleSetupToSlot(const ULuxBattleSetup* inBattleSetup, const TArray<ULuxBattlePlayerSetup*> inPlayerSetups, const FString& inSuffix);
    
    UFUNCTION(BlueprintCallable)
    static ULuxBattleSetupSave* LoadBattleSetupSave(const FString& inSuffix);
    
    UFUNCTION(BlueprintCallable)
    void GetBattleRules(FLuxBattleRuleParam& outParam);
    
    UFUNCTION(BlueprintCallable)
    void GetBattleReplay(FLuxBattleReplayParam& outParam);
    
    UFUNCTION(BlueprintCallable)
    void GetBattleDNAs(TArray<FLuxNamedDNA>& outDNAs);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesBattleSetupSaveExist(const FString& inSuffix);
    
};

