#pragma once
#include "CoreMinimal.h"
#include "UIBlueprintableObject.h"
#include "UIDataObject.h"
#include "UIGameDataProxyInterface.generated.h"

UCLASS(Blueprintable)
class UMGUTIL_API UUIGameDataProxyInterface : public UUIBlueprintableObject {
    GENERATED_BODY()
public:
    UUIGameDataProxyInterface();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool nativeSetData(const FString& Key, const FUIDataObject& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool nativeResetData(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool nativeRefreshDataAll(const FString& callbackEventId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool nativeRefreshData(const FString& Key, const FString& callbackEventId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void nativeOnCompleteSetData(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void nativeOnCompleteInitialize(const FString& Guid, const FString& objectStoreName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool nativeIsInitialized(bool& bIsInitialized) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool nativeInitialize(const FString& objectStoreName, bool bSyncProcess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool nativeGetObjectStoreName(FString& objectStoreName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool nativeGetGuid(FString& Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool nativeGetData(const FString& Key, FUIDataObject& Data) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool nativeFinalize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool nativeEnumerateKeys(const FString& Category, TArray<FString>& Keys) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void nateveOnReceiveChangeData(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void nateveOnCompleteRefreshDataAll(const FString& callbackEventId);
    
    UFUNCTION(BlueprintCallable)
    void nateveOnCompleteRefreshData(const FString& callbackEventId, const FString& Key);
    
};

