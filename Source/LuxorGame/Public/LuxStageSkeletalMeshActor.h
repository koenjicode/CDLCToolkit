#pragma once
#include "CoreMinimal.h"
#include "LuxStageActorBase.h"
#include "LuxStageSkeletalMeshActor.generated.h"

class ULuxRootMotionComponent;
class ULuxSkeletalMeshComponent;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxStageSkeletalMeshActor : public ALuxStageActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULuxSkeletalMeshComponent* LuxSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULuxRootMotionComponent* LuxRootMotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation;
    
    ALuxStageSkeletalMeshActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTimeDilation(float inTimeDilation);
    
};

