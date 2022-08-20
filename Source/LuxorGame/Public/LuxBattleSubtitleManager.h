#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LuxActor.h"
#include "LuxBattleSubtitleManager.generated.h"

class AActor;
class ALuxBattleEnshutsuSubtitle;
class ULuxDevBattleSubtitleSetting;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleSubtitleManager : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SubtitleControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SubtitleControllerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALuxBattleEnshutsuSubtitle* BattleEnshutsuSubtitle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxDevBattleSubtitleSetting* DevBattleSubtitleSetting;
    
public:
    ALuxBattleSubtitleManager();
};

