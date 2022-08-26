#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxTracePartsDataAssetList.generated.h"

class ULuxTracePartsDataAsset;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxTracePartsDataAssetList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULuxTracePartsDataAsset*> PartsDataAssetTable;
    
    ULuxTracePartsDataAssetList();
};

