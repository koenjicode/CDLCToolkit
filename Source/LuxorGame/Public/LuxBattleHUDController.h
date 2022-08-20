#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "LuxBattleHUDController.generated.h"

class ALuxBattleHUDBase;
class ALuxBattleAnnounce;
class ULuxDevBattleHUDSetting;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleHUDController : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALuxBattleHUDBase*> BattleHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleAnnounce* BattleAnnounce;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxDevBattleHUDSetting* DevBattleHUDSetting;
    
public:
    ALuxBattleHUDController();
    UFUNCTION(BlueprintCallable)
    void OnCommandPlayStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnCommandPlayEnded();
    
};

