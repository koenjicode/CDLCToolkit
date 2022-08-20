#pragma once
#include "CoreMinimal.h"
#include "UIUserElement.h"
#include "EUISpinBoxControlType.h"
#include "UIButtonBoxElement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMGUTIL_API UUIButtonBoxElement : public UUIUserElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUISpinBoxControlType controlType;
    
    UUIButtonBoxElement();
};

