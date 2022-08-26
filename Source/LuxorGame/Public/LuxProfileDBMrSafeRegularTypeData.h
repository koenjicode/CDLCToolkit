#pragma once
#include "CoreMinimal.h"
#include "ELuxFightStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMGUtil -ObjectName=UIDataStructInterface -FallbackName=UIDataStructInterface
#include "ELuxCreationModelType.h"
#include "LuxProfileDBMrSafeRegularTypeData.generated.h"

class ULuxCreationProfile;

USTRUCT(BlueprintType)
struct FLuxProfileDBMrSafeRegularTypeData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxFightStyle STYLE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationModelType Model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<ULuxCreationProfile> Profile;
    
    LUXORGAME_API FLuxProfileDBMrSafeRegularTypeData();
};

