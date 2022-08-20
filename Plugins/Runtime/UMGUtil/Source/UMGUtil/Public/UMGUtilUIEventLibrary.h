#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UIDataObject.h"
#include "EUIInputKey.h"
#include "UIInputEvent.h"
#include "UMGUtilUIEventLibrary.generated.h"

UCLASS(Blueprintable)
class UUMGUtilUIEventLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUMGUtilUIEventLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUIInputKey GetDecideKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUIInputKey GetCancelKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateUIEvent(const FString& EventType, FUIDataObject& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CreateInputEventFromObjectData(const FUIDataObject& EventData, FUIInputEvent& InputEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateDataObjectFromInputEvent(FUIDataObject& EventData, const FUIInputEvent& InputEvent);
    
    UFUNCTION(BlueprintCallable)
    static void BreakTransactionRequestEvent(const FUIDataObject& EventData, FString& EventType, FUIDataObject& Result, bool& isError, FUIDataObject& errorReason);
    
};

