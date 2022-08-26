#include "LuxGameUserSettings.h"

void ULuxGameUserSettings::RunHardwareBenchmark(int32 WorkScale, float CPUMultiplier, float GPUMultiplier) {
}

void ULuxGameUserSettings::ResetToCurrentSettings() {
}

void ULuxGameUserSettings::OnEngineInitialized() {
}

void ULuxGameUserSettings::LuxSetVSyncEnabled(bool bEnable) {
}

void ULuxGameUserSettings::LuxSetVisualEffectQuality(ELuxGraphicOptionQualityLevel Value) {
}

void ULuxGameUserSettings::LuxSetTextureQuality(ELuxGraphicOptionQualityLevel Value) {
}

void ULuxGameUserSettings::LuxSetShadowQuality(ELuxGraphicOptionQualityLevel Value) {
}

void ULuxGameUserSettings::LuxSetResolutionScale(float NewResolutionScale) {
}

void ULuxGameUserSettings::LuxSetPostProcessingQuality(ELuxGraphicOptionQualityLevel Value) {
}

void ULuxGameUserSettings::LuxSetOverallScalabilityLevel(ELuxGraphicOptionQualityLevel OverallScalabilityLevel) {
}

void ULuxGameUserSettings::LuxSetBenchmarkDone(bool bDone) {
}

void ULuxGameUserSettings::LuxSetAntiAliasingQuality(ELuxGraphicOptionQualityLevel Value) {
}

void ULuxGameUserSettings::LuxRequestScreenResolutionChange(int32 InResolutionX, int32 InResolutionY) {
}

void ULuxGameUserSettings::LuxRequestFullscreenModeChange(TEnumAsByte<EWindowMode::Type> InWindowMode) {
}

bool ULuxGameUserSettings::LuxIsVsyingEnabled() const {
    return false;
}

bool ULuxGameUserSettings::LuxIsBenchmarkDone() const {
    return false;
}

int32 ULuxGameUserSettings::LuxGraphicOptionQualityLevel2Int(ELuxGraphicOptionQualityLevel Input) {
    return 0;
}

ELuxGraphicOptionQualityLevel ULuxGameUserSettings::LuxGetVisualEffectQuality() const {
    return ELuxGraphicOptionQualityLevel::ELow;
}

ELuxGraphicOptionQualityLevel ULuxGameUserSettings::LuxGetTextureQuality() const {
    return ELuxGraphicOptionQualityLevel::ELow;
}

ELuxGraphicOptionQualityLevel ULuxGameUserSettings::LuxGetShadowQuality() const {
    return ELuxGraphicOptionQualityLevel::ELow;
}

float ULuxGameUserSettings::LuxGetResolutionScale() const {
    return 0.0f;
}

ELuxGraphicOptionQualityLevel ULuxGameUserSettings::LuxGetPostProcessingQuality() const {
    return ELuxGraphicOptionQualityLevel::ELow;
}

ELuxGraphicOptionQualityLevel ULuxGameUserSettings::LuxGetOverallScalabilityLevel() const {
    return ELuxGraphicOptionQualityLevel::ELow;
}

int32 ULuxGameUserSettings::LuxGetNearestScreenResolutionIndex(TArray<FIntPoint>& InputList) {
    return 0;
}

void ULuxGameUserSettings::LuxGetCurrentScreenModeAvilableScreenResolutions(TArray<FIntPoint>& OutputList) {
}

float ULuxGameUserSettings::LuxGetCurrentlyAppliedResolutionScale() const {
    return 0.0f;
}

ELuxGraphicOptionQualityLevel ULuxGameUserSettings::LuxGetAntiAliasingQuality() const {
    return ELuxGraphicOptionQualityLevel::ELow;
}

void ULuxGameUserSettings::LuxConfirmVideoMode() {
}

ELuxGraphicOptionQualityLevel ULuxGameUserSettings::IntToLuxGraphicOptionQualityLevel(int32 Input) {
    return ELuxGraphicOptionQualityLevel::ELow;
}

void ULuxGameUserSettings::ApplySettings(bool bCheckForCommandLineOverrides) {
}

void ULuxGameUserSettings::ApplyNonResolutionSettings() {
}

void ULuxGameUserSettings::ApplyHardwareBenchmarkResults() {
}

ULuxGameUserSettings::ULuxGameUserSettings() {
    this->bBenchmarkDone = true;
}

