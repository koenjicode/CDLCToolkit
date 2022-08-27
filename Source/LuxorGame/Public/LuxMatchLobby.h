#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxMatchLobby.generated.h"

class UUIMenuWidget;
class UBaseUserWidget;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxMatchLobby : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLuxLobbyLeaved, bool, IsContinue);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxLobbyLeaved OnLuxLobbyLeaved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseUserWidget* mLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIMenuWidget* mBattleMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIMenuWidget* mLicenseMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* mPlayerLicense;
    
public:
    ULuxMatchLobby();
    UFUNCTION(BlueprintCallable)
    void OpenPauseMenu();
    
    UFUNCTION(BlueprintCallable)
    void Open(UBaseUserWidget* Lobby, UUIMenuWidget* BattleMenu, UUIMenuWidget* LicenseMenu);
    
    UFUNCTION(BlueprintCallable)
    void OnLicenseClosed(bool isSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenSubWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenPauseMenu() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseSubWindow();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

