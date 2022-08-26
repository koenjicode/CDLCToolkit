#pragma once
#include "CoreMinimal.h"
#include "LuxParticleSystemSettingListItem.h"
#include "Engine/DataAsset.h"
#include "LuxParticleSystemSettingListDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxParticleSystemSettingListDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxParticleSystemSettingListItem> PSSettingList;
    
    ULuxParticleSystemSettingListDataAsset();
};

