#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UIEventTarget.h"
#include "UIEventListenerUnit.h"
#include "UIDSTransactionRequest.generated.h"

UCLASS(Blueprintable)
class UUIDSTransactionRequest : public UUIObject, public IUIEventTarget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIEventListenerUnit> EventListenerMap;
    
public:
    UUIDSTransactionRequest();
    
    // Fix for true pure virtual functions not being implemented
};

