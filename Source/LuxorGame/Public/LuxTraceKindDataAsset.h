#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxTraceKindDataAsset.generated.h"

class UMaterialInterface;
class ULuxTraceMeshDataAsset;
class ULuxTraceEffectCurve;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxTraceKindDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxTraceMeshDataAsset* MeshSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticleSystemTemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxTraceEffectCurve* EffectCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxTraceEffectCurve* EffectDeltaCurve;
    
    ULuxTraceKindDataAsset();
};

