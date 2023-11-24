#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProjectileState.generated.h"

/**
 * 
 */

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TOPDOWNAI_API UProjectileState : public UActorComponent
{
	GENERATED_BODY()
public:
	UProjectileState();
	virtual void BeginState();
	virtual void UpdateState(float DeltaTime);
	virtual void EndState();
};
