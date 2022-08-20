#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnUIAssetLoadCompletedDelegate.h"
#include "LuxUIAssetUtil.generated.h"

class ULuxUIAssetHub;
class UObject;
class ULuxCreationProfile;
class UDataTable;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIAssetUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxUIAssetUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxUIAssetHub* GetUIAssetHub();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetGeneratedClass(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    static ULuxCreationProfile* DuplicateCreationProfile(ULuxCreationProfile* inProfile);
    
    UFUNCTION(BlueprintCallable)
    static UObject* Duplicate(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    static bool DisconnectObjectFromUIAssetHub(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    static bool DisconnectEventFromUIAssetHub(FOnUIAssetLoadCompleted InOnUIAssetLoadCompleted);
    
    UFUNCTION(BlueprintCallable)
    static bool ConnectObjectToUIAssetHub(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    static bool ConnectEventToUIAssetHub(FOnUIAssetLoadCompleted InOnUIAssetLoadCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* CastToDataTable(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* CastToClass(UObject* InObject);
    
};

