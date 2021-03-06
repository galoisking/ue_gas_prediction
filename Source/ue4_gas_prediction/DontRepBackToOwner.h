// Richard Hähne 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DontRepBackToOwner.generated.h"

UCLASS()
class UE4_GAS_PREDICTION_API ADontRepBackToOwner : public AActor
{
	GENERATED_BODY()
	
public:	
	bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation) const override;
};
