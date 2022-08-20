#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELuxPrivilegeErrorType.h"
#include "LuxUserPrivilegeManager.generated.h"

UCLASS(Blueprintable)
class ULuxUserPrivilegeManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnUcgCheckComplete, ELuxPrivilegeErrorType, Result, const FString&, UserName);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTaskComplete, ELuxPrivilegeErrorType, Result);
    
    ULuxUserPrivilegeManager();
    UFUNCTION(BlueprintCallable)
    void RequestAccountTypeCheck(bool IsRequireUpgradeUI);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnUcgCheckComplete();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnAccountTypeCheckComplete();
    
    UFUNCTION(BlueprintCallable)
    void GetUserContentPrivilege(int32 InUserId, bool InIsCommunicateCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRankedMatchPrivilegeErrorDialog(ELuxPrivilegeErrorType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerMatchPrivilegeErrorDialog(ELuxPrivilegeErrorType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFightRequestPrivilegeErrorDialog(ELuxPrivilegeErrorType inType);
    
    UFUNCTION(BlueprintCallable)
    void AddOnUcgCheckComplete(ULuxUserPrivilegeManager::FOnUcgCheckComplete InOnUcgCheckComplete);
    
    UFUNCTION(BlueprintCallable)
    void AddOnAccountTypeCheckComplete(ULuxUserPrivilegeManager::FOnTaskComplete InOnAccountTypeCheckComplete);
    
};

