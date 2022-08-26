#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "OnAppActivationChangedDelegate.h"
#include "LuxGameViewportClient.generated.h"

class UObject;
class UTexture;
class ULuxGameViewportClient;

UCLASS(Blueprintable, NonTransient)
class LUXORGAME_API ULuxGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAppActivationChanged OnAppActivationChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> DbgCdr;
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 DownKeys[2];
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 PressedKeys[2];
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 JustPressedKeys[2];
    
public:
    ULuxGameViewportClient();
    UFUNCTION(BlueprintCallable)
    void SetScreenPercentage(float ScreenPercentage);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void SetDisplayGamma(float newGamma);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundTexture(UTexture* inTexture);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void ResetDisplayGamma();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterForeground();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterBackground();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnterBackground() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScreenPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxGameViewportClient* GetGameViewportClient(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetBackgroundTexture() const;
    
};

