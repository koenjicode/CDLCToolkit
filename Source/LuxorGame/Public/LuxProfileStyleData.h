#pragma once
#include "CoreMinimal.h"
#include "LuxProfileDataSerializable.h"
#include "ELuxFightStyle.h"
#include "ELuxWeaponVariation.h"
#include "ELuxSoulChargeType.h"
#include "LuxProfileStyleData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileStyleData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxFightStyle STYLE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxWeaponVariation WEAPON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 hitEffectPresetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxSoulChargeType soulChargeType;
    
    LUXORGAME_API FLuxProfileStyleData();
};

