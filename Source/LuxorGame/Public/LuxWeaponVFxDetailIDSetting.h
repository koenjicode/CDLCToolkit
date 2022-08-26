#pragma once
#include "CoreMinimal.h"
#include "ELuxEffectPartsId.h"
#include "LuxWeaponVFxDetailIDSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxWeaponVFxDetailIDSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEffectPartsId Node;
    
    FLuxWeaponVFxDetailIDSetting();
};

