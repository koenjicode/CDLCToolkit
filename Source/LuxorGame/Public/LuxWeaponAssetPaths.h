#pragma once
#include "CoreMinimal.h"
#include "LuxWeaponVariation.h"
#include "LuxAssetPathsBase.h"
#include "LuxWeaponRawAsset.h"
#include "LuxTraceColorApplySettingList.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "LuxWeaponAssetPaths.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxWeaponAssetPaths : public ULuxAssetPathsBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxWeaponRawAsset> RawAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxWeaponVariation> Variations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxTraceColorApplySettingList> TraceColorApplySettingLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference AppxWeaponPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference AppxWeaponPath2;
    
    ULuxWeaponAssetPaths();
};

