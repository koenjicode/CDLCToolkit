#pragma once
#include "CoreMinimal.h"
#include "UIDataObject.h"
#include "UIEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIEventSignature, const FUIDataObject&, EventData);

