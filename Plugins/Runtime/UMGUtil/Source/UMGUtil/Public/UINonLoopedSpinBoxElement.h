#pragma once
#include "CoreMinimal.h"
#include "UISpinBoxElement.h"
#include "UINonLoopedSpinBoxElement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMGUTIL_API UUINonLoopedSpinBoxElement : public UUISpinBoxElement {
    GENERATED_BODY()
public:
    UUINonLoopedSpinBoxElement();
};

