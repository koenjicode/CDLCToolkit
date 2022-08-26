#pragma once
#include "CoreMinimal.h"
#include "LuxUIGameUnlockData.generated.h"

USTRUCT(BlueprintType)
struct FLuxUIGameUnlockData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> Values;
    
    LUXORGAME_API FLuxUIGameUnlockData();
};

