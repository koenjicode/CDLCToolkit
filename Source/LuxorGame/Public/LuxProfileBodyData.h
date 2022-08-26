#pragma once
#include "CoreMinimal.h"
#include "LuxProfileBodyVoiceSettingData.h"
#include "LuxProfileSinglePartData.h"
#include "LuxProfileDataSerializable.h"
#include "ELuxRace.h"
#include "ELuxGender.h"
#include "LuxProfileBodyPhysicalData.h"
#include "LuxProfileBodyData.generated.h"

class ULuxCreationTextureAsset;

USTRUCT(BlueprintType)
struct FLuxProfileBodyData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxRace racialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGender genderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileBodyPhysicalData physical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileSinglePartData face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileSinglePartData hair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<ULuxCreationTextureAsset> eyebrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileBodyVoiceSettingData voiceSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileSinglePartData horn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileSinglePartData tail;
    
    LUXORGAME_API FLuxProfileBodyData();
};

