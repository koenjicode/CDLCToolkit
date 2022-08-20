#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxTraceDataAsset.generated.h"

class ULuxTracePartsDataAssetList;
class ULuxTraceColorPalletDataAsset;
class ULuxTraceInfinityDataAsset;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxTraceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxTracePartsDataAssetList* TracePartsDataAssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxTraceColorPalletDataAsset* TraceColorPalletDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxTraceInfinityDataAsset* TraceInfinityDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawTraceFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawTraceKeyFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawTraceVelocity;
    
    ULuxTraceDataAsset();
};

