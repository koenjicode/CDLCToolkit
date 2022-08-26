#include "LuxLocalPlayer.h"

bool ULuxLocalPlayer::ShouldOverrideViewportScaling() const {
    return false;
}

void ULuxLocalPlayer::SetViewportScaling(const FVector2D& inOrigin, const FVector2D& InSize) {
}

void ULuxLocalPlayer::GetViewportScaling(FVector2D& inOrigin, FVector2D& InSize) const {
}

void ULuxLocalPlayer::CancelViewportScaling() {
}

ULuxLocalPlayer::ULuxLocalPlayer() {
    this->bOverrideScaling = false;
}

