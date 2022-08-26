#pragma once
#include "CoreMinimal.h"
#include "UIUserElement.h"
#include "UIDesignedPanelElement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMGUTIL_API UUIDesignedPanelElement : public UUIUserElement {
    GENERATED_BODY()
public:
    UUIDesignedPanelElement();
};

