#include "DMBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UDMTickableAction;
class UObject;

FString UDMBlueprintFunctionLibrary::ToHex(int32 InNumber, int32 InDigit) {
    return TEXT("");
}

UDMTickableAction* UDMBlueprintFunctionLibrary::MakeTickableAction(TSubclassOf<UDMTickableAction> InClass, UObject* InOuter) {
    return NULL;
}

bool UDMBlueprintFunctionLibrary::IsHex(const FString& InHexString) {
    return false;
}

int32 UDMBlueprintFunctionLibrary::FromHex(const FString& InHexString) {
    return 0;
}

UDMBlueprintFunctionLibrary::UDMBlueprintFunctionLibrary() {
}

