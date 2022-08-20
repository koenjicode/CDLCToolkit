#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxAsyncLoader.generated.h"

class ULuxAssetPathsBase;

UCLASS(Blueprintable, Transient)
class LUXORGAME_API ULuxAsyncLoader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxAssetPathsBase* Origin;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> TempReferences;
    
public:
    ULuxAsyncLoader();
};

