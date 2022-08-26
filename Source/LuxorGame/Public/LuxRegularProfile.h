#pragma once
#include "CoreMinimal.h"
#include "LuxCreationProfile.h"
#include "ELuxCharacter.h"
#include "LuxBreastSwingParam.h"
#include "LuxRegularProfile.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxRegularProfile : public ULuxCreationProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCharacter Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxBreastSwingParam> SwingParams;
    
    ULuxRegularProfile();
};

