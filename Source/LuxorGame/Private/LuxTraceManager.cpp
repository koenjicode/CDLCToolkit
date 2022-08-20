#include "LuxTraceManager.h"

class AActor;
class USceneComponent;

void ALuxTraceManager::Stop() {
}

void ALuxTraceManager::SetVisibility(int32 InAttachIndex, bool bVisibility) {
}

void ALuxTraceManager::Setup(int32 InAttachIndex, AActor* InAttachActor, USceneComponent* InAttachComponent, int32 PlayerIndex) {
}

void ALuxTraceManager::SetElapsedTime(float InElapsedTime, float InElapsedTimeWithStop) {
}

void ALuxTraceManager::Inactive(const FTraceInactiveParam& Param) {
}

bool ALuxTraceManager::GetTracePosition(ELuxTracePartsId InTracePartsId, int32 inPlayerIndex, FVector& TipPosition, FVector& HiltPosition) const {
    return false;
}

void ALuxTraceManager::DestroyTraceComponent() {
}

void ALuxTraceManager::Active(const FTraceActiveParam& Param) {
}

ALuxTraceManager::ALuxTraceManager() {
    this->TraceDataAsset = NULL;
    this->CreationProfile = NULL;
    this->CharaAttachComponent = NULL;
    this->WeaponAttachComponent = NULL;
    this->TraceComponent = NULL;
}

