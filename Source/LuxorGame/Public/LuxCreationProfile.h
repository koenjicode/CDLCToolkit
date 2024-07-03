#pragma once
#include "CoreMinimal.h"
#include "LuxProfileBase.h"
#include "LuxPartCategory.h"
#include "ELuxMuscleType.h"
#include "LuxPartsSticker.h"
#include "ELuxFightStyle.h"
#include "ELuxRace.h"
#include "ELuxPartCategory.h"
#include "LuxBodyScale.h"
#include "LuxCreationSkinColor.h"
#include "LuxPersonalityCommentInfo.h"
#include "CoreUObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "LuxCreationSingleColor.h"
#include "LuxCreationPartsColor.h"
#include "LuxOffsetPartSetting.h"
#include "LuxSlotMeshData.h"
#include "LuxPermanentEffectSetting.h"
#include "LuxTraceColorPalletSetting.h"
#include "ELuxPartSlot.h"
#include "ELuxProfilePersonalityCommentType.h"
#include "LuxStickerSubscene.h"
#include "Materials/MaterialInterface.h"
#include "LuxCreationProfile.generated.h"



UCLASS(Blueprintable)
class LUXORGAME_API ULuxCreationProfile : public ULuxProfileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true),Category = "Character")
    FString characterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true),Category = "Character")
    ELuxFightStyle STYLE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character")
    ELuxRace Race;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true), Category = "Body")
    TArray<FLuxBodyScale> BodyScales;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true), Category = "Body|Skin")
    ELuxMuscleType Muscle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Skin")
    TAssetPtr<UMaterialInterface> SkinReplaceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Skin")
    FString UniqueTexturePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Skin")
    FString UniqueTextureBaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Skin")
    bool bUniqueColorMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Skin|Emission")
    FString EmissionMaskPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Skin|Emission")
    FString EmissionMaskBaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true), Category = "Equipment")
    TArray<FLuxPartCategory> PARTS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Skin|Colors")
    FLuxCreationSkinColor skinColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Skin|Colors")
    FLuxCreationSkinColor SkinEmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Eye|Colors")
    FLuxCreationSingleColor IrisColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Eye|Colors")
    FLuxCreationSingleColor IrisEmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Eye|Colors")
    FLuxCreationSingleColor ScleraColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Eye|Colors")
    FLuxCreationSingleColor ScleraEmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Hair|Colors")
    FLuxCreationSingleColor eyebrowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Hair")
    TAssetPtr<ULuxCreationTextureAsset> EyebrowTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body|Hair|Colors")
    FLuxCreationSingleColor beardColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true), Category = "Equipment|Colors")
    TArray<FLuxCreationPartsColor> partsColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true), Category = "Weapon")
    FLuxCreationPartsColor weaponColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true), Category = "Equipment")
    TArray<FLuxOffsetPartSetting> ExtraPartsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true), Category = "Sticker")
    TArray<FLuxPartsSticker> sticker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "VFX")
    TArray<FLuxPermanentEffectSetting> PermanentEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "VFX")
    TArray<FLuxTraceColorPalletSetting> TraceColorSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Misc")
    bool bDisableCreationTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Sticker")
    TArray<UTexture*> StickerUVTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Sticker")
    TMap<FString, UTexture*> StickerUVTexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Body|Skin")
    TMap<ELuxPartSlot, FStringAssetReference> MuscleColorMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Body|Skin")
    TMap<ELuxPartSlot, FStringAssetReference> MuscleNormalMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Body|Skin")
    TMap<ELuxPartSlot, FStringAssetReference> MuscleSRMAMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Body|Skin")
    TMap<ELuxPartSlot, FStringAssetReference> MuscleMaskMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Body|Skin")
    TMap<ELuxPartSlot, FStringAssetReference> SkinEmissionMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Misc")
    TMap<ELuxProfilePersonalityCommentType, FLuxPersonalityCommentInfo> PersonalityCommentInfoMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Misc")
    bool bRestrictCommentOpenFriendOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Equipment|BreakFlags")
    bool PartsBreakableUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Equipment|BreakFlags")
    bool PartsBreakableMiddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Equipment|BreakFlags")
    bool PartsBreakableLower;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLuxSlotMeshData> slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ELuxPartSlot, ELuxPartCategory> SlotMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULuxStickerSubscene*> Subscenes;
    
public:
    ULuxCreationProfile();
    UFUNCTION(BlueprintCallable)
    void SetDisableCreationTex(bool bDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRenderStickerComplete() const;
    
};

