#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DMBlueprintFunctionLibrary.generated.h"

class UDMTickableAction;
class UObject;

UCLASS(Blueprintable)
class DMUTILITY_API UDMBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDMBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToHex(int32 InNumber, int32 InDigit);
    
    UFUNCTION(BlueprintCallable)
    static UDMTickableAction* MakeTickableAction(TSubclassOf<UDMTickableAction> InClass, UObject* InOuter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHex(const FString& InHexString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FromHex(const FString& InHexString);
    
};

