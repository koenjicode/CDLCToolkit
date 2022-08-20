#pragma once
#include "CoreMinimal.h"
#include "LuxAssetPathsBase.h"
#include "LuxCharacterRawAsset.h"
#include "LuxVoiceTableRawAsset.h"
#include "LuxCharacterAssetPaths.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxCharacterAssetPaths : public ULuxAssetPathsBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxCharacterRawAsset> RawAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxVoiceTableRawAsset> VoiceTableAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxCharacterRawAsset> DebugAssets;
    
    ULuxCharacterAssetPaths();
};

