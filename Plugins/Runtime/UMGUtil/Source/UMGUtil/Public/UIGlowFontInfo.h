#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "UIGlowFontInfo.generated.h"

USTRUCT(BlueprintType)
struct UMGUTIL_API FUIGlowFontInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Diffusion;
    
    FUIGlowFontInfo();
};

