#pragma once
#include "CoreMinimal.h"
#include "DMLockableActorInterface.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "DMLockableActorBase.generated.h"

class UArrowComponent;
class UDMLockableComponent;

UCLASS(Blueprintable, Config=Game)
class DMUTILITY_API ADMLockableActorBase : public AActor, public IDMLockableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Replicated, Transient)
    TArray<TWeakObjectPtr<AActor>> Lockers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* CustomRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDMLockableComponent* LockHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLockers;
    
    ADMLockableActorBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector WhereToLookAt_Implementation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLock_Implementation(AActor* inLocker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseLock_Implementation(AActor* inLocker);
    
    UFUNCTION(BlueprintCallable)
    void OnSetLock(AActor* inLocker);
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseLock(AActor* inLocker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsLocked_Implementation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsLockable_Implementation(int32 inTeamNumber);
    
    
    // Fix for true pure virtual functions not being implemented
};

