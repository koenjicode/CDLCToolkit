#include "LuxTraceComponent.h"

void ULuxTraceComponent::OnVFxFinished(int32 InstanceID) {
}

ULuxTraceComponent::ULuxTraceComponent() {
    this->TraceColorPalletDataAsset = NULL;
    this->TraceDataAsset = NULL;
    this->OwnerActor = NULL;
    this->CharaAttachComponent = NULL;
    this->WeaponAttachComponent = NULL;
}

