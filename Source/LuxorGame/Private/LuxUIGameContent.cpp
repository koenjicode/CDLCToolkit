#include "LuxUIGameContent.h"

class UMaterialInstanceDynamic;
class ULuxUIGameContent;
class ULuxCreationProfile;
class UTexture2D;

void ULuxUIGameContent::UpdateLocalDLC(const FString& InCheckDLC) {
}

bool ULuxUIGameContent::ToggleFavoriteBGMContent(FUIDataObject bgmContentValue) {
    return false;
}

bool ULuxUIGameContent::IsUnknownStageByStageCode(const FString& InStageCode) const {
    return false;
}

bool ULuxUIGameContent::IsUnknownCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsUniqueCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsTemporaryCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsStrangerCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsSemNewestCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsSemCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsRegularStageByStageCode(const FString& InStageCode) const {
    return false;
}

bool ULuxUIGameContent::IsRegularCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsRandomStageByStageCode(const FString& InStageCode) const {
    return false;
}

bool ULuxUIGameContent::IsRandomCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsNpcCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsNetworkCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsFightStyleAvailable(const ELuxFightStyle& InFightStyle) const {
    return false;
}

bool ULuxUIGameContent::IsFavoriteBGMContent(FUIDataObject bgmContentValue) const {
    return false;
}

bool ULuxUIGameContent::IsCustomCharaByCreationProfile(ULuxCreationProfile* InCreationProfile) const {
    return false;
}

bool ULuxUIGameContent::IsCustomCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsAvailable(const FString& InContentId) const {
    return false;
}

bool ULuxUIGameContent::IsAstralCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsAssistorCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsArrangeCharaByCharaCode(const FString& inCharaCode) const {
    return false;
}

bool ULuxUIGameContent::IsAnomalyStageByStageCode(const FString& InStageCode) const {
    return false;
}

UTexture2D* ULuxUIGameContent::GetWeaponIconByFightStyle(const ELuxFightStyle& InFightStyle) const {
    return NULL;
}

TAssetPtr<UTexture2D> ULuxUIGameContent::GetWeaponIconAssetPathByFightStyle(const ELuxFightStyle& InFightStyle) const {
    return NULL;
}

TArray<int32> ULuxUIGameContent::GetUniqueCharaIDs() const {
    return TArray<int32>();
}

FString ULuxUIGameContent::GetStyleNameByFightStyle(const ELuxFightStyle& InFightStyle) const {
    return TEXT("");
}

FString ULuxUIGameContent::GetStyleNameByCreationProfile(ULuxCreationProfile* InCreationProfile) const {
    return TEXT("");
}

TArray<UTexture2D*> ULuxUIGameContent::GetStyleIconByFightStyle(int32 side, const ELuxFightStyle& InFightStyle) {
    return TArray<UTexture2D*>();
}

TArray<TAssetPtr<UTexture2D>> ULuxUIGameContent::GetStyleIconAssetPathByFightStyle(int32 side, const ELuxFightStyle& InFightStyle) const {
    return TArray<TAssetPtr<UTexture2D>>();
}

FString ULuxUIGameContent::GetStagePathByStageCode(const FString& InStageCode) const {
    return TEXT("");
}

FString ULuxUIGameContent::GetStageNameByStageCode(const FString& InStageCode) const {
    return TEXT("");
}

FString ULuxUIGameContent::GetStageLocIdByStageCode(const FString& InStageCode) const {
    return TEXT("");
}

int32 ULuxUIGameContent::GetStageIndexByStageCode(const FString& InStageCode) const {
    return 0;
}

UTexture2D* ULuxUIGameContent::GetStageIconByStageCode(const FString& InStageCode) const {
    return NULL;
}

TAssetPtr<UTexture2D> ULuxUIGameContent::GetStageIconAssetPathByStageCode(const FString& InStageCode) const {
    return NULL;
}

TArray<FString> ULuxUIGameContent::GetStageCodesIfAvailable(const TArray<FString>& InStageCodes) const {
    return TArray<FString>();
}

TArray<FString> ULuxUIGameContent::GetStageCodes() const {
    return TArray<FString>();
}

FString ULuxUIGameContent::GetStageCodeByStageIndex(const int32& InStageIndex) const {
    return TEXT("");
}

