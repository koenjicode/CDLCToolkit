#pragma once
#include "CoreMinimal.h"
#include "LuxProfileDataSerializable.h"
#include "LuxProfileBodyColorData.h"
#include "LuxProfilePartsColorData.h"
#include "LuxProfilePartsStickerData.h"
#include "LuxProfileWeaponColorData.h"
#include "LuxProfileColorData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileColorData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileBodyColorData bodyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfilePartsColorData partsColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfilePartsStickerData partsSticker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileWeaponColorData weaponColor;
    
    LUXORGAME_API FLuxProfileColorData();
};

