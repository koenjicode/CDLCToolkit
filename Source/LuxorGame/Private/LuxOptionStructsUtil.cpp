#include "LuxOptionStructsUtil.h"

void ULuxOptionStructsUtil::SetWindowMode(FLuxGraphicSetting& outGraphicSetting, ELuxWindowModeType InWindowMode) {
}

void ULuxOptionStructsUtil::SetVSync(FLuxGraphicSetting& outGraphicSetting, ELuxVSyncType inVSync) {
}

void ULuxOptionStructsUtil::SetVoiceLanguage(FLuxSoundSetting& outSoundSetting, ELuxVoiceLanguage inVoiceLanguage) {
}

void ULuxOptionStructsUtil::SetVersus(FLuxEBVModeSetting& outEBVModeSetting, ELuxEBVModeType inVersus) {
}

void ULuxOptionStructsUtil::SetUpperHUD(FLuxDisplaySetting& outDisplaySetting, int32 inUpperHUD) {
}

void ULuxOptionStructsUtil::SetTraining(FLuxEBVModeSetting& outEBVModeSetting, ELuxEBVModeType inTraining) {
}

void ULuxOptionStructsUtil::SetToneQuality(FLuxSoundSetting& outSoundSetting, ELuxToneQualityType inToneQuality) {
}

void ULuxOptionStructsUtil::SetTexture(FLuxGraphicSetting& outGraphicSetting, ELuxGraphicOptionQualityLevel inTexture) {
}

void ULuxOptionStructsUtil::SetShadow(FLuxGraphicSetting& outGraphicSetting, ELuxGraphicOptionQualityLevel inShadow) {
}

void ULuxOptionStructsUtil::SetSEVolume(FLuxSoundSetting& outSoundSetting, int32 inSEVolume) {
}

void ULuxOptionStructsUtil::SetScreenQuality(FLuxGraphicSetting& outGraphicSetting, ELuxGraphicOptionQualityLevel inScreenQuality) {
}

void ULuxOptionStructsUtil::SetScalingResolution(FLuxGraphicSetting& outGraphicSetting, int32 inScalingResolution) {
}

void ULuxOptionStructsUtil::SetPostProcess(FLuxGraphicSetting& outGraphicSetting, ELuxGraphicOptionQualityLevel inPostProcess) {
}

void ULuxOptionStructsUtil::SetPersonalComment(FLuxDisplaySetting& outDisplaySetting, ELuxPersonalCommentVisibilityType inPersonalComment) {
}

void ULuxOptionStructsUtil::SetNarrationVoiceVolume(FLuxSoundSetting& outSoundSetting, int32 inNarrationVoiceVolume) {
}

void ULuxOptionStructsUtil::SetEffect(FLuxGraphicSetting& outGraphicSetting, ELuxGraphicOptionQualityLevel inEffect) {
}

void ULuxOptionStructsUtil::SetEdgeMaster(FLuxEBVModeSetting& outEBVModeSetting, ELuxEBVModeType inEdgeMaster) {
}

void ULuxOptionStructsUtil::SetDownerHUD(FLuxDisplaySetting& outDisplaySetting, int32 inDownerHUD) {
}

void ULuxOptionStructsUtil::SetDisplayResolution(FLuxGraphicSetting& outGraphicSetting, FIntPoint inDisplayResolution) {
}

void ULuxOptionStructsUtil::SetDemoSubtitle(FLuxDisplaySetting& outDisplaySetting, ELuxSubtitleVisibilityType inDemoSubtitle) {
}

void ULuxOptionStructsUtil::SetCustomEffect(FLuxDisplaySetting& outDisplaySetting, ELuxCustomEffectVisibilityType inCustomEffect) {
}

void ULuxOptionStructsUtil::SetCreation(FLuxEBVModeSetting& outEBVModeSetting, ELuxEBVModeType inCreation) {
}

void ULuxOptionStructsUtil::SetChronicleStory(FLuxEBVModeSetting& outEBVModeSetting, ELuxEBVModeType inChronicleStory) {
}

void ULuxOptionStructsUtil::SetCharacterVoiceVolume(FLuxSoundSetting& outSoundSetting, int32 inCharacterVoiceVolume) {
}

void ULuxOptionStructsUtil::SetBrightness(FLuxDisplaySetting& outDisplaySetting, int32 inBrightness) {
}

void ULuxOptionStructsUtil::SetBGMVolume(FLuxSoundSetting& outSoundSetting, int32 inBGMVolume) {
}

void ULuxOptionStructsUtil::SetBattleSubtitle(FLuxDisplaySetting& outDisplaySetting, ELuxSubtitleVisibilityType inBattleSubtitle) {
}

void ULuxOptionStructsUtil::SetArcade(FLuxEBVModeSetting& outEBVModeSetting, ELuxEBVModeType inArcade) {
}

void ULuxOptionStructsUtil::SetAntiAliasing(FLuxGraphicSetting& outGraphicSetting, ELuxGraphicOptionQualityLevel inAntiAliasing) {
}

void ULuxOptionStructsUtil::SetAgreeKpiFlag(FLuxNetworkSetting& outNetworkSetting, bool inAgreeKpiFlag) {
}

ELuxWindowModeType ULuxOptionStructsUtil::GetWindowMode(const FLuxGraphicSetting& inGraphicSetting) {
    return ELuxWindowModeType::WINDOW_MODE_FULL_SCREEN;
}

ELuxVSyncType ULuxOptionStructsUtil::GetVSync(const FLuxGraphicSetting& inGraphicSetting) {
    return ELuxVSyncType::V_SYNC_ON;
}

