#pragma once
#include "CoreMinimal.h"
#include "LuxUIGameUnlockData.h"
#include "UIObject.h"
#include "LuxUIGameContentCategoryData.h"
#include "UIDataObject.h"
#include "ELuxFightStyle.h"
#include "LuxProfileData.h"
#include "LuxUIGameContent.generated.h"

class ULuxUIGameUnlock;
class ULuxUIGameUnlockShinEdgeMaster;
class ULuxUIGameUnlockChronicleStory;
class UTexture2D;
class ULuxCreationProfile;
class ULuxUIGameContent;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIGameContent : public UUIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUIGameUnlock* GameUnlockProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUIGameUnlockShinEdgeMaster* ShinEdgeMasterProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUIGameUnlockChronicleStory* ChronicleStoryProxy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLuxUIGameUnlockData> Unlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FUIDataObject> Contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLuxUIGameContentCategoryData> ContentCategoryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> StyleUIAssetPtrArrayLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> StyleUIAssetPtrArrayRight;
    
public:
    ULuxUIGameContent();
    UFUNCTION(BlueprintCallable)
    void UpdateLocalDLC(const FString& InCheckDLC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ToggleFavoriteBGMContent(FUIDataObject bgmContentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnknownStageByStageCode(const FString& InStageCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnknownCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUniqueCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTemporaryCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrangerCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSemNewestCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSemCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegularStageByStageCode(const FString& InStageCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegularCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRandomStageByStageCode(const FString& InStageCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRandomCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNpcCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNetworkCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFightStyleAvailable(const ELuxFightStyle& InFightStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFavoriteBGMContent(FUIDataObject bgmContentValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomCharaByCreationProfile(ULuxCreationProfile* InCreationProfile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable(const FString& InContentId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAstralCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssistorCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArrangeCharaByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnomalyStageByStageCode(const FString& InStageCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetWeaponIconByFightStyle(const ELuxFightStyle& InFightStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetWeaponIconAssetPathByFightStyle(const ELuxFightStyle& InFightStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetUniqueCharaIDs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStyleNameByFightStyle(const ELuxFightStyle& InFightStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStyleNameByCreationProfile(ULuxCreationProfile* InCreationProfile) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UTexture2D*> GetStyleIconByFightStyle(int32 side, const ELuxFightStyle& InFightStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTexture2D*> GetStyleIconAssetPathByFightStyle(int32 side, const ELuxFightStyle& InFightStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStagePathByStageCode(const FString& InStageCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStageNameByStageCode(const FString& InStageCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStageLocIdByStageCode(const FString& InStageCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStageIndexByStageCode(const FString& InStageCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetStageIconByStageCode(const FString& InStageCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetStageIconAssetPathByStageCode(const FString& InStageCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetStageCodesIfAvailable(const TArray<FString>& InStageCodes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetStageCodes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStageCodeByStageIndex(const int32& InStageIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetShougouUnlockIdByFightStyle(const ELuxFightStyle& InFightStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSEMDefaultWeaponIDByCharaCode(const FString& inCharaCode, int32 InVariation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSeasonPass2StageBGMIDList() const;
    
    UFUNCTION(BlueprintCallable)
    void GetRandomChara(const TArray<FString>& InExcludeCharaCodes, bool bContainRegularChara, bool bContainUniqueChara, TArray<FString>& CharaCodes, TArray<int32>& CharaColors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProfileDelayLoadFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetProfileDataByCharaCode(const FString& inCharaCode, int32 inIndex, FLuxProfileData& ProfileData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetItemIconAssetPathByItemType(const FString& InItemType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetImageByAssetPath(UTexture2D* ImagePath) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxUIGameContent* GetGlobalInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxFightStyle GetFightStyleByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIDataObject GetFavoriteBGMContents(bool filterByAvailable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetDLC9StageBGMIDList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetDLC5StageBGMIDList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetDLC3StageBGMIDList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetDLC2StageBGMIDList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDefaultWeaponIDByCharaCode(const FString& inCharaCode, int32 InVariation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetDefaultStageBGMIDList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCreationProfilePathByCharaCode(const FString& inCharaCode, int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULuxCreationProfile* GetCreationProfileByCharaCode(const FString& inCharaCode, int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCreationCharaTexture2D(const FString& InTabName, const int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetCreationCharaMaterialInstance(const FString& InTabName, const int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUIDataObject> GetContentValuesByCategories(const TArray<FString>& InCategories, TArray<FUIDataObject>& ContentValues) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetContentValueByContentID(const FString& InContentId, FUIDataObject& ContentValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUIDataObject> GetContentRowsByCategories(const TArray<FString>& InCategories, TArray<FUIDataObject>& ContentRows) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetContentRowByContentID(const FString& InContentId, FUIDataObject& ContentRow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetContentIDsByCategories(const TArray<FString>& InCategories) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharaNameLocalizeTextIdByCharaCode_D(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharaNameLocalizeTextIdByCharaCode(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharaNameByCreationProfile(ULuxCreationProfile* InCreationProfile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharaNameByCharaCode_D(const FString& inCharaCode, int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharaNameByCharaCode(const FString& inCharaCode, int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharaIndexByCharaCode(const FString& inCharaCode, int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCharaImageByCharaCode(const FString& inCharaCode, int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCharaImageAssetPathByCharaCode(const FString& inCharaCode, int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetCharaCodesIfAvailable(const TArray<FString>& InCharaCodes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetCharaCodes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharaCodeByProfileData(const FLuxProfileData& InProfileData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharaCodeByFightStyle(const ELuxFightStyle& InFightStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharaCodeByCharaIndex(const int32& InCharaIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIDataObject GetBGMTitles(bool filterByAvailable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBGMTitleLocIdFromBGMID(int32 bgmId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIDataObject GetBGMContents(const FString& Category, bool filterByAvailable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBGMCategoryFromBGMContentId(const FString& bgmContentId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUIDataObject> GetAvailableContentValuesByCategories(const TArray<FString>& InCategories, TArray<FUIDataObject>& ContentValues) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUIDataObject> GetAvailableContentRowsByCategories(const TArray<FString>& InCategories, TArray<FUIDataObject>& ContentRows) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAvailableContentIDsByCategories(const TArray<FString>& InCategories) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAuthorNameByCharaCode(const FString& inCharaCode, int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetAssistorImageAssetPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetAssistorImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetArrangeCharaIDs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIDataObject FindBGMContentValueFromBGMId(int32 bgmId, bool filterByAvailable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString FindBGMContentIdFromBGMId(int32 bgmId, bool filterByAvailable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainCategories(const FString& InContentId, const TArray<FString>& InCategories) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearStyleIconAsset();
    
};

