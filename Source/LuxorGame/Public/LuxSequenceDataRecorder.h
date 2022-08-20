#pragma once
#include "CoreMinimal.h"
#include "LuxSequenceDataRecorder.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxSequenceDataRecorder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint32 EncodedSize;
    
    UPROPERTY(EditAnywhere)
    uint32 RecordedTime;
    
    UPROPERTY(EditAnywhere)
    uint32 RecordableTime;
    
public:
    FLuxSequenceDataRecorder();
};

