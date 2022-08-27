#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUIDSObjectStoreMode.h"
#include "Kismet/KismetTextLibrary.h"
#include "ImageTagInfo.h"
#include "UObject/NoExportTypes.h"
#include "UMGUtilLibrary.generated.h"

class UUMGUtil;
class UUIDSTransaction;
class UObject;
class UUIDSObjectStore;
class UWorld;
class UTexture2D;
class UWidget;
class UUIDataStorage;
class UUIGameFlowManager;
class UImage;
class UUIEventHub;
class UBaseUserWidget;

UCLASS(Blueprintable)
class UUMGUtilLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUMGUtilLibrary();
    UFUNCTION(BlueprintCallable)
    static UUIDSTransaction* TransactionWithTwoObjectStore(const FString& ObjectStoreName1, const FString& ObjectStoreName2, EUIDSObjectStoreMode mode);
    
    UFUNCTION(BlueprintCallable)
    static UUIDSTransaction* TransactionWithThreeObjectStore(const FString& ObjectStoreName1, const FString& ObjectStoreName2, const FString& ObjectStoreName3, EUIDSObjectStoreMode mode);
    
    UFUNCTION(BlueprintCallable)
    static UUIDSTransaction* Transaction(const FString& objectStoreName, EUIDSObjectStoreMode mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToHex(int32 InNumber, int32 InDigit);
    
    UFUNCTION(BlueprintCallable)
    static UUIDSObjectStore* ObjectStoreFromTransaction(UUIDSTransaction* NewTransaction, const FString& objectStoreName);
    
    UFUNCTION(BlueprintCallable)
    static UUIDSObjectStore* ObjectStore(const FString& objectStoreName, EUIDSObjectStoreMode mode);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadAndCreateBlueprintableObject(UObject* Outer, const FString& AssetPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHex(const FString& InHexString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorld* GetWorldContext();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUMGUtil* GetUMGUtil();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetImageTagResource(const FString& inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetImageTagInfo(const FString& inTag, FImageTagInfo& ImageTagInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetFName(UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetDisplaySize(UWidget* inWidget);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetDisplayPosition(UWidget* inWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUIGameFlowManager* GameFlowManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FromHex(const FString& InHexString);
    
    UFUNCTION(BlueprintCallable)
    static void ForceImageSynchronizeProperties(UImage* InImage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUIEventHub* EventHub();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUIDataStorage* DataStorage();
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext"))
    static void CreateBaseUserWidget(UObject* WorldContext, UBaseUserWidget*& OutBaseUserWidget, TSubclassOf<UBaseUserWidget> BaseUserWidgetClass, int32 ZOrder, bool bActivate, int32 filterPlayerControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ConvertToPluralTextByOrdinal(int32 inValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ConvertTextTag(FText InPattern, FText InCommon1, FText InCommon2, FText InCommon3, FText InCommon4);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ConvertLocalizeTextIdByGender(const FString& InLocalizeTextId, ETextGender InGender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ConvertLocalizeTextId(const FString& InLocalizeTextId, const FString& InDefaultText);
    
};

