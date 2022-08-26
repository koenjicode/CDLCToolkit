#pragma once
#include "CoreMinimal.h"
#include "UIUserElement.h"
#include "UIPaginatePanelElement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMGUTIL_API UUIPaginatePanelElement : public UUIUserElement {
    GENERATED_BODY()
public:
    UUIPaginatePanelElement();
};

