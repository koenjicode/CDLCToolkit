#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleKey.h"
#include "LuxBattleCombinationKeyData.generated.h"

USTRUCT(BlueprintType)
struct FLuxBattleCombinationKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxBattleKey> BattleKey;
    
    LUXORGAME_API FLuxBattleCombinationKeyData();
};

