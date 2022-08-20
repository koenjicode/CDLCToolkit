#pragma once
#include "CoreMinimal.h"
#include "LuxStartPlayerIntroParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxStartPlayerIntroParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeaderType;
    
    FLuxStartPlayerIntroParam();
};

