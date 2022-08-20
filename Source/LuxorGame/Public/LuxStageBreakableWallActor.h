#pragma once
#include "CoreMinimal.h"
#include "LuxStageActorBase.h"
#include "LuxStageBreakableWallActor.generated.h"

class UParticleSystem;
class UStaticMeshComponent;
class ULuxStageSkeletalMeshComponent;
class ULuxStageMeshComponent;
class UParticleSystemComponent;
class ULuxSkeletalMeshComponent;
class ULuxParticleSystemComponent;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxStageBreakableWallActor : public ALuxStageActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULuxStageMeshComponent* BaseTranslucentMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BrokenMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULuxStageMeshComponent* BrokenTranslucentMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULuxSkeletalMeshComponent* BreakingMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULuxStageSkeletalMeshComponent* BreakingTranslucentMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULuxParticleSystemComponent* ParticleSystemComponent;
    
    ALuxStageBreakableWallActor();
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemFinished(UParticleSystemComponent* FinishedPSComponent);
    
    UFUNCTION(BlueprintCallable)
    void Broken(bool Immediately);
    
};

