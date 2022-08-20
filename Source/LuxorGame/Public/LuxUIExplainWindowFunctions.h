#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuxUIExplainWindowFunctions.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIExplainWindowFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxUIExplainWindowFunctions();
    UFUNCTION(BlueprintCallable)
    static void ShowExplanatoryWindow();
    
    UFUNCTION(BlueprintCallable)
    static void SetExplanatoryTextWithArgs(const FString& SetText, const TArray<FString>& commonArgs);
    
    UFUNCTION(BlueprintCallable)
    static void SetExplanatoryText(const FString& SetText);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllExplainWindow();
    
    UFUNCTION(BlueprintCallable)
    static void HideExplanatoryWindow();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteFrontExplainWindow();
    
    UFUNCTION(BlueprintCallable)
    static void ClearExplanatoryText();
    
    UFUNCTION(BlueprintCallable)
    static void AddNewExplainWindowWithArgs(const FString& firstText, const TArray<FString>& commonArgs);
    
    UFUNCTION(BlueprintCallable)
    static void AddNewExplainWindow(const FString& firstText);
    
};

