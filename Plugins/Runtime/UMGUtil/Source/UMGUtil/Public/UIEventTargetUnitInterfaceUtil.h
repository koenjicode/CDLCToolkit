#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UIDataObject.h"
#include "UIEventTargetUnitInterfaceUtil.generated.h"

class UUIEventListener;
class UObject;

UCLASS(Blueprintable)
class UMGUTIL_API UUIEventTargetUnitInterfaceUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIEventTargetUnitInterfaceUtil();
    UFUNCTION(BlueprintCallable)
    static UUIEventListener* ListenEvent(UObject* Target, const FString& Type);
    
    UFUNCTION(BlueprintCallable)
    static bool HasEventTargetUintInterface(UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void DispatchEvent(UObject* Target, const FString& Type, FUIDataObject Param);
    
};

