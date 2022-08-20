#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIObject.h"
#include "UIFsmMachine.generated.h"

class UUIFsmState;

UCLASS(Abstract, Blueprintable)
class UMGUTIL_API UUIFsmMachine : public UUIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSubclassOf<UUIFsmState>> StateClasses;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUIFsmState* CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentStateCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUIFsmState* PreviousState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PreviousStateCode;
    
public:
    UUIFsmMachine();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIFsmState* GetPreviousState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIFsmState* GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(const FString& StateCode);
    
};

