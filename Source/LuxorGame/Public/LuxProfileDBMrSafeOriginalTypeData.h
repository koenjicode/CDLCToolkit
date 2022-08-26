#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMGUtil -ObjectName=UIDataStructInterface -FallbackName=UIDataStructInterface
#include "ELuxRace.h"
#include "ELuxGender.h"
#include "LuxProfileDBMrSafeOriginalTypeData.generated.h"

class ULuxCreationProfile;

USTRUCT(BlueprintType)
struct FLuxProfileDBMrSafeOriginalTypeData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxRace racialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGender genderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<ULuxCreationProfile> Profile;
    
    LUXORGAME_API FLuxProfileDBMrSafeOriginalTypeData();
};

