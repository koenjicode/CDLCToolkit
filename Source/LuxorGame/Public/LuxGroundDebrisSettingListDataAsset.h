#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxGroundDebrisSettingListItem.h"
#include "LuxGroundDebrisSettingListDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxGroundDebrisSettingListDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxGroundDebrisSettingListItem> GDSettingList;
    
    ULuxGroundDebrisSettingListDataAsset();
};

