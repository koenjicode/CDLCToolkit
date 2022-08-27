#pragma once
#include "CoreMinimal.h"
#include "LuxTraceOne.generated.h"

class ALuxTraceMeshActor;
class ULuxTraceEffectCurve;
class UCurveFloat;
class ULuxTraceAttachComponent;

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxTraceOne {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALuxTraceMeshActor* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FrameScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxTraceEffectCurve* EffectCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxTraceEffectCurve* EffectDeltaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticleSystemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULuxTraceAttachComponent* AttachComponent;
    
    FLuxTraceOne();
};

