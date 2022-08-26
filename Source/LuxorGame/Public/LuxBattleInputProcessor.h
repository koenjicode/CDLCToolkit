#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxBattleInputPairs.h"
#include "LuxBattleInputProcessor.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBattleInputProcessor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLuxBattleInputPairs BindingsLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLuxBattleInputPairs BindingsRight;
    
public:
    ULuxBattleInputProcessor();
    UFUNCTION(BlueprintCallable)
    static void ResetInputBindingsRight();
    
    UFUNCTION(BlueprintCallable)
    static void ResetInputBindingsLeft();
    
    UFUNCTION(BlueprintCallable)
    static void EnableInputProcessor();
    
    UFUNCTION(BlueprintCallable)
    static void DisableInputProcessor();
    
    UFUNCTION(BlueprintCallable)
    static void AddInputBindingsRight(const FLuxBattleInputPairs& inBindings);
    
    UFUNCTION(BlueprintCallable)
    static void AddInputBindingsLeft(const FLuxBattleInputPairs& inBindings);
    
};

