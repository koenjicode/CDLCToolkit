#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UIDataObject.h"
#include "UIProperties.generated.h"

class UUIProperties;

UCLASS(Blueprintable)
class UMGUTIL_API UUIProperties : public UUIObject {
    GENERATED_BODY()
public:
    UUIProperties();
    UFUNCTION(BlueprintCallable)
    UUIProperties* SetProperty(const FString& PropertyName, const FUIDataObject& Property);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReferProperty(const FString& PropertyName, FUIDataObject& Property) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelease();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModifySetProperty(const FString& PropertyName, const FUIDataObject& Property, FUIDataObject& ModifiedProperty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModifyGetProperty(const FString& PropertyName, const FUIDataObject& Property, FUIDataObject& ModifiedProperty);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreated();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPropertiesCreationComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    UUIProperties* Merge(const FUIDataObject& MergeProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifiedPropertiesCreationComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProperty(const FString& PropertyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIProperties* GetProperty(const FString& PropertyName, FUIDataObject& Property);
    
    UFUNCTION(BlueprintCallable)
    UUIProperties* Extends(const FUIDataObject& ExtendsProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIProperties* EnumeratePropertyNames(TArray<FString>& PropertyNames, int32& Count);
    
    UFUNCTION(BlueprintCallable)
    UUIProperties* DefinePropertyString(const FString& PropertyName, const FString& Property);
    
    UFUNCTION(BlueprintCallable)
    UUIProperties* DefinePropertyInt(const FString& PropertyName, int32 Property);
    
    UFUNCTION(BlueprintCallable)
    UUIProperties* DefinePropertyFromDataObject(const FString& PropertyName, const FUIDataObject& Property);
    
    UFUNCTION(BlueprintCallable)
    UUIProperties* DefinePropertyFloat(const FString& PropertyName, float Property);
    
    UFUNCTION(BlueprintCallable)
    UUIProperties* DefinePropertyBoolean(const FString& PropertyName, bool Property);
    
    UFUNCTION(BlueprintCallable)
    UUIProperties* Assign(const FUIDataObject& AssignsProperties);
    
};

