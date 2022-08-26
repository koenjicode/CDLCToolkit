#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleKey.h"
#include "InputCoreTypes.h"
#include "LuxBattleInput.generated.h"

USTRUCT(BlueprintType)
struct FLuxBattleInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey PhysKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxBattleKey> BattleKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePlayerIndex;
    
    LUXORGAME_API FLuxBattleInput();
};

