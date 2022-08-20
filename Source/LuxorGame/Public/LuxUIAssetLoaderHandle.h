#pragma once
#include "CoreMinimal.h"
#include "LuxUIAssetLoaderHandle.generated.h"

class ULuxUIAssetLoader;

USTRUCT(BlueprintType)
struct FLuxUIAssetLoaderHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULuxUIAssetLoader*> UIAssetLoaders;
    
    LUXORGAME_API FLuxUIAssetLoaderHandle();
};

