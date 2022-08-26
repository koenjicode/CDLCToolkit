#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELuxVoiceLanguage.h"
#include "ELuxVSyncType.h"
#include "LuxGraphicSetting.h"
#include "LuxEBVModeSetting.h"
#include "ELuxWindowModeType.h"
#include "LuxSoundSetting.h"
#include "ELuxEBVModeType.h"
#include "LuxDisplaySetting.h"
#include "ELuxToneQualityType.h"
#include "ELuxGraphicOptionQualityLevel.h"
#include "ELuxSubtitleVisibilityType.h"
#include "ELuxPersonalCommentVisibilityType.h"
#include "UObject/NoExportTypes.h"
#include "ELuxCustomEffectVisibilityType.h"
#include "LuxNetworkSetting.h"
#include "LuxOptionStructsUtil.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxOptionStructsUtil : public UObject {
    GENERATED_BODY()
public:
    ULuxOptionStructsUtil();
    UFUNCTION(BlueprintCallable)
    static void SetWindowMode(UPARAM(Ref) FLuxGraphicSetting& outGraphicSetting, ELuxWindowModeType InWindowMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetVSync(UPARAM(Ref) FLuxGraphicSetting& outGraphicSetting, ELuxVSyncType inVSync);
    
    UFUNCTION(BlueprintCallable)
    static void SetVoiceLanguage(UPARAM(Ref) FLuxSoundSetting& outSoundSetting, ELuxVoiceLanguage inVoiceLanguage);
    
    UFUNCTION(BlueprintCallable)
    static void SetVersus(UPARAM(Ref) FLuxEBVModeSetting& outEBVModeSetting, ELuxEBVModeType inVersus);
    
    UFUNCTION(BlueprintCallable)
    static void SetUpperHUD(UPARAM(Ref) FLuxDisplaySetting& outDisplaySetting, int32 inUpperHUD);
    
    UFUNCTION(BlueprintCallable)
    static void SetTraining(UPARAM(Ref) FLuxEBVModeSetting& outEBVModeSetting, ELuxEBVModeType inTraining);
    
    UFUNCTION(BlueprintCallable)
    static void SetToneQuality(UPARAM(Ref) FLuxSoundSetting& outSoundSetting, ELuxToneQualityType inToneQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetTexture(UPARAM(Ref) FLuxGraphicSetting& outGraphicSetting, ELuxGraphicOptionQualityLevel inTexture);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadow(UPARAM(Ref) FLuxGraphicSetting& outGraphicSetting, ELuxGraphicOptionQualityLevel inShadow);
    
    UFUNCTION(BlueprintCallable)
    static void SetSEVolume(UPARAM(Ref) FLuxSoundSetting& outSoundSetting, int32 inSEVolume);
    
    UFUNCTION(BlueprintCallable)
    static void SetScreenQuality(UPARAM(Ref) FLuxGraphicSetting& outGraphicSetting, ELuxGraphicOptionQualityLevel inScreenQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalingResolution(UPARAM(Ref) FLuxGraphicSetting& outGraphicSetting, int32 inScalingResolution);
    
    UFUNCTION(BlueprintCallable)
    static void SetPostProcess(UPARAM(Ref) FLuxGraphicSetting& outGraphicSetting, ELuxGraphicOptionQualityLevel inPostProcess);
    
    UFUNCTION(BlueprintCallable)
    static void SetPersonalComment(UPARAM(Ref) FLuxDisplaySetting& outDisplaySetting, ELuxPersonalCommentVisibilityType inPersonalComment);
    
    UFUNCTION(BlueprintCallable)
    static void SetNarrationVoiceVolume(UPARAM(Ref) FLuxSoundSetting& outSoundSetting, int32 inNarrationVoiceVolume);
    
    UFUNCTION(BlueprintCallable)
    static void SetEffect(UPARAM(Ref) FLuxGraphicSetting& outGraphicSetting, ELuxGraphicOptionQualityLevel inEffect);
    
    UFUNCTION(BlueprintCallable)
    static void SetEdgeMaster(UPARAM(Ref) FLuxEBVModeSetting& outEBVModeSetting, ELuxEBVModeType inEdgeMaster);
    
    UFUNCTION(BlueprintCallable)
    static void SetDownerHUD(UPARAM(Ref) FLuxDisplaySetting& outDisplaySetting, int32 inDownerHUD);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayResolution(UPARAM(Ref) FLuxGraphicSetting& outGraphicSetting, FIntPoint inDisplayResolution);
    
    UFUNCTION(BlueprintCallable)
    static void SetDemoSubtitle(UPARAM(Ref) FLuxDisplaySetting& outDisplaySetting, ELuxSubtitleVisibilityType inDemoSubtitle);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomEffect(UPARAM(Ref) FLuxDisplaySetting& outDisplaySetting, ELuxCustomEffectVisibilityType inCustomEffect);
    
    UFUNCTION(BlueprintCallable)
    static void SetCreation(UPARAM(Ref) FLuxEBVModeSetting& outEBVModeSetting, ELuxEBVModeType inCreation);
    
    UFUNCTION(BlueprintCallable)
    static void SetChronicleStory(UPARAM(Ref) FLuxEBVModeSetting& outEBVModeSetting, ELuxEBVModeType inChronicleStory);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterVoiceVolume(UPARAM(Ref) FLuxSoundSetting& outSoundSetting, int32 inCharacterVoiceVolume);
    
    UFUNCTION(BlueprintCallable)
    static void SetBrightness(UPARAM(Ref) FLuxDisplaySetting& outDisplaySetting, int32 inBrightness);
    
    UFUNCTION(BlueprintCallable)
    static void SetBGMVolume(UPARAM(Ref) FLuxSoundSetting& outSoundSetting, int32 inBGMVolume);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleSubtitle(UPARAM(Ref) FLuxDisplaySetting& outDisplaySetting, ELuxSubtitleVisibilityType inBattleSubtitle);
    
    UFUNCTION(BlueprintCallable)
    static void SetArcade(UPARAM(Ref) FLuxEBVModeSetting& outEBVModeSetting, ELuxEBVModeType inArcade);
    
    UFUNCTION(BlueprintCallable)
    static void SetAntiAliasing(UPARAM(Ref) FLuxGraphicSetting& outGraphicSetting, ELuxGraphicOptionQualityLevel inAntiAliasing);
    
    UFUNCTION(BlueprintCallable)
    static void SetAgreeKpiFlag(UPARAM(Ref) FLuxNetworkSetting& outNetworkSetting, bool inAgreeKpiFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxWindowModeType GetWindowMode(const FLuxGraphicSetting& inGraphicSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxVSyncType GetVSync(const FLuxGraphicSetting& inGraphicSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxVoiceLanguage GetVoiceLanguage(const FLuxSoundSetting& inSoundSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxEBVModeType GetVersus(const FLuxEBVModeSetting& inEBVModeSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUpperHUD(const FLuxDisplaySetting& inDisplaySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxEBVModeType GetTraining(const FLuxEBVModeSetting& inEBVModeSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxToneQualityType GetToneQuality(const FLuxSoundSetting& inSoundSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxGraphicOptionQualityLevel GetTexture(const FLuxGraphicSetting& inGraphicSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxGraphicOptionQualityLevel GetShadow(const FLuxGraphicSetting& inGraphicSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSEVolume(const FLuxSoundSetting& inSoundSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxGraphicOptionQualityLevel GetScreenQuality(const FLuxGraphicSetting& inGraphicSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetScalingResolution(const FLuxGraphicSetting& inGraphicSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxGraphicOptionQualityLevel GetPostProcess(const FLuxGraphicSetting& inGraphicSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxPersonalCommentVisibilityType GetPersonalComment(const FLuxDisplaySetting& inDisplaySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNarrationVoiceVolume(const FLuxSoundSetting& inSoundSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxGraphicOptionQualityLevel GetEffect(const FLuxGraphicSetting& inGraphicSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxEBVModeType GetEdgeMaster(const FLuxEBVModeSetting& inEBVModeSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDownerHUD(const FLuxDisplaySetting& inDisplaySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint GetDisplayResolution(const FLuxGraphicSetting& inGraphicSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxSubtitleVisibilityType GetDemoSubtitle(const FLuxDisplaySetting& inDisplaySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxCustomEffectVisibilityType GetCustomEffect(const FLuxDisplaySetting& inDisplaySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxEBVModeType GetCreation(const FLuxEBVModeSetting& inEBVModeSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxEBVModeType GetChronicleStory(const FLuxEBVModeSetting& inEBVModeSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharacterVoiceVolume(const FLuxSoundSetting& inSoundSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBrightness(const FLuxDisplaySetting& inDisplaySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBGMVolume(const FLuxSoundSetting& inSoundSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxSubtitleVisibilityType GetBattleSubtitle(const FLuxDisplaySetting& inDisplaySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxEBVModeType GetArcade(const FLuxEBVModeSetting& inEBVModeSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxGraphicOptionQualityLevel GetAntiAliasing(const FLuxGraphicSetting& inGraphicSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAgreeKpiFlag(const FLuxNetworkSetting& inNetworkSetting);
    
};

