#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELuxMenuSoundEventType.h"
#include "ELuxMenuCategoryType.h"
#include "UIDataObject.h"
#include "LuxUISoundEventUtil.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUISoundEventUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxUISoundEventUtil();
    UFUNCTION(BlueprintCallable)
    static bool SendMenuSoundEvent(ELuxMenuCategoryType CategoryType, ELuxMenuSoundEventType Trigger, FUIDataObject Param);
    
};

