#pragma once
#include "CoreMinimal.h"
#include "LuxSkitJumpEvent.generated.h"

USTRUCT(BlueprintType)
struct FLuxSkitJumpEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Next;
    
    LUXORGAME_API FLuxSkitJumpEvent();
};

