#include "LuxUIGameUnlock.h"

class ULuxUIGameUnlock;

bool ULuxUIGameUnlock::Unlock(const FString& inUnlockId) {
    return false;
}

bool ULuxUIGameUnlock::SetLock(const FString& inUnlockId, bool inValue) {
    return false;
}

bool ULuxUIGameUnlock::SaveToSaveData() {
    return false;
}

bool ULuxUIGameUnlock::Lock(const FString& inUnlockId) {
    return false;
}

bool ULuxUIGameUnlock::LoadFromSaveData() {
    return false;
}

bool ULuxUIGameUnlock::IsLocked(const FString& inUnlockId) const {
    return false;
}

ULuxUIGameUnlock* ULuxUIGameUnlock::GetGameUnlockProxy() {
    return NULL;
}

ULuxUIGameUnlock::ULuxUIGameUnlock() {
}

