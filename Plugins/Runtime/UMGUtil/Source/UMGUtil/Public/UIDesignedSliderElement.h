#pragma once
#include "CoreMinimal.h"
#include "UIUserElement.h"
#include "UIDesignedSliderElement.generated.h"

class UUISliderElement;
class UUITextElement;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMGUTIL_API UUIDesignedSliderElement : public UUIUserElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUISliderElement* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUITextElement* valueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUITextElement* LabelText;
    
    UUIDesignedSliderElement();
};

