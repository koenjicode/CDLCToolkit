#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "GameFramework/GameUserSettings.h"
#include "ELuxGraphicOptionQualityLevel.h"
#include "LuxGameUserSettings.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBenchmarkDone;
    
public:
    ULuxGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void RunHardwareBenchmark(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void ResetToCurrentSettings();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEngineInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void LuxSetVSyncEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void LuxSetVisualEffectQuality(ELuxGraphicOptionQualityLevel Value);
    
    UFUNCTION(BlueprintCallable)
    void LuxSetTextureQuality(ELuxGraphicOptionQualityLevel Value);
    
    UFUNCTION(BlueprintCallable)
    void LuxSetShadowQuality(ELuxGraphicOptionQualityLevel Value);
    
    UFUNCTION(BlueprintCallable)
    void LuxSetResolutionScale(float NewResolutionScale);
    
    UFUNCTION(BlueprintCallable)
    void LuxSetPostProcessingQuality(ELuxGraphicOptionQualityLevel Value);
    
    UFUNCTION(BlueprintCallable)
    void LuxSetOverallScalabilityLevel(ELuxGraphicOptionQualityLevel OverallScalabilityLevel);
    
    UFUNCTION(BlueprintCallable)
    void LuxSetBenchmarkDone(bool bDone);
    
    UFUNCTION(BlueprintCallable)
    void LuxSetAntiAliasingQuality(ELuxGraphicOptionQualityLevel Value);
    
    UFUNCTION(BlueprintCallable)
    void LuxRequestScreenResolutionChange(int32 InResolutionX, int32 InResolutionY);
    
    UFUNCTION(BlueprintCallable)
    void LuxRequestFullscreenModeChange(TEnumAsByte<EWindowMode::Type> InWindowMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LuxIsVsyingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LuxIsBenchmarkDone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LuxGraphicOptionQualityLevel2Int(ELuxGraphicOptionQualityLevel Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxGraphicOptionQualityLevel LuxGetVisualEffectQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxGraphicOptionQualityLevel LuxGetTextureQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxGraphicOptionQualityLevel LuxGetShadowQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float LuxGetResolutionScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxGraphicOptionQualityLevel LuxGetPostProcessingQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxGraphicOptionQualityLevel LuxGetOverallScalabilityLevel() const;
    
    UFUNCTION(BlueprintCallable)
    int32 LuxGetNearestScreenResolutionIndex(TArray<FIntPoint>& InputList);
    
    UFUNCTION(BlueprintCallable)
    void LuxGetCurrentScreenModeAvilableScreenResolutions(TArray<FIntPoint>& OutputList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float LuxGetCurrentlyAppliedResolutionScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxGraphicOptionQualityLevel LuxGetAntiAliasingQuality() const;
    
    UFUNCTION(BlueprintCallable)
    void LuxConfirmVideoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxGraphicOptionQualityLevel IntToLuxGraphicOptionQualityLevel(int32 Input);
    
    UFUNCTION(BlueprintCallable)
    void ApplySettings(bool bCheckForCommandLineOverrides);
    
    UFUNCTION(BlueprintCallable)
    void ApplyNonResolutionSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyHardwareBenchmarkResults();
    
};

