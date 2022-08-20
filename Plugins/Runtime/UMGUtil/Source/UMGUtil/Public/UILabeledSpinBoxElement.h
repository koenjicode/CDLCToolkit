#pragma once
#include "CoreMinimal.h"
#include "UISpinBoxElement.h"
#include "UILabeledSpinBoxElement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMGUTIL_API UUILabeledSpinBoxElement : public UUISpinBoxElement {
    GENERATED_BODY()
public:
    UUILabeledSpinBoxElement();
};

