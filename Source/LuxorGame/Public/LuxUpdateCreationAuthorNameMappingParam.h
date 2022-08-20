#pragma once
#include "CoreMinimal.h"
#include "OnUpdateCreationAuthorNameMappingCompletedDelegate.h"
#include "ELuxProfileDataContainerType.h"
#include "LuxUpdateCreationAuthorNameMappingParam.generated.h"

USTRUCT(BlueprintType)
struct FLuxUpdateCreationAuthorNameMappingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxProfileDataContainerType UpdateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UpdateIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateCreationAuthorNameMappingCompleted OnUpdateCreationAuthorNameMappingCompleted;
    
    LUXORGAME_API FLuxUpdateCreationAuthorNameMappingParam();
};

