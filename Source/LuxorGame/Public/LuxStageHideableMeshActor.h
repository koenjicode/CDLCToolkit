#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxStageHideableMeshActor.generated.h"

class UStaticMeshComponent;
class ULuxStageMeshComponent;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxStageHideableMeshActor : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULuxStageMeshComponent* DitherMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDitherEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DitherFrame;
    
    ALuxStageHideableMeshActor();
    UFUNCTION(BlueprintCallable)
    void SetMeshHidden(bool inHidden);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
};

