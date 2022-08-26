#pragma once
#include "CoreMinimal.h"
#include "LuxStageActorBase.h"
#include "LuxManiWheelActor.generated.h"

class UStaticMeshComponent;
class UAtomComponent;
class AActor;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxManiWheelActor : public ALuxStageActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* rool_set01_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* rool_set02_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAtomComponent* sound_component;
    
    ALuxManiWheelActor();
    UFUNCTION(BlueprintCallable)
    void EventActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void EventActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

