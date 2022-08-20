#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "LuxUIGameUnlock.generated.h"

class ULuxUIGameUnlock;
class ULuxUIGameContent;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIGameUnlock : public UUIObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Identifier;
    
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ULuxUIGameContent> CachedOwner;
    
public:
    ULuxUIGameUnlock();
    UFUNCTION(BlueprintCallable)
    bool Unlock(const FString& inUnlockId);
    
    UFUNCTION(BlueprintCallable)
    bool SetLock(const FString& inUnlockId, bool inValue);
    
    UFUNCTION(BlueprintCallable)
    bool SaveToSaveData();
    
    UFUNCTION(BlueprintCallable)
    bool Lock(const FString& inUnlockId);
    
    UFUNCTION(BlueprintCallable)
    bool LoadFromSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked(const FString& inUnlockId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxUIGameUnlock* GetGameUnlockProxy();
    
};

