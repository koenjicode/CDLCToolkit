#pragma once
#include "CoreMinimal.h"
#include "LuxStageActorBase.h"
#include "LuxEmitter.generated.h"

class ULuxParticleSystemComponent;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxEmitter : public ALuxStageActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULuxParticleSystemComponent* LuxParticleSystemComponent;
    
    ALuxEmitter();
};

