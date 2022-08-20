#pragma once
#include "CoreMinimal.h"
#include "ELuxWeaponAssetType.h"
#include "ELuxWeaponVariation.h"
#include "LuxWeaponRawAsset.generated.h"

USTRUCT(BlueprintType)
struct FLuxWeaponRawAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxWeaponAssetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxWeaponVariation Variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    LUXORGAME_API FLuxWeaponRawAsset();
};

