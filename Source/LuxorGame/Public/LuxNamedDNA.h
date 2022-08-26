#pragma once
#include "CoreMinimal.h"
#include "LuxBattleDNA.h"
#include "LuxNamedDNA.generated.h"

USTRUCT(BlueprintType)
struct FLuxNamedDNA : public FLuxBattleDNA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    LUXORGAME_API FLuxNamedDNA();
};

