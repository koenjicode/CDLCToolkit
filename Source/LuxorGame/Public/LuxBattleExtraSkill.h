#pragma once
#include "CoreMinimal.h"
#include "LuxBattleExtraSkill.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleExtraSkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> Params;
    
    FLuxBattleExtraSkill();
};

