#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxVFxSettingListItem.h"
#include "LuxVFxSettingListDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxVFxSettingListDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxVFxSettingListItem> VFxSettingList;
    
    ULuxVFxSettingListDataAsset();
};

