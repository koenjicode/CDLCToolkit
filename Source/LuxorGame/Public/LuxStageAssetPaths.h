#pragma once
#include "CoreMinimal.h"
#include "LuxAssetPathsBase.h"
#include "LuxStageRawAsset.h"
#include "LuxStageSetting.h"
#include "LuxStageAssetPaths.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxStageAssetPaths : public ULuxAssetPathsBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxStageRawAsset> RawAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FLuxStageSetting Setting;
    
    ULuxStageAssetPaths();
};

