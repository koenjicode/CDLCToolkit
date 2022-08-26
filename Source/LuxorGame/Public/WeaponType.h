#pragma once
#include "CoreMinimal.h"
#include "ELuxWeaponAttackType.h"
#include "WeaponType.generated.h"

USTRUCT(BlueprintType)
struct FWeaponType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxWeaponAttackType> WeaponPartsTypeList;
    
    LUXORGAME_API FWeaponType();
};

