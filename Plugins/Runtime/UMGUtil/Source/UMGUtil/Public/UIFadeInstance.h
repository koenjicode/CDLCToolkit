#pragma once
#include "CoreMinimal.h"
#include "UIFadeInstance.generated.h"

class UBaseUserWidget;
class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FUIFadeInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseUserWidget* FadeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimInstance;
    
    UMGUTIL_API FUIFadeInstance();
};

