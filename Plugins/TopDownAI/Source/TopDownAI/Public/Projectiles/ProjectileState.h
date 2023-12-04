#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProjectileState.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndStateAlert);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TOPDOWNAI_API UProjectileState : public UActorComponent
{
	GENERATED_BODY()

public:
	UProjectileState();
	virtual void BeginState();
	virtual void UpdateState(float DeltaTime);
	virtual void EndState();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time")
	float ExpirationTime;

	UFUNCTION()
	virtual void HandleCollision(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
	
	UFUNCTION()
	virtual void HandleTimeout();

    UPROPERTY()
	FEndStateAlert OnStateEnded;

	FTimerHandle ExpirationTimerHandle;
};
