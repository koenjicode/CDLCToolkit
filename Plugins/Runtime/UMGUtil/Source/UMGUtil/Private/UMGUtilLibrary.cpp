#include "UMGUtilLibrary.h"
#include "Templates/SubclassOf.h"

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

UUIDSTransaction* UUMGUtilLibrary::TransactionWithTwoObjectStore(const FString& ObjectStoreName1, const FString& ObjectStoreName2, EUIDSObjectStoreMode mode) {
    return NULL;
}

UUIDSTransaction* UUMGUtilLibrary::TransactionWithThreeObjectStore(const FString& ObjectStoreName1, const FString& ObjectStoreName2, const FString& ObjectStoreName3, EUIDSObjectStoreMode mode) {
    return NULL;
}

UUIDSTransaction* UUMGUtilLibrary::Transaction(const FString& objectStoreName, EUIDSObjectStoreMode mode) {
    return NULL;
}

FString UUMGUtilLibrary::ToHex(int32 InNumber, int32 InDigit) {
    return TEXT("");
}

UUIDSObjectStore* UUMGUtilLibrary::ObjectStoreFromTransaction(UUIDSTransaction* NewTransaction, const FString& objectStoreName) {
    return NULL;
}

UUIDSObjectStore* UUMGUtilLibrary::ObjectStore(const FString& objectStoreName, EUIDSObjectStoreMode mode) {
    return NULL;
}

UObject* UUMGUtilLibrary::LoadAndCreateBlueprintableObject(UObject* Outer, const FString& AssetPath) {
    return NULL;
}

bool UUMGUtilLibrary::IsHex(const FString& InHexString) {
    return false;
}

UWorld* UUMGUtilLibrary::GetWorldContext() {
    return NULL;
}

UUMGUtil* UUMGUtilLibrary::GetUMGUtil() {
    return NULL;
}

UTexture2D* UUMGUtilLibrary::GetImageTagResource(const FString& inTag) {
    return NULL;
}

bool UUMGUtilLibrary::GetImageTagInfo(const FString& inTag, FImageTagInfo& ImageTagInfo) {
    return false;
}

FName UUMGUtilLibrary::GetFName(UObject* Target) {
    return NAME_None;
}

FVector2D UUMGUtilLibrary::GetDisplaySize(UWidget* inWidget) {
    return FVector2D{};
}

FVector2D UUMGUtilLibrary::GetDisplayPosition(UWidget* inWidget) {
    return FVector2D{};
}

UUIGameFlowManager* UUMGUtilLibrary::GameFlowManager() {
    return NULL;
}

int32 UUMGUtilLibrary::FromHex(const FString& InHexString) {
    return 0;
}

void UUMGUtilLibrary::ForceImageSynchronizeProperties(UImage* InImage) {
}

UUIEventHub* UUMGUtilLibrary::EventHub() {
    return NULL;
}

UUIDataStorage* UUMGUtilLibrary::DataStorage() {
    return NULL;
}

void UUMGUtilLibrary::CreateBaseUserWidget(UObject* WorldContext, UBaseUserWidget*& OutBaseUserWidget, TSubclassOf<UBaseUserWidget> BaseUserWidgetClass, int32 ZOrder, bool bActivate, int32 filterPlayerControllerId) {
}

FText UUMGUtilLibrary::ConvertToPluralTextByOrdinal(int32 inValue) {
    return FText::GetEmpty();
}

FText UUMGUtilLibrary::ConvertTextTag(FText InPattern, FText InCommon1, FText InCommon2, FText InCommon3, FText InCommon4) {
    return FText::GetEmpty();
}

FText UUMGUtilLibrary::ConvertLocalizeTextIdByGender(const FString& InLocalizeTextId, ETextGender InGender) {
    return FText::GetEmpty();
}

FText UUMGUtilLibrary::ConvertLocalizeTextId(const FString& InLocalizeTextId, const FString& InDefaultText) {
    return FText::GetEmpty();
}

UUMGUtilLibrary::UUMGUtilLibrary() {
}

