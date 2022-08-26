#include "LuxShinEdgeMasterSaveObject.h"

class ULuxShinEdgeMasterSaveObject;
class UTexture2D;

void ULuxShinEdgeMasterSaveObject::UpdatePlayTime(int32 InSaveSlotIndex, int32 InPlaySecondTime) {
}

bool ULuxShinEdgeMasterSaveObject::SubWeapon(int32 InWeaponIndex) {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::SubItem(const FString& inItemId) {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::SubAssistor(const FLuxShinEdgeMasterAssistChara& InSubAssist) {
    return false;
}

void ULuxShinEdgeMasterSaveObject::SetUpdateDateTime(int32 InSaveSlotIndex) {
}

void ULuxShinEdgeMasterSaveObject::SetProfileFactoryId(int32 InEditSaveSlotIndex, int32 InFactoryId) {
}

void ULuxShinEdgeMasterSaveObject::SetPlayerThumbnail(int32 InEditSaveSlotIndex, const FLuxUITextureParam& InThumbnail) {
}

bool ULuxShinEdgeMasterSaveObject::SetPlayerItem(const FString& inItemId) {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::SetItemNum(const FString& inItemId, uint8 inValue) {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::SetEquipWeaponIndex(int32 InWeaponIndex, int32 InSlotIndex) {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::SetEquipAssistor(const FLuxShinEdgeMasterAssistChara& InEquipAssist) {
    return false;
}

void ULuxShinEdgeMasterSaveObject::SetEncountRate(const int32 InEncountRate) {
}

void ULuxShinEdgeMasterSaveObject::SetCurrentSaveSlotIndex(int32 InSaveSlotIndex) {
}

void ULuxShinEdgeMasterSaveObject::SetCurrentSaveSlot(const FLuxShinEdgeMasterSaveSlot& InSaveSlot) {
}

void ULuxShinEdgeMasterSaveObject::SetCaptureImage(int32 InEditSaveSlotIndex, ELuxShinEdgeMasterCaptureImageType inType, const FLuxUITextureParam& InImageParam) {
}

bool ULuxShinEdgeMasterSaveObject::SetAssistorEquipWeapon(int32 InWeaponIndex) {
    return false;
}

void ULuxShinEdgeMasterSaveObject::SetAssistorEquipFoodID(const FString& InFoodID) {
}

void ULuxShinEdgeMasterSaveObject::ResetEncountRate() {
}

void ULuxShinEdgeMasterSaveObject::RemoveEquipAssistor() {
}

bool ULuxShinEdgeMasterSaveObject::RemoveAssistorEquipWeapon() {
    return false;
}

void ULuxShinEdgeMasterSaveObject::RemoveAssistorEquipFoodID() {
}

bool ULuxShinEdgeMasterSaveObject::IsValidSaveSlot(int32 InSaveSlotIndex) const {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::IsShopAllMax() {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::IsRandomMissionAvailable(const FString& inMissionID) {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::IsEquipWeaponSaveSlot(int32 InWeaponIndex, TArray<int32>& EqiopSlotNo) {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::IsEnoughMoneyCurrentSlot(int32 InMoney) {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::IsDefaultWeaponIndex(int32 InWeaponIndex) const {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::IsAssistorEquipWeapon() {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::IsAssistorEquipFood() {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::ImplantWeaponBattleSkillFromWeapon(int32 InBaseWeaponIndex, int32 InMaterialWeaponIndex, const FString& InImplantSkill) {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::ImplantWeaponBattleSkillFromItem(int32 InBaseWeaponIndex, const FString& inItemId) {
    return false;
}

int32 ULuxShinEdgeMasterSaveObject::GetWeaponNum() {
    return 0;
}

bool ULuxShinEdgeMasterSaveObject::GetWeaponList(TArray<int32>& Key, TArray<FUIDataObject>& SEMWeaponList) {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::GetWeapon(int32 InWeaponIndex, FUIDataObject& SEMWeapon) {
    return false;
}

FDateTime ULuxShinEdgeMasterSaveObject::GetUpdateDateTime(int32 InSaveSlotIndex) const {
    return FDateTime{};
}

int32 ULuxShinEdgeMasterSaveObject::GetSubMissionClearCount() {
    return 0;
}

bool ULuxShinEdgeMasterSaveObject::GetSpecificStyleWeaponList(int32 InStyle, TArray<int32>& Key, TArray<FUIDataObject>& SEMWeaponList) {
    return false;
}

FLuxShinEdgeMasterSaveSlot ULuxShinEdgeMasterSaveObject::GetSaveSlot(int32 InSaveSlotIndex) {
    return FLuxShinEdgeMasterSaveSlot{};
}

ULuxShinEdgeMasterSaveObject* ULuxShinEdgeMasterSaveObject::GetSaveObject(ELuxGameSaveObjectAccessType InAccessType) {
    return NULL;
}

FTimespan ULuxShinEdgeMasterSaveObject::GetPlayTimespan(int32 InSaveSlotIndex) const {
    return FTimespan{};
}

ELuxUIPlayerSoulLevel ULuxShinEdgeMasterSaveObject::GetPlayerSoulLevel(int32 InSaveSlotIndex, ELuxUIPlayerSoulCondition InSoulCondition) const {
    return ELuxUIPlayerSoulLevel::Level1;
}

int32 ULuxShinEdgeMasterSaveObject::GetPlayerSoulConditionBonus(int32 InSaveSlotIndex) {
    return 0;
}

ELuxUIPlayerSoulCondition ULuxShinEdgeMasterSaveObject::GetPlayerSoulCondition(int32 InSaveSlotIndex) const {
    return ELuxUIPlayerSoulCondition::Balance;
}

FString ULuxShinEdgeMasterSaveObject::GetPlayerName(int32 InSaveSlotIndex) const {
    return TEXT("");
}

int32 ULuxShinEdgeMasterSaveObject::GetPlayerLevel(int32 InSaveSlotIndex) const {
    return 0;
}

void ULuxShinEdgeMasterSaveObject::GetPlayerItem(FString& outItemId) {
}

int32 ULuxShinEdgeMasterSaveObject::GetNewestUpdateTimeSlotNo() const {
    return 0;
}

int32 ULuxShinEdgeMasterSaveObject::GetMoneyCurrentSlot() {
    return 0;
}

FUIDataObject ULuxShinEdgeMasterSaveObject::GetMissionDataObject(const FString& inMissionID, bool& IsData) {
    return FUIDataObject{};
}

uint8 ULuxShinEdgeMasterSaveObject::GetItemNum(const FString& inItemId) {
    return 0;
}

bool ULuxShinEdgeMasterSaveObject::GetItemListSortName(bool asc_type, TArray<FString>& Key, TArray<FLuxUIGameItemData>& SEMItemList) {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::GetItemList(TArray<FString>& Key, TArray<FLuxUIGameItemData>& SEMItemList) {
    return false;
}

ELuxGender ULuxShinEdgeMasterSaveObject::GetGender(int32 InSaveSlotIndex) const {
    return ELuxGender::ELG_MALE;
}

int32 ULuxShinEdgeMasterSaveObject::GetFreeWeaponNum() {
    return 0;
}

bool ULuxShinEdgeMasterSaveObject::GetExploreItemList(TArray<FString>& Key, TArray<FLuxUIGameItemData>& SEMItemList) {
    return false;
}

int32 ULuxShinEdgeMasterSaveObject::GetEquipWeaponIndex(int32 InSaveSlotIndex) {
    return 0;
}

bool ULuxShinEdgeMasterSaveObject::GetEquipWeapon(FUIDataObject& SEMWeapon) {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::GetEquipAssistor(FLuxShinEdgeMasterAssistChara& InEquipAssist) {
    return false;
}

int32 ULuxShinEdgeMasterSaveObject::GetEncountRate() {
    return 0;
}

int32 ULuxShinEdgeMasterSaveObject::GetDefaultWeaponIndex(const FString& inCharaCode) const {
    return 0;
}

bool ULuxShinEdgeMasterSaveObject::GetDefaultWeapon(const FString& inCharaCode, FUIDataObject& SEMWeapon) {
    return false;
}

ETextGender ULuxShinEdgeMasterSaveObject::GetCurrentTextGender() const {
    return ETextGender::Masculine;
}

int32 ULuxShinEdgeMasterSaveObject::GetCurrentSaveSlotIndex() const {
    return 0;
}

FLuxShinEdgeMasterSaveSlot ULuxShinEdgeMasterSaveObject::GetCurrentSaveSlot() {
    return FLuxShinEdgeMasterSaveSlot{};
}

UTexture2D* ULuxShinEdgeMasterSaveObject::GetCaptureImage(int32 InEditSaveSlotIndex, ELuxShinEdgeMasterCaptureImageType inType) const {
    return NULL;
}

int32 ULuxShinEdgeMasterSaveObject::GetAssistorNum() {
    return 0;
}

FString ULuxShinEdgeMasterSaveObject::GetAssistorFoodID() {
    return TEXT("");
}

int32 ULuxShinEdgeMasterSaveObject::GetAssistorEquipWeaponIndex() {
    return 0;
}

bool ULuxShinEdgeMasterSaveObject::EquipWeaponToDefault(int32 SlotNo) {
    return false;
}

void ULuxShinEdgeMasterSaveObject::DeleteSaveSlot(int32 InSaveSlotIndex) {
}

void ULuxShinEdgeMasterSaveObject::CreateDefaultWeapon() {
}

FString ULuxShinEdgeMasterSaveObject::ConvertUpdateDateTimeToText(const FDateTime& InUpdateDateTime) const {
    return TEXT("");
}

FString ULuxShinEdgeMasterSaveObject::ConvertPlayTimespanToText(const FTimespan& InPlayTimespan) const {
    return TEXT("");
}

FString ULuxShinEdgeMasterSaveObject::ConvertPlayerLevelToText(int32 InPlayerLevel) const {
    return TEXT("");
}

void ULuxShinEdgeMasterSaveObject::ClearPlayerItem() {
}

bool ULuxShinEdgeMasterSaveObject::CheckIsValidWeapons() const {
    return false;
}

bool ULuxShinEdgeMasterSaveObject::CheckIsValidEquipWeapon(TArray<int32>& IsInvalidIndices) {
    return false;
}

int32 ULuxShinEdgeMasterSaveObject::AddWeapon(const FUIDataObject& inWeapon) {
    return 0;
}

void ULuxShinEdgeMasterSaveObject::AddMoneyCurrentSlot(int32 InAddMoney) {
}

bool ULuxShinEdgeMasterSaveObject::AddItem(const FString& inItemId) {
    return false;
}

void ULuxShinEdgeMasterSaveObject::AddDefaultWeapon(const FUIDataObject& inWeapon, const FString& inCharaCode) {
}

bool ULuxShinEdgeMasterSaveObject::AddAssistor(const FString& InAssistId, int32 InAssistIndex) {
    return false;
}

ULuxShinEdgeMasterSaveObject::ULuxShinEdgeMasterSaveObject() {
    this->ShinEdgeMasterSaveSlots.AddDefaulted(9);
    this->CurrentSlotIndex = 0;
    this->DefaultWeaponNum = 0;
}

