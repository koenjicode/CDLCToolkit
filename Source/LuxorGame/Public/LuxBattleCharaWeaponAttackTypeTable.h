#pragma once
#include "CoreMinimal.h"
#include "WeaponType.h"
#include "Engine/DataTable.h"
#include "LuxBattleCharaWeaponAttackTypeTable.generated.h"

USTRUCT(BlueprintType)
struct FLuxBattleCharaWeaponAttackTypeTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponType> WeaponTypeList;
    
    LUXORGAME_API FLuxBattleCharaWeaponAttackTypeTable();
};

