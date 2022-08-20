#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "EUIDSObjectStoreMode.h"
#include "UIDataStorageCollectionItem.generated.h"

USTRUCT(BlueprintType)
struct FUIDataStorageCollectionItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference AssetReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIDSObjectStoreMode AllowedTransactionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyPath;
    
    UMGUTIL_API FUIDataStorageCollectionItem();
};

