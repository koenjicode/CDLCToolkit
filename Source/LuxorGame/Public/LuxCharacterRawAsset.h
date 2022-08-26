#pragma once
#include "CoreMinimal.h"
#include "ELuxCharacterAssetType.h"
#include "LuxCharacterRawAsset.generated.h"

USTRUCT(BlueprintType)
struct FLuxCharacterRawAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCharacterAssetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    LUXORGAME_API FLuxCharacterRawAsset();
};