ELuxVoiceLanguage ULuxOptionStructsUtil::GetVoiceLanguage(const FLuxSoundSetting& inSoundSetting) {
    return ELuxVoiceLanguage::ELN_JA;
}

ELuxEBVModeType ULuxOptionStructsUtil::GetVersus(const FLuxEBVModeSetting& inEBVModeSetting) {
    return ELuxEBVModeType::EBV_MODE_OFF;
}

int32 ULuxOptionStructsUtil::GetUpperHUD(const FLuxDisplaySetting& inDisplaySetting) {
    return 0;
}

ELuxEBVModeType ULuxOptionStructsUtil::GetTraining(const FLuxEBVModeSetting& inEBVModeSetting) {
    return ELuxEBVModeType::EBV_MODE_OFF;
}

ELuxToneQualityType ULuxOptionStructsUtil::GetToneQuality(const FLuxSoundSetting& inSoundSetting) {
    return ELuxToneQualityType::TONE_QUALITY_DEFAULT;
}

ELuxGraphicOptionQualityLevel ULuxOptionStructsUtil::GetTexture(const FLuxGraphicSetting& inGraphicSetting) {
    return ELuxGraphicOptionQualityLevel::ELow;
}

ELuxGraphicOptionQualityLevel ULuxOptionStructsUtil::GetShadow(const FLuxGraphicSetting& inGraphicSetting) {
    return ELuxGraphicOptionQualityLevel::ELow;
}

int32 ULuxOptionStructsUtil::GetSEVolume(const FLuxSoundSetting& inSoundSetting) {
    return 0;
}

ELuxGraphicOptionQualityLevel ULuxOptionStructsUtil::GetScreenQuality(const FLuxGraphicSetting& inGraphicSetting) {
    return ELuxGraphicOptionQualityLevel::ELow;
}

int32 ULuxOptionStructsUtil::GetScalingResolution(const FLuxGraphicSetting& inGraphicSetting) {
    return 0;
}

ELuxGraphicOptionQualityLevel ULuxOptionStructsUtil::GetPostProcess(const FLuxGraphicSetting& inGraphicSetting) {
    return ELuxGraphicOptionQualityLevel::ELow;
}

ELuxPersonalCommentVisibilityType ULuxOptionStructsUtil::GetPersonalComment(const FLuxDisplaySetting& inDisplaySetting) {
    return ELuxPersonalCommentVisibilityType::PERSONAL_COMMENT_ON;
}

int32 ULuxOptionStructsUtil::GetNarrationVoiceVolume(const FLuxSoundSetting& inSoundSetting) {
    return 0;
}

ELuxGraphicOptionQualityLevel ULuxOptionStructsUtil::GetEffect(const FLuxGraphicSetting& inGraphicSetting) {
    return ELuxGraphicOptionQualityLevel::ELow;
}

ELuxEBVModeType ULuxOptionStructsUtil::GetEdgeMaster(const FLuxEBVModeSetting& inEBVModeSetting) {
    return ELuxEBVModeType::EBV_MODE_OFF;
}

int32 ULuxOptionStructsUtil::GetDownerHUD(const FLuxDisplaySetting& inDisplaySetting) {
    return 0;
}

FIntPoint ULuxOptionStructsUtil::GetDisplayResolution(const FLuxGraphicSetting& inGraphicSetting) {
    return FIntPoint{};
}

ELuxSubtitleVisibilityType ULuxOptionStructsUtil::GetDemoSubtitle(const FLuxDisplaySetting& inDisplaySetting) {
    return ELuxSubtitleVisibilityType::SUBTITLE_ON;
}

ELuxCustomEffectVisibilityType ULuxOptionStructsUtil::GetCustomEffect(const FLuxDisplaySetting& inDisplaySetting) {
    return ELuxCustomEffectVisibilityType::CUSTOM_EFFECT_ON;
}

ELuxEBVModeType ULuxOptionStructsUtil::GetCreation(const FLuxEBVModeSetting& inEBVModeSetting) {
    return ELuxEBVModeType::EBV_MODE_OFF;
}

ELuxEBVModeType ULuxOptionStructsUtil::GetChronicleStory(const FLuxEBVModeSetting& inEBVModeSetting) {
    return ELuxEBVModeType::EBV_MODE_OFF;
}

int32 ULuxOptionStructsUtil::GetCharacterVoiceVolume(const FLuxSoundSetting& inSoundSetting) {
    return 0;
}

int32 ULuxOptionStructsUtil::GetBrightness(const FLuxDisplaySetting& inDisplaySetting) {
    return 0;
}

int32 ULuxOptionStructsUtil::GetBGMVolume(const FLuxSoundSetting& inSoundSetting) {
    return 0;
}

ELuxSubtitleVisibilityType ULuxOptionStructsUtil::GetBattleSubtitle(const FLuxDisplaySetting& inDisplaySetting) {
    return ELuxSubtitleVisibilityType::SUBTITLE_ON;
}

ELuxEBVModeType ULuxOptionStructsUtil::GetArcade(const FLuxEBVModeSetting& inEBVModeSetting) {
    return ELuxEBVModeType::EBV_MODE_OFF;
}

ELuxGraphicOptionQualityLevel ULuxOptionStructsUtil::GetAntiAliasing(const FLuxGraphicSetting& inGraphicSetting) {
    return ELuxGraphicOptionQualityLevel::ELow;
}

bool ULuxOptionStructsUtil::GetAgreeKpiFlag(const FLuxNetworkSetting& inNetworkSetting) {
    return false;
}

ULuxOptionStructsUtil::ULuxOptionStructsUtil() {
}

