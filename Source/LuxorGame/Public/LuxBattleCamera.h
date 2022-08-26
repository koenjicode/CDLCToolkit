#pragma once
#include "CoreMinimal.h"
#include "LuxCamera.h"
#include "LuxBattleCamera.generated.h"

class UMaterialInstanceDynamic;
class ULuxPostProcessSettingListDataAsset;
class ULuxBackgroundSpecialSpaceCurve;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleCamera : public ALuxCamera {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MID_Blackout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MID_ColorCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MID_RadialBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MID_Solarisation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MID_Desaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MID_BackgroundSpecialSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxPostProcessSettingListDataAsset* RadialBlurSettingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxPostProcessSettingListDataAsset* SolarisationSettingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxPostProcessSettingListDataAsset* DesaturationSettingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxBackgroundSpecialSpaceCurve* BackgroundSpecialSpaceParamCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* FootShadowParam;
    
public:
    ALuxBattleCamera();
};

