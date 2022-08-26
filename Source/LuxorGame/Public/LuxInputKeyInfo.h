#pragma once
#include "CoreMinimal.h"
#include "ELuxKeyState.h"
#include "LuxInputKeyInfo.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxInputKeyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxKeyState> Button;
    
    FLuxInputKeyInfo();
};

