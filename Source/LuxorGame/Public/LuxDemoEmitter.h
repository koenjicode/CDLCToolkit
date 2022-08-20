#pragma once
#include "CoreMinimal.h"
#include "ELuxDemoEmitterAttachBone.h"
#include "GameFramework/Actor.h"
#include "LuxDemoEmitter.generated.h"

class ALuxDemoHumanActor;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxDemoEmitter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALuxDemoHumanActor* DemoCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxDemoEmitterAttachBone AttachBone;
    
    ALuxDemoEmitter();
};

