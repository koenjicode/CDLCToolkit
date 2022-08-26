#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMGUtil -ObjectName=UIDataStructInterface -FallbackName=UIDataStructInterface
#include "ELuxGender.h"
#include "ELuxRace.h"
#include "LuxProfileDBOriginalProfileTemplateData.generated.h"

class ULuxCreationProfile;

USTRUCT(BlueprintType)
struct FLuxProfileDBOriginalProfileTemplateData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<ULuxCreationProfile> Profile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxRace racialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGender genderType;
    
    LUXORGAME_API FLuxProfileDBOriginalProfileTemplateData();
};

