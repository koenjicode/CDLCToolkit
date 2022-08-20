#pragma once
#include "CoreMinimal.h"
#include "UIDataObject.h"
#include "OnRequestDataSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestDataSignature, FUIDataObject, Data);

