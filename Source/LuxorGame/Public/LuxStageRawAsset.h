#pragma once
#include "CoreMinimal.h"
#include "ELuxStageAssetType.h"
#include "LuxStageRawAsset.generated.h"

USTRUCT(BlueprintType)
struct FLuxStageRawAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxStageAssetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    LUXORGAME_API FLuxStageRawAsset();
};

