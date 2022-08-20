#pragma once
#include "CoreMinimal.h"
#include "LuxStickerRequest.generated.h"

class UTextureRenderTarget2D;
class UMaterialInterface;
class UObject;

USTRUCT(BlueprintType)
struct FLuxStickerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Mat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> tmpObject;
    
    LUXORGAME_API FLuxStickerRequest();
};

