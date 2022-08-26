#pragma once
#include "CoreMinimal.h"
#include "UIGameDataObject.h"
#include "OnRequestDataSignatureDelegate.h"
#include "UIRuntimeObjectStoreScript.generated.h"

UCLASS(Blueprintable)
class UMGUTIL_API UUIRuntimeObjectStoreScript : public UUIGameDataObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestDataSignature OnRequestDataEvent;
    
    UUIRuntimeObjectStoreScript();
};

