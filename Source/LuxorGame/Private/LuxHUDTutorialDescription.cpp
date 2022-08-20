#include "LuxHUDTutorialDescription.h"








bool ULuxHUDTutorialDescription::IsMissionCompleted(int32 index) const {
    return false;
}

bool ULuxHUDTutorialDescription::IsExistComplementText() const {
    return false;
}

int32 ULuxHUDTutorialDescription::GetTutorialPartId() const {
    return 0;
}

FString ULuxHUDTutorialDescription::GetTitleText() const {
    return TEXT("");
}

FString ULuxHUDTutorialDescription::GetMissionText(int32 index) const {
    return TEXT("");
}

FString ULuxHUDTutorialDescription::GetMissionProgress(int32 index) const {
    return TEXT("");
}

FString ULuxHUDTutorialDescription::GetExplanationText() const {
    return TEXT("");
}

ULuxHUDTutorialDescription::ULuxHUDTutorialDescription() {
}

