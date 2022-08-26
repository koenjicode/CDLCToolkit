#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoAppearanceType.h"
#include "LuxIllustDemoSubtitleAppearanceEvent.generated.h"

USTRUCT(BlueprintType)
struct FLuxIllustDemoSubtitleAppearanceEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELux2DDemoAppearanceType Appearance;
    
    LUXORGAME_API FLuxIllustDemoSubtitleAppearanceEvent();
};

