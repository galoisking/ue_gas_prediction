// Richard Hähne 2019

#include "DontRepBackToOwner.h"

bool ADontRepBackToOwner::IsNetRelevantFor(const AActor * RealViewer, const AActor * ViewTarget, const FVector & SrcLocation) const
{
	Super::IsNetRelevantFor(RealViewer, ViewTarget, SrcLocation);
	return !IsOwnedBy(ViewTarget);
}
