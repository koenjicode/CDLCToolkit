#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIDataObject.h"
#include "LuxPlayerLicense.generated.h"

class UBaseUserWidget;
class UUIMenuWidget;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxPlayerLicense : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLuxLicenseMenuClosed, bool, bSuccessful);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxLicenseMenuClosed OnLuxLicenseWindowClosed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIMenuWidget* mLicenseMenu;
    
public:
    ULuxPlayerLicense();
    UFUNCTION(BlueprintCallable)
    void OpenLicense(UUIMenuWidget* LicenseMenu, const FString& UniqueNetIdStr, const FString& mode);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRequestInputCommandNative(UBaseUserWidget* menuWidget, UBaseUserWidget* TargetWidget, const FString& CommandName, const FUIDataObject& Param, int32 ControllerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseLicense();
    
};

