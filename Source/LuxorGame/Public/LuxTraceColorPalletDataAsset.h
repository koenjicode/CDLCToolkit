#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "LuxTraceColorPalletSetting.h"
#include "LuxTraceColorPalletDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxTraceColorPalletDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxTraceColorPalletSetting> ColorPalletSettings;
    
    ULuxTraceColorPalletDataAsset();
};

