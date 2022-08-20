#pragma once
#include "CoreMinimal.h"
#include "ELuxVoiceAssetType.h"
#include "LuxVoiceRawAsset.generated.h"

USTRUCT(BlueprintType)
struct FLuxVoiceRawAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxVoiceAssetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    LUXORGAME_API FLuxVoiceRawAsset();
};

