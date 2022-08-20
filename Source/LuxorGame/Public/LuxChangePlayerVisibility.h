#pragma once
#include "CoreMinimal.h"
#include "LuxChangePlayerVisibility.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxChangePlayerVisibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCharacterVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWeaponVisible;
    
    FLuxChangePlayerVisibility();
};

