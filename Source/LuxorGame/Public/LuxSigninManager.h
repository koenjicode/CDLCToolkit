#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELuxLoginStateChangeType.h"
#include "ELuxLoginErrorType.h"
#include "LuxSigninManager.generated.h"

UCLASS(Blueprintable)
class ULuxSigninManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnStartUpTaskComplete, bool, bSuccessful);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSigninTaskComplete, bool, bSuccessful);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnLoginTaskComplete, bool, bSuccessful, ELuxLoginErrorType, ErrorType);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginStateChange, ELuxLoginStateChangeType, Type);
    DECLARE_DYNAMIC_DELEGATE(FOnDecideMainUserComplete);
    
    ULuxSigninManager();
    UFUNCTION(BlueprintCallable)
    void RequestStartUpTask();
    
    UFUNCTION(BlueprintCallable)
    void RequestSignin();
    
    UFUNCTION(BlueprintCallable)
    void RequestRefreshProfile();
    
    UFUNCTION(BlueprintCallable)
    void RequestProfileInitailize();
    
    UFUNCTION(BlueprintCallable)
    void RequestLogin(bool IsStartUp, bool IsInterraptFlow);
    
    UFUNCTION(BlueprintCallable)
    void RequestDecideMainUser(int32 ForceDecideUser);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnStartUpComplete();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnSigninComplete();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnLoginStateChange();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnLoginComplete();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnDecideMainUserComplete();
    
    UFUNCTION(BlueprintCallable)
    void AddOnStartUpComplete(ULuxSigninManager::FOnStartUpTaskComplete InOnStartUpComplete);
    
    UFUNCTION(BlueprintCallable)
    void AddOnSigninComplete(ULuxSigninManager::FOnSigninTaskComplete InOnSigninComplete);
    
    UFUNCTION(BlueprintCallable)
    void AddOnLoginStateChange(ULuxSigninManager::FOnLoginStateChange InOnLoginStateChange);
    
    UFUNCTION(BlueprintCallable)
    void AddOnLoginComplete(ULuxSigninManager::FOnLoginTaskComplete InOnLoginComplete);
    
    UFUNCTION(BlueprintCallable)
    void AddOnDecideMainUserComplete(ULuxSigninManager::FOnDecideMainUserComplete InOnDecideMainUserComplete);
    
};

