#pragma once
#include "CoreMinimal.h"
#include "LuxScDebugMessage.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxScDebugMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    FLuxScDebugMessage();
};

