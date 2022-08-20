#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "ELuxWeaponAttackType.h"
#include "LuxWeaponAttackTypeParam.h"
#include "UObject/NoExportTypes.h"
#include "LuxBattleWeaponEventHandler.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleWeaponEventHandler : public ALuxActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LuxBCWATTable;
    
public:
    ALuxBattleWeaponEventHandler();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGetWeaponTip(const FLuxWeaponAttackTypeParam& inEvent, FVector& outRoot, FVector& outTip, bool& bReturnValue, bool& bGetType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGetWeaponAttackType(const FLuxWeaponAttackTypeParam& inEvent, ELuxWeaponAttackType& inAttackType, bool& bGetType);
    
};

