#pragma once
#include "CoreMinimal.h"
#include "UIEventListenerUnit.generated.h"

class UUIEventListener;

USTRUCT(BlueprintType)
struct UMGUTIL_API FUIEventListenerUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIEventListener* EventListener;
    
    FUIEventListenerUnit();
};

