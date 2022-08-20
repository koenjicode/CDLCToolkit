#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELuxWindowModeType.h"
#include "ELuxVSyncType.h"
#include "ELuxGraphicOptionQualityLevel.h"
#include "LuxGraphicSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxGraphicSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint DisplayResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxWindowModeType WindowMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxVSyncType VSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGraphicOptionQualityLevel ScreenQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScalingResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGraphicOptionQualityLevel AntiAliasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGraphicOptionQualityLevel PostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGraphicOptionQualityLevel Shadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGraphicOptionQualityLevel Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGraphicOptionQualityLevel Effect;
    
    FLuxGraphicSetting();
};

