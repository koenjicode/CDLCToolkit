#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxStageVisibilitySwitchActor.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxStageVisibilitySwitchActor : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPropagateToChildren;
    
    ALuxStageVisibilitySwitchActor();
};

