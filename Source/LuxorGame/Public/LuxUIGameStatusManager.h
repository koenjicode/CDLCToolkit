#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "ELuxUIGameStatusIconType.h"
#include "LuxUIGameStatusManager.generated.h"

class ULuxUIGameStatusIconInstance;
class ULuxUIGameStatusIconHandle;
class UBaseUserWidget;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIGameStatusManager : public UUIObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ULuxUIGameStatusIconHandle>> LoadingIconHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUIGameStatusIconInstance* LoadingIconInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUIGameStatusIconHandle* SavingIconHandle;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ULuxUIGameStatusIconHandle>> SavingIconHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUIGameStatusIconInstance* SavingIconInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UBaseUserWidget* LoadingIconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UBaseUserWidget* SavingIconWidget;
    
public:
    ULuxUIGameStatusManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnSaveEvent(int32 EventType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible(ELuxUIGameStatusIconType inType) const;
    
    UFUNCTION(BlueprintCallable)
    ULuxUIGameStatusIconHandle* CreateIcon(ELuxUIGameStatusIconType inType);
    
};

