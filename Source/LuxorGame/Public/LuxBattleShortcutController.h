#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "LuxBattleShortcutController.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleShortcutController : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResettableForcibly;
    
    ALuxBattleShortcutController();
};