FString ULuxUIGameContent::GetShougouUnlockIdByFightStyle(const ELuxFightStyle& InFightStyle) const {
    return TEXT("");
}

FString ULuxUIGameContent::GetSEMDefaultWeaponIDByCharaCode(const FString& inCharaCode, int32 InVariation) const {
    return TEXT("");
}

TArray<int32> ULuxUIGameContent::GetSeasonPass2StageBGMIDList() const {
    return TArray<int32>();
}

void ULuxUIGameContent::GetRandomChara(const TArray<FString>& InExcludeCharaCodes, bool bContainRegularChara, bool bContainUniqueChara, TArray<FString>& CharaCodes, TArray<int32>& CharaColors) {
}

int32 ULuxUIGameContent::GetProfileDelayLoadFrame() const {
    return 0;
}

bool ULuxUIGameContent::GetProfileDataByCharaCode(const FString& inCharaCode, int32 inIndex, FLuxProfileData& ProfileData) const {
    return false;
}

TAssetPtr<UTexture2D> ULuxUIGameContent::GetItemIconAssetPathByItemType(const FString& InItemType) const {
    return NULL;
}

UTexture2D* ULuxUIGameContent::GetImageByAssetPath(TAssetPtr<UTexture2D> ImagePath) const {
    return NULL;
}

ULuxUIGameContent* ULuxUIGameContent::GetGlobalInstance() {
    return NULL;
}

ELuxFightStyle ULuxUIGameContent::GetFightStyleByCharaCode(const FString& inCharaCode) const {
    return ELuxFightStyle::EFS_MITSURUGI;
}

FUIDataObject ULuxUIGameContent::GetFavoriteBGMContents(bool filterByAvailable) const {
    return FUIDataObject{};
}

TArray<int32> ULuxUIGameContent::GetDLC9StageBGMIDList() const {
    return TArray<int32>();
}

TArray<int32> ULuxUIGameContent::GetDLC5StageBGMIDList() const {
    return TArray<int32>();
}

TArray<int32> ULuxUIGameContent::GetDLC3StageBGMIDList() const {
    return TArray<int32>();
}

TArray<int32> ULuxUIGameContent::GetDLC2StageBGMIDList() const {
    return TArray<int32>();
}

FString ULuxUIGameContent::GetDefaultWeaponIDByCharaCode(const FString& inCharaCode, int32 InVariation) const {
    return TEXT("");
}

TArray<int32> ULuxUIGameContent::GetDefaultStageBGMIDList() const {
    return TArray<int32>();
}

FString ULuxUIGameContent::GetCreationProfilePathByCharaCode(const FString& inCharaCode, int32 inIndex) const {
    return TEXT("");
}

ULuxCreationProfile* ULuxUIGameContent::GetCreationProfileByCharaCode(const FString& inCharaCode, int32 inIndex) const {
    return NULL;
}

UTexture2D* ULuxUIGameContent::GetCreationCharaTexture2D(const FString& InTabName, const int32 inIndex) const {
    return NULL;
}

UMaterialInstanceDynamic* ULuxUIGameContent::GetCreationCharaMaterialInstance(const FString& InTabName, const int32 inIndex) const {
    return NULL;
}

TArray<FUIDataObject> ULuxUIGameContent::GetContentValuesByCategories(const TArray<FString>& InCategories, TArray<FUIDataObject>& ContentValues) const {
    return TArray<FUIDataObject>();
}

bool ULuxUIGameContent::GetContentValueByContentID(const FString& InContentId, FUIDataObject& ContentValue) const {
    return false;
}

TArray<FUIDataObject> ULuxUIGameContent::GetContentRowsByCategories(const TArray<FString>& InCategories, TArray<FUIDataObject>& ContentRows) const {
    return TArray<FUIDataObject>();
}

bool ULuxUIGameContent::GetContentRowByContentID(const FString& InContentId, FUIDataObject& ContentRow) const {
    return false;
}

TArray<FString> ULuxUIGameContent::GetContentIDsByCategories(const TArray<FString>& InCategories) const {
    return TArray<FString>();
}

FString ULuxUIGameContent::GetCharaNameLocalizeTextIdByCharaCode_D(const FString& inCharaCode) const {
    return TEXT("");
}

