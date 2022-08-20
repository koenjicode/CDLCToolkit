#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "LuxBattleHUDManager.generated.h"

class ALuxPersonalityCommentEventListener;
class ALuxInputKeyEventListener;
class ALuxCockpitEventListener;
class ALuxDamageInfoEventListener;
class ALuxNoticeEventListener;
class ALuxBattleHUDController;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleHUDManager : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxCockpitEventListener* CockpitEventListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxNoticeEventListener* NoticeEventListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxDamageInfoEventListener* DamageInfoEventListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxInputKeyEventListener* InputKeyEventListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxPersonalityCommentEventListener* PersonalityCommentEventListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleHUDController* HUDController;
    
    ALuxBattleHUDManager();
};

