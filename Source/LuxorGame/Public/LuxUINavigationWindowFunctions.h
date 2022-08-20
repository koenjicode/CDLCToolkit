#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuxUINaviTextParam.h"
#include "EUIInputKey.h"
#include "Types/SlateEnums.h"
#include "LuxUINavigationWindowFunctions.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUINavigationWindowFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxUINavigationWindowFunctions();
    UFUNCTION(BlueprintCallable)
    static void UpdateNaviText();
    
    UFUNCTION(BlueprintCallable)
    static void ShowNaviWindow();
    
    UFUNCTION(BlueprintCallable)
    static void SetNaviText(const TArray<FLuxUINaviTextParam> naviList, bool bApply);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentNaviWindowAlignment(TEnumAsByte<EHorizontalAlignment> SetAlignment);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveNaviWindow();
    
    UFUNCTION(BlueprintCallable)
    void RemoveNaviText(EUIInputKey Key, bool bApply);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShownFrontNaviLayer();
    
    UFUNCTION(BlueprintCallable)
    static void HideNaviWindow();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteFrontNaviLayer();
    
    UFUNCTION(BlueprintCallable)
    static void ClearNaviText();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyNaviText();
    
    UFUNCTION(BlueprintCallable)
    static void AddNewNaviLayer(const TArray<FLuxUINaviTextParam>& defaultNaviList, TEnumAsByte<EHorizontalAlignment> SetAlignment);
    
    UFUNCTION(BlueprintCallable)
    void AddNaviText(EUIInputKey Key, const FString& Text, bool bApply);
    
};

