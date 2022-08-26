#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuxUIPadAssignmentDelegate.h"
#include "LuxUIPadAssignmentUtil.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIPadAssignmentUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxUIPadAssignmentUtil();
    UFUNCTION(BlueprintCallable)
    static void StartAssign(int32 PlayerIndex, FLuxUIPadAssignmentDelegate onCompletedDelegate, bool needUgcLimitCheck);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisconnectEventRegistration(bool registration);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAssign();
    
    UFUNCTION(BlueprintCallable)
    static void CancelAssign(int32 PlayerIndex);
    
};

