#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObject.h"
#include "ELuxGameSaveObjectAccessType.h"
#include "LuxChronicleSaveObject.generated.h"

class ULuxChronicleSaveObject;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxChronicleSaveObject : public ULuxGameSaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> Unlocks;
    
    ULuxChronicleSaveObject();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxChronicleSaveObject* GetSaveObject(ELuxGameSaveObjectAccessType InAccessType);
    
};

