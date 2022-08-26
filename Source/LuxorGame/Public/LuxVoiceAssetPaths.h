#pragma once
#include "CoreMinimal.h"
#include "LuxAssetPathsBase.h"
#include "LuxVoiceRawAsset.h"
#include "LuxVoiceAssetPaths.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxVoiceAssetPaths : public ULuxAssetPathsBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoiceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxVoiceRawAsset> RawAssets;
    
    ULuxVoiceAssetPaths();
};

