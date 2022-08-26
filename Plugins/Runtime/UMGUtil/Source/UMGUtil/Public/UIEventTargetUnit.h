#pragma once
#include "CoreMinimal.h"
#include "UIEventTargetUnit.generated.h"

class UUIEventTargetUnitObject;

USTRUCT(BlueprintType)
struct UMGUTIL_API FUIEventTargetUnit {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUIEventTargetUnitObject* targetUnit;
    
public:
    FUIEventTargetUnit();
};

