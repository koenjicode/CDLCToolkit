#pragma once
#include "CoreMinimal.h"
#include "UIUserElement.h"
#include "UINumericSpinboxElement.generated.h"

class UUISliderElement;
class UUITextElement;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMGUTIL_API UUINumericSpinboxElement : public UUIUserElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUISliderElement* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUITextElement* valueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUITextElement* LabelText;
    
    UUINumericSpinboxElement();
};

