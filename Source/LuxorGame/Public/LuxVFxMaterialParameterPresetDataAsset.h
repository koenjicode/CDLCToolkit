#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxVFxMaterialParamsInfo.h"
#include "LuxVFxMaterialParameterPresetDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxVFxMaterialParameterPresetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxVFxMaterialParamsInfo> MaterialParamsPresetInfoList;
    
    ULuxVFxMaterialParameterPresetDataAsset();
};

