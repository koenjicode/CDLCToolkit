#include "UIFsmBehavior.h"
#include "Templates/SubclassOf.h"

class UUIFsmState;
class UUIFsmBehavior;
class UObject;

void UUIFsmBehavior::SetStateTime(float InStateTime) {
}

void UUIFsmBehavior::SetStatePhaseTime(float InStatePhaseTime) {
}

void UUIFsmBehavior::SetStatePhaseFrame(int32 InStatePhaseFrame) {
}

void UUIFsmBehavior::SetStatePhaseCode(const FString& InStatePhaseCode) {
}

float UUIFsmBehavior::GetStateTime() const {
    return 0.0f;
}

float UUIFsmBehavior::GetStatePhaseTime() const {
    return 0.0f;
}

int32 UUIFsmBehavior::GetStatePhaseFrame() const {
    return 0;
}

FString UUIFsmBehavior::GetStatePhaseCode() const {
    return TEXT("");
}

FString UUIFsmBehavior::GetStateCode() const {
    return TEXT("");
}

UUIFsmState* UUIFsmBehavior::GetState() const {
    return NULL;
}

FString UUIFsmBehavior::GetPrevStateCode() const {
    return TEXT("");
}

UUIFsmState* UUIFsmBehavior::GetPrevState() const {
    return NULL;
}

UUIFsmBehavior* UUIFsmBehavior::Generate(TSubclassOf<UUIFsmBehavior> InBehaviorClass, UObject* InOuter, UObject* InOwner, const FString& InStateCode) {
    return NULL;
}

void UUIFsmBehavior::Create(UObject* InOwner) {
}

void UUIFsmBehavior::ChangeStatePhase(const FString& InStatePhaseCode) {
}

void UUIFsmBehavior::ChangeState(const FString& StateCode) {
}

UUIFsmBehavior::UUIFsmBehavior() {
    this->MachineClass = NULL;
    this->Machine = NULL;
    this->Owner = NULL;
    this->StateElapsedTime = 0.00f;
    this->StatePhaseElapsedTime = 0.00f;
    this->StatePhaseFrame = 0;
}

