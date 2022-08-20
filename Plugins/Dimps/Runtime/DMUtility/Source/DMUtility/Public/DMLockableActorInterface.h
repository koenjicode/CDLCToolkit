#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "DMLockableActorInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class DMUTILITY_API UDMLockableActorInterface : public UInterface {
    GENERATED_BODY()
};

class DMUTILITY_API IDMLockableActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector WhereToLookAt();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLock(AActor* inLocker);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReleaseLock(AActor* inLocker);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLockable(int32 inTeamNumber);
    
};

