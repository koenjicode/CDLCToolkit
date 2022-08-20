#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxRace.h"
#include "ELuxGender.h"
#include "LuxProfileDBOriginalProfileTemplateData.generated.h"

class ULuxCreationProfile;

USTRUCT(BlueprintType)
struct FLuxProfileDBOriginalProfileTemplateData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxCreationProfile* Profile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxRace racialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGender genderType;
    
    LUXORGAME_API FLuxProfileDBOriginalProfileTemplateData();
};

