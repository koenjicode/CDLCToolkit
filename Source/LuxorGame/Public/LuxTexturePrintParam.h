#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialInstance.h"
#include "UObject/NoExportTypes.h"
#include "ELuxTexturePrinter.h"
#include "Materials/MaterialInstance.h"
#include "Materials/MaterialInstance.h"
#include "LuxTexturePrintParam.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FLuxTexturePrintParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELuxTexturePrinter PrinterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D Dimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FScalarParameterValue> ScalarParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVectorParameterValue> VectorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextureParameterValue> TextureParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PrinterMaterialOverride;
    
    LUXORGAME_API FLuxTexturePrintParam();
};

