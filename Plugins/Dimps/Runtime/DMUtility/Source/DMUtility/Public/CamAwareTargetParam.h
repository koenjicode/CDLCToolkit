#pragma once
#include "CoreMinimal.h"
#include "CamAwareTargetParam.generated.h"

class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FCamAwareTargetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaterialIndiceToAlter;
    
    DMUTILITY_API FCamAwareTargetParam();
};

