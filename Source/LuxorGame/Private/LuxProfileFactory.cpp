#include "LuxProfileFactory.h"

class ULuxCreationProfile;

ULuxCreationProfile* ULuxProfileFactory::shipOut(int32 customResetFlags, bool ignoreRefresh) {
    return NULL;
}

void ULuxProfileFactory::SetCurrentProjectData(const FLuxProfileData& ProfileData) {
}

void ULuxProfileFactory::searchProjectIdsByWithExcludeFightStyles(ELuxProfileDataContainerType _type, ELuxProfileFactoryProjectSearchMenu menu, TArray<int32>& Ids, TArray<ELuxFightStyle> excludeFightStyles, bool excludeParentaledChara, bool excludeBannedChara, bool includeUnknownAuthor) const {
}

void ULuxProfileFactory::searchProjectIdsBy(ELuxProfileDataContainerType _type, ELuxProfileFactoryProjectSearchMenu menu, TArray<int32>& Ids) const {
}

FUIDataObject ULuxProfileFactory::searchFavoriteProjectIdsWithExcludeFightStyles(TArray<ELuxFightStyle> excludeFightStyles, bool uniqueOnly, bool excludeParentaledChara) const {
    return FUIDataObject{};
}

FUIDataObject ULuxProfileFactory::searchFavoriteProjectIds(bool uniqueOnly) const {
    return FUIDataObject{};
}

void ULuxProfileFactory::searchAuthorIdsBy(ELuxProfileDataContainerType _type, ELuxProfileFactoryProjectSearchMenu menu, TArray<FString>& Ids) const {
}

void ULuxProfileFactory::Save() {
}

bool ULuxProfileFactory::kickStartWithPreviousData() {
    return false;
}

void ULuxProfileFactory::kickStartByProject(const FLuxProfileData& ProfileData) {
}

void ULuxProfileFactory::kickStartByProfileData(ELuxProfileDataContainerType _type, int32 _id, const FLuxProfileData& ProfileData) {
}

void ULuxProfileFactory::kickStartByProduct(ULuxCreationProfile* baseProduct) {
}

void ULuxProfileFactory::kickStart(ELuxProfileDataContainerType _type, int32 _id) {
}

bool ULuxProfileFactory::isWorking() const {
    return false;
}

void ULuxProfileFactory::importFromProfileAsset(ULuxCreationProfile* baseProductAsset) {
}

void ULuxProfileFactory::importFromProfile(ULuxCreationProfile* baseProduct) {
}

void ULuxProfileFactory::GetProjectDataById(ELuxProfileDataContainerType _type, int32 _id, FLuxProfileData& ProfileData, bool& success) const {
}

FLuxPersonalityCommentInfo ULuxProfileFactory::getPersonalCommentInfo(const FLuxProfileData& ProfileData, ELuxProfilePersonalityCommentType commentType) {
    return FLuxPersonalityCommentInfo{};
}

void ULuxProfileFactory::GetCurrentProjectData(FLuxProfileData& ProfileData, bool& success) const {
}

FLuxPersonalityCommentInfo ULuxProfileFactory::getCurrentPersonalCommentInfo(ELuxProfilePersonalityCommentType commentType) {
    return FLuxPersonalityCommentInfo{};
}

void ULuxProfileFactory::exportToProfile(ULuxCreationProfile* Profile, const FString& Category) {
}

void ULuxProfileFactory::deleteProjectDataById(ELuxProfileDataContainerType _type, int32 _id) {
}

void ULuxProfileFactory::createRegularProfile(ELuxFightStyle STYLE, ELuxModelColorType Color) {
}

void ULuxProfileFactory::createProfileFromCurrentRacialAndGender() {
}

void ULuxProfileFactory::closeDown() {
}

ULuxProfileFactory::ULuxProfileFactory() {
    this->working = false;
    this->Type = ELuxProfileDataContainerType::Unique;
    this->ID = -1;
    this->product = NULL;
}

