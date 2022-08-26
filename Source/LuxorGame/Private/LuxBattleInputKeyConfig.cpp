#include "LuxBattleInputKeyConfig.h"

void ULuxBattleInputKeyConfig::SetBindings(const FLuxBattleInputPairs& Bindings, ELuxBattleInputDevice inDevice, ELuxBattleInputType inType, bool isSecondaryKey) {
}

FString ULuxBattleInputKeyConfig::SetBindingInput(ELuxBattleInputDevice inDevice, ELuxBattleCombinationKey inCombinationKey, const FKey& inPhysKey, ELuxBattleInputType inType, bool isSecondaryKey) {
    return TEXT("");
}

void ULuxBattleInputKeyConfig::ResetBindings(ELuxBattleInputDevice inDevice, ELuxBattleInputType inType, bool isSecondaryKey) {
}

void ULuxBattleInputKeyConfig::ResetAllBindings() {
}

FString ULuxBattleInputKeyConfig::GetPhysKeyName(ELuxBattleInputDevice device, ELuxBattleCombinationKey combinationKey, ELuxBattleInputType Type, bool isSecondaryKey) {
    return TEXT("");
}

TArray<ELuxBattleCombinationKey> ULuxBattleInputKeyConfig::GetCombinationKeys(bool bKeyboardDevice) {
    return TArray<ELuxBattleCombinationKey>();
}

FString ULuxBattleInputKeyConfig::GetCombinationKeyLabel(ELuxBattleCombinationKey combinationKey) {
    return TEXT("");
}

FLuxBattleInputPairs ULuxBattleInputKeyConfig::GetBindings(ELuxBattleInputDevice inDevice, ELuxBattleInputType inType, bool isSecondaryKey) {
    return FLuxBattleInputPairs{};
}

FString ULuxBattleInputKeyConfig::GetBindingInputState(ELuxBattleInputDevice inDevice, ELuxBattleCombinationKey inKeyCombination, ELuxBattleInputType inType, bool isSecondaryKey) {
    return TEXT("");
}

FLuxBattleInput ULuxBattleInputKeyConfig::GetBindingInput(ELuxBattleInputDevice inDevice, ELuxBattleCombinationKey inKeyCombination, ELuxBattleInputType inType, bool isSecondaryKey) {
    return FLuxBattleInput{};
}

TArray<ELuxBattleKey> ULuxBattleInputKeyConfig::ConvertPhysKeyToBattleKey(ELuxBattleInputDevice inDevice, const FKey& inPhysKey, ELuxBattleInputType inType, bool isSecondaryKey) {
    return TArray<ELuxBattleKey>();
}

void ULuxBattleInputKeyConfig::ApplyToInputProcessor() {
}

ULuxBattleInputKeyConfig::ULuxBattleInputKeyConfig() {
    this->CombinationKeyData.AddDefaulted(18);
}

