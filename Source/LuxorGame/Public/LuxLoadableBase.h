#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxLoadableBase.generated.h"

class ULuxAsyncLoader;

UCLASS(Abstract, Blueprintable)
class LUXORGAME_API ULuxLoadableBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULuxAsyncLoader*> Loaders;
    
public:
    ULuxLoadableBase();
};

