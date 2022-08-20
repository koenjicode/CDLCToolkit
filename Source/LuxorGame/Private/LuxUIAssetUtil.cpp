#include "LuxUIAssetUtil.h"

class ULuxUIAssetHub;
class UObject;
class ULuxCreationProfile;
class UDataTable;

ULuxUIAssetHub* ULuxUIAssetUtil::GetUIAssetHub() {
    return NULL;
}

UClass* ULuxUIAssetUtil::GetGeneratedClass(UObject* InObject) {
    return NULL;
}

ULuxCreationProfile* ULuxUIAssetUtil::DuplicateCreationProfile(ULuxCreationProfile* inProfile) {
    return NULL;
}

UObject* ULuxUIAssetUtil::Duplicate(UObject* InObject) {
    return NULL;
}

bool ULuxUIAssetUtil::DisconnectObjectFromUIAssetHub(UObject* InObject) {
    return false;
}

bool ULuxUIAssetUtil::DisconnectEventFromUIAssetHub(FOnUIAssetLoadCompleted InOnUIAssetLoadCompleted) {
    return false;
}

bool ULuxUIAssetUtil::ConnectObjectToUIAssetHub(UObject* InObject) {
    return false;
}

bool ULuxUIAssetUtil::ConnectEventToUIAssetHub(FOnUIAssetLoadCompleted InOnUIAssetLoadCompleted) {
    return false;
}

UDataTable* ULuxUIAssetUtil::CastToDataTable(UObject* InObject) {
    return NULL;
}

UClass* ULuxUIAssetUtil::CastToClass(UObject* InObject) {
    return NULL;
}

ULuxUIAssetUtil::ULuxUIAssetUtil() {
}

