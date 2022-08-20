#pragma once
#include "CoreMinimal.h"
#include "UIEvent.h"
#include "EUIInputKey.h"
#include "EUIInputType.h"
#include "UIInputEvent.generated.h"

USTRUCT(BlueprintType)
struct UMGUTIL_API FUIInputEvent : public FUIEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIInputKey Key;
    
    FUIInputEvent();
};

