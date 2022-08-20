#pragma once
#include "CoreMinimal.h"
#include "LuxBattleVariableAISetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleVariableAISetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WazaLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Personality;
    
    FLuxBattleVariableAISetting();
};

