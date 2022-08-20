#include "LuxBattleChara.h"
#include "Components/BoxComponent.h"

void ALuxBattleChara::SetWeaponVisibility(bool bVisible) {
}

void ALuxBattleChara::SetWeaponNodeAlpha(const FName& inSlotName, float inAlpha) {
}

void ALuxBattleChara::SetWeaponMaterialVectorValue(const FName& inName, const FLinearColor& inValue) {
}

void ALuxBattleChara::SetWeaponMaterialScalarValue(const FName& inName, float inValue) {
}

void ALuxBattleChara::SetWeaponHighlight(const FLinearColor& slotMask) {
}

void ALuxBattleChara::SetVisibilityForMission(bool bCharaVis, bool bWeaponVis) {
}

void ALuxBattleChara::SetupPlayerChara(int32 inPlayerIndex) {
}

void ALuxBattleChara::SetupExtraParts() {
}

void ALuxBattleChara::SetPartsHighlight(ELuxCreationMaterialType matType, ELuxPartCategory ctg, const FLinearColor& slotMask, bool bEmissionHighlight) {
}

void ALuxBattleChara::SetMaterialChargeRate(float inValue) {
}

void ALuxBattleChara::SetEvilFlag(bool inFlag) {
}

void ALuxBattleChara::SetCharaMaterialVectorValue(const FName& inName, const FLinearColor& inValue) {
}

void ALuxBattleChara::SetCharaMaterialScalarValue(const FName& inName, float inValue) {
}

void ALuxBattleChara::SetCharacterVisibility(bool bVisible) {
}

void ALuxBattleChara::SetBreakFlag(int32 flag) {
}

void ALuxBattleChara::SetBaseTimeDilation(float inTimeDilation) {
}

void ALuxBattleChara::SetAllWeaponNodeAlpha(float inAlpha) {
}

void ALuxBattleChara::ReplaceWeapon(int32 inWeaponID) {
}

void ALuxBattleChara::ReplaceDummyChara(bool bReplace) {
}

void ALuxBattleChara::ReplaceChara(int32 inCharaID) {
}

void ALuxBattleChara::RemovePartsSticker(ELuxPartCategory inCategory) {
}

void ALuxBattleChara::RefreshAppearance() {
}

void ALuxBattleChara::PrepareCustomizedTexture() {
}


bool ALuxBattleChara::IsSetupCompleted() const {
    return false;
}

bool ALuxBattleChara::GetWeaponVisibility() const {
    return false;
}

int32 ALuxBattleChara::GetWeaponID() const {
    return 0;
}

ELuxSoulChargeType ALuxBattleChara::GetSoulChargeType() const {
    return ELuxSoulChargeType::ESC_NORMAL;
}

void ALuxBattleChara::GetSocketTransform(const FName& socket_name, FTransform& Transform) {
}

int32 ALuxBattleChara::GetPlayerIndex() const {
    return 0;
}

bool ALuxBattleChara::GetModelErase() const {
    return false;
}

bool ALuxBattleChara::GetEvilFlag() const {
    return false;
}

bool ALuxBattleChara::GetCombinedCharacterVisibility() const {
    return false;
}

int32 ALuxBattleChara::GetCharaID() const {
    return 0;
}

bool ALuxBattleChara::GetCharacterVisibility() const {
    return false;
}

int32 ALuxBattleChara::GetBreakFlag() const {
    return 0;
}

void ALuxBattleChara::ApplyCreationColor() {
}

ALuxBattleChara::ALuxBattleChara() {
    this->MaegamiL_Pos = 0.00f;
    this->MaegamiR_Pos = 0.00f;
    this->PlayerIndex = -1;
    this->CharaID = -1;
    this->WeaponID = -1;
    this->MaegamiL_SkeletalMeshComponent = NULL;
    this->MaegamiR_SkeletalMeshComponent = NULL;
    this->CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TestCollision"));
    this->BreakFlag = 0;
    this->TraceManager = NULL;
    this->PlayerSetupOverride = NULL;
    this->bDummyPlayer = false;
}

