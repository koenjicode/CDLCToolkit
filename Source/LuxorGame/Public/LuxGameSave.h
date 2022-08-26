#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LuxSaveGameBase.h"
#include "LuxGameSaveAsyncParam.h"
#include "LuxGameSave.generated.h"

class ULuxGameSave;
class ULuxGameSaveObject;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxGameSave : public ULuxSaveGameBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveEvent, int32, EventType);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<FString, ULuxGameSaveObject*> GameSaveObjects;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveEvent OnSaveEvent;
    
    ULuxGameSave();
    UFUNCTION(BlueprintCallable)
    static ULuxGameSaveObject* WriteSaveObject(TSubclassOf<ULuxGameSaveObject> InClass);
    
    UFUNCTION(BlueprintCallable)
    static bool Save();
    
    UFUNCTION(BlueprintCallable)
    static ULuxGameSaveObject* ReadSaveObject(TSubclassOf<ULuxGameSaveObject> InClass);
    
    UFUNCTION(BlueprintCallable)
    static bool Load();
    
    UFUNCTION(BlueprintCallable)
    bool Initialize();
    
    UFUNCTION(BlueprintCallable)
    static ULuxGameSaveObject* GetSaveObject(TSubclassOf<ULuxGameSaveObject> InClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxGameSave* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    bool Finalize();
    
    UFUNCTION(BlueprintCallable)
    static bool Exists();
    
    UFUNCTION(BlueprintCallable)
    static bool CreateSaveObject(ULuxGameSaveObject* InSaveObject);
    
    UFUNCTION(BlueprintCallable)
    bool Clear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CheckInvalidDLC() const;
    
    UFUNCTION(BlueprintCallable)
    static void AsyncSave(FLuxGameSaveAsyncParam InParam);
    
    UFUNCTION(BlueprintCallable)
    static void AsyncLoad(FLuxGameSaveAsyncParam InParam);
    
};

