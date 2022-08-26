#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UIBlueprintableObject.generated.h"

UCLASS(Abstract, Blueprintable)
class UMGUTIL_API UUIBlueprintableObject : public UUIObject {
    GENERATED_BODY()
public:
    UUIBlueprintableObject();
};

