#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationColorParamType.h"
#include "UIDataStructInterface.h"
#include "ELuxRace.h"
#include "UObject/NoExportTypes.h"
#include "LuxProfileDBRacialColorSetting.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBRacialColorSetting : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxRace racialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<ELuxCreationColorParamType> skin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationColorParamType iris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationColorParamType sclera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor defaultUnderwearColor;
    
    LUXORGAME_API FLuxProfileDBRacialColorSetting();
};

