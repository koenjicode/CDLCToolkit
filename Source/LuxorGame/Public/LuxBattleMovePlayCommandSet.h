#pragma once
#include "CoreMinimal.h"
#include "LuxBattleMovePlayCommandSet.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleMovePlayCommandSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntroIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainIndex;
    
    FLuxBattleMovePlayCommandSet();
};

