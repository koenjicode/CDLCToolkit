#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxFollowList.generated.h"

class UUIMenuWidget;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxFollowList : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLuxFollowWindowClosed, bool, bSuccessful);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxFollowWindowClosed OnLuxFollowWindowClosed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIMenuWidget* mFollowMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIMenuWidget* mLicenseMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* mPlayerLicense;
    
public:
    ULuxFollowList();
    UFUNCTION(BlueprintCallable)
    void Open(UUIMenuWidget* menuWidget, UUIMenuWidget* licenseMenuWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnLicenseClosed(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

