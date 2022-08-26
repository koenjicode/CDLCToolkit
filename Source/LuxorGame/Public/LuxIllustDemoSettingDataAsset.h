#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxIllustDemoSettingDataAsset.generated.h"

class UDataTable;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class ULuxIllustDemoSettingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EventInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* SE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* VOICE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> BGMList;
    
    ULuxIllustDemoSettingDataAsset();
};

