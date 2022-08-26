#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxVoiceType.h"
#include "ELuxGender.h"
#include "LuxProfileDBVoiceTypeData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBVoiceTypeData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxVoiceType VoiceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGender genderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locNameTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dlcId;
    
    LUXORGAME_API FLuxProfileDBVoiceTypeData();
};

