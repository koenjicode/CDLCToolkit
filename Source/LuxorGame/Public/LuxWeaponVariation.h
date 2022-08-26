#pragma once
#include "CoreMinimal.h"
#include "ELuxWeaponVariation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "ELuxColorEditableFlag.h"
#include "LuxWeaponVariation.generated.h"

USTRUCT(BlueprintType)
struct FLuxWeaponVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxWeaponVariation Variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<ELuxColorEditableFlag> ColorEditFlags;
    
    LUXORGAME_API FLuxWeaponVariation();
};

