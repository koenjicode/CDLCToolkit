#pragma once
#include "CoreMinimal.h"
#include "ELuxCommonAssetType.h"
#include "LuxCommonRawAsset.generated.h"

USTRUCT(BlueprintType)
struct FLuxCommonRawAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCommonAssetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    LUXORGAME_API FLuxCommonRawAsset();
};

