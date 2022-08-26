#pragma once
#include "CoreMinimal.h"
#include "CaptureRequest.generated.h"

class UTextureRenderTarget2D;
class UMaterialInterface;
class UObject;

USTRUCT(BlueprintType)
struct DMUTILITY_API FCaptureRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Mat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> tmpObject;
    
    FCaptureRequest();
};

