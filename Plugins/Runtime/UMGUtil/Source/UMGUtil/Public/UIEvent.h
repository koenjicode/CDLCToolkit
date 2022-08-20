#pragma once
#include "CoreMinimal.h"
#include "UIEvent.generated.h"

USTRUCT(BlueprintType)
struct UMGUTIL_API FUIEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventType;
    
    FUIEvent();
};

