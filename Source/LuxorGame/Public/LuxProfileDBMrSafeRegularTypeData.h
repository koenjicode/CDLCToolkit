#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationModelType.h"
#include "UIDataStructInterface.h"
#include "ELuxFightStyle.h"
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
    ULuxCreationProfile* Profile;
    
    LUXORGAME_API FLuxProfileDBMrSafeRegularTypeData();
};

