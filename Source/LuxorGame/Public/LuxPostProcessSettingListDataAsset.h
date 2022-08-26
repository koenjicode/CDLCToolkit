#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxPostProcessSettingListItem.h"
#include "LuxPostProcessSettingListDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxPostProcessSettingListDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxPostProcessSettingListItem> PostProcessSettingList;
    
    ULuxPostProcessSettingListDataAsset();
};

