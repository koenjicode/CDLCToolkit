#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "DefineTextTagRow.generated.h"

class UUITextTagString;

USTRUCT(BlueprintType)
struct UMGUTIL_API FDefineTextTagRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUITextTagString> UITextTagStringClass;
    
    FDefineTextTagRow();
};

