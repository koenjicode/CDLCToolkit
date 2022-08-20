#pragma once
#include "CoreMinimal.h"
#include "ELuxAchievementsList.h"
#include "LuxBattleAchievement.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleAchievement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxAchievementsList ID;
    
    FLuxBattleAchievement();
};

