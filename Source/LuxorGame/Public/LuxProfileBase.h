#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELuxBodyHeightType.h"
#include "ELuxWeaponVariation.h"
#include "ELuxBodyFrameType.h"
#include "ELuxGender.h"
#include "LuxUIBodySetting.h"
#include "ELuxSoulChargeType.h"
#include "LuxProfileBase.generated.h"

UCLASS(Abstract, Blueprintable)
class LUXORGAME_API ULuxProfileBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Weapon")
    ELuxWeaponVariation WeaponVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character")
    ELuxGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    ELuxBodyHeightType bodyHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    ELuxBodyFrameType bodyFrameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    FLuxUIBodySetting UIBodySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    bool bIgnoreBodySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "VFX")
    ELuxSoulChargeType soulChargeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Weapon|VFX")
    int32 hitEffectPresetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    float BodyWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Voice")
    int32 VoiceBankId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Voice")
    int32 VoicePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Voice")
    int32 VoicePitchShifter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Voice")
    int32 VoiceFormant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Voice")
    int32 VoiceEvilDepth;
    
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character")
    FText DisplayName;
    
public:
    ULuxProfileBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharacterName(bool inEnglish) const;
    
};

