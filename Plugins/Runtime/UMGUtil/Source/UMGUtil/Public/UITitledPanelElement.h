#pragma once
#include "CoreMinimal.h"
#include "UIUserElement.h"
#include "UITitledPanelElement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMGUTIL_API UUITitledPanelElement : public UUIUserElement {
    GENERATED_BODY()
public:
    UUITitledPanelElement();
};

