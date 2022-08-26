#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIObject.h"
#include "UIFsmBehavior.generated.h"

class UUIFsmMachine;
class UObject;
class UUIFsmState;
class UUIFsmBehavior;

UCLASS(Abstract, Blueprintable)
class UMGUTIL_API UUIFsmBehavior : public UUIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIFsmMachine> MachineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUIFsmMachine* Machine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StateElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString StatePhaseCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StatePhaseElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StatePhaseFrame;
    
public:
    UUIFsmBehavior();
    UFUNCTION(BlueprintCallable)
    void SetStateTime(float InStateTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStatePhaseTime(float InStatePhaseTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStatePhaseFrame(int32 InStatePhaseFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetStatePhaseCode(const FString& InStatePhaseCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatePhaseTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatePhaseFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStatePhaseCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStateCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIFsmState* GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPrevStateCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIFsmState* GetPrevState() const;
    
    UFUNCTION(BlueprintCallable)
    static UUIFsmBehavior* Generate(TSubclassOf<UUIFsmBehavior> InBehaviorClass, UObject* InOuter, UObject* InOwner, const FString& InStateCode);
    
    UFUNCTION(BlueprintCallable)
    void Create(UObject* InOwner);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStatePhase(const FString& InStatePhaseCode);
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(const FString& StateCode);
    
};