FString ULuxUIGameContent::GetCharaNameLocalizeTextIdByCharaCode(const FString& inCharaCode) const {
    return TEXT("");
}

FString ULuxUIGameContent::GetCharaNameByCreationProfile(ULuxCreationProfile* InCreationProfile) const {
    return TEXT("");
}

FString ULuxUIGameContent::GetCharaNameByCharaCode_D(const FString& inCharaCode, int32 inIndex) const {
    return TEXT("");
}

FString ULuxUIGameContent::GetCharaNameByCharaCode(const FString& inCharaCode, int32 inIndex) const {
    return TEXT("");
}

int32 ULuxUIGameContent::GetCharaIndexByCharaCode(const FString& inCharaCode, int32 inIndex) const {
    return 0;
}

UTexture2D* ULuxUIGameContent::GetCharaImageByCharaCode(const FString& inCharaCode, int32 inIndex) const {
    return NULL;
}

TAssetPtr<UTexture2D> ULuxUIGameContent::GetCharaImageAssetPathByCharaCode(const FString& inCharaCode, int32 inIndex) const {
    return NULL;
}

TArray<FString> ULuxUIGameContent::GetCharaCodesIfAvailable(const TArray<FString>& InCharaCodes) const {
    return TArray<FString>();
}

TArray<FString> ULuxUIGameContent::GetCharaCodes() const {
    return TArray<FString>();
}

FString ULuxUIGameContent::GetCharaCodeByProfileData(const FLuxProfileData& InProfileData) const {
    return TEXT("");
}

FString ULuxUIGameContent::GetCharaCodeByFightStyle(const ELuxFightStyle& InFightStyle) const {
    return TEXT("");
}

FString ULuxUIGameContent::GetCharaCodeByCharaIndex(const int32& InCharaIndex) const {
    return TEXT("");
}

FUIDataObject ULuxUIGameContent::GetBGMTitles(bool filterByAvailable) const {
    return FUIDataObject{};
}

FString ULuxUIGameContent::GetBGMTitleLocIdFromBGMID(int32 bgmId) const {
    return TEXT("");
}

FUIDataObject ULuxUIGameContent::GetBGMContents(const FString& Category, bool filterByAvailable) const {
    return FUIDataObject{};
}

FString ULuxUIGameContent::GetBGMCategoryFromBGMContentId(const FString& bgmContentId) const {
    return TEXT("");
}

TArray<FUIDataObject> ULuxUIGameContent::GetAvailableContentValuesByCategories(const TArray<FString>& InCategories, TArray<FUIDataObject>& ContentValues) const {
    return TArray<FUIDataObject>();
}

TArray<FUIDataObject> ULuxUIGameContent::GetAvailableContentRowsByCategories(const TArray<FString>& InCategories, TArray<FUIDataObject>& ContentRows) const {
    return TArray<FUIDataObject>();
}

TArray<FString> ULuxUIGameContent::GetAvailableContentIDsByCategories(const TArray<FString>& InCategories) const {
    return TArray<FString>();
}

FString ULuxUIGameContent::GetAuthorNameByCharaCode(const FString& inCharaCode, int32 inIndex) const {
    return TEXT("");
}

TAssetPtr<UTexture2D> ULuxUIGameContent::GetAssistorImageAssetPath() const {
    return NULL;
}

UTexture2D* ULuxUIGameContent::GetAssistorImage() const {
    return NULL;
}

TArray<int32> ULuxUIGameContent::GetArrangeCharaIDs() const {
    return TArray<int32>();
}

FUIDataObject ULuxUIGameContent::FindBGMContentValueFromBGMId(int32 bgmId, bool filterByAvailable) const {
    return FUIDataObject{};
}

FString ULuxUIGameContent::FindBGMContentIdFromBGMId(int32 bgmId, bool filterByAvailable) const {
    return TEXT("");
}

bool ULuxUIGameContent::ContainCategories(const FString& InContentId, const TArray<FString>& InCategories) const {
    return false;
}

void ULuxUIGameContent::ClearStyleIconAsset() {
}

ULuxUIGameContent::ULuxUIGameContent() {
    this->GameUnlockProxy = NULL;
    this->ShinEdgeMasterProxy = NULL;
    this->ChronicleStoryProxy = NULL;
}

