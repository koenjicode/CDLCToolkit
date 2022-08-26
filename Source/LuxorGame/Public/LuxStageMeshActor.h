#pragma once
#include "CoreMinimal.h"
#include "LuxStageActorBase.h"
#include "LuxStageMeshActor.generated.h"

class UStaticMeshComponent;
class ULuxStageMeshComponent;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxStageMeshActor : public ALuxStageActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULuxStageMeshComponent* SoftOpacityMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TranslucentMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TestEnabled;
    
    ALuxStageMeshActor();
};

