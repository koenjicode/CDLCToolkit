#pragma once
#include "CoreMinimal.h"
#include "LuxProfileData.h"
#include "LuxProfileDataContainer.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxProfileData> unique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxProfileData> arrange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxProfileData> SEM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxProfileData> SEM_NET;
    
    LUXORGAME_API FLuxProfileDataContainer();
};

