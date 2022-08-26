#pragma once
#include "CoreMinimal.h"
#include "Components/Overlay.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "UIOverlay.generated.h"

UCLASS(Blueprintable)
class UMGUTIL_API UUIOverlay : public UOverlay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor ColorAndOpacityDelegate;
    
    UUIOverlay();
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    
};

