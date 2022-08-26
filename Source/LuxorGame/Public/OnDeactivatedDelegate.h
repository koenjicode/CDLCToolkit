#pragma once
#include "CoreMinimal.h"
#include "OnDeactivatedDelegate.generated.h"

class ULuxGroundDebrisComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeactivated, ULuxGroundDebrisComponent*, GDComponent);

