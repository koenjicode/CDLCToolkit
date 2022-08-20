#pragma once
#include "CoreMinimal.h"
#include "LuxCommonRawAsset.h"
#include "LuxAssetPathsBase.h"
#include "LuxCommonAssetPaths.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxCommonAssetPaths : public ULuxAssetPathsBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxCommonRawAsset> RawAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxCommonRawAsset> DebugAssets;
    
    ULuxCommonAssetPaths();
};

