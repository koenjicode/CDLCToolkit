#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "LuxBattleMissionManager.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleMissionManager : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponEnabled;
    
public:
    ALuxBattleMissionManager();
    UFUNCTION(BlueprintCallable)
    void SetWeaponEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlipEnabled(int32 inPlayerIndex) const;
    
};

