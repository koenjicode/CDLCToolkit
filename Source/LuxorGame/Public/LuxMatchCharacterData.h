#pragma once
#include "CoreMinimal.h"
#include "LuxProfileData.h"
#include "LuxMatchCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FLuxMatchCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileData CreationProfileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IsDecideRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharaCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharaColorIndex;
    
    LUXORGAME_API FLuxMatchCharacterData();
};

