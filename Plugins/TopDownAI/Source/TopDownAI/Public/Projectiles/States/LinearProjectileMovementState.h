#pragma once

#include "Math/Vector.h"
#include "CoreMinimal.h"
#include "Projectiles/ProjectileState.h"
#include "LinearProjectileMovementState.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TOPDOWNAI_API ULinearProjectileMovementState : public UProjectileState
{
	GENERATED_BODY()

public:
	ULinearProjectileMovementState();

	virtual void BeginState() override;
	virtual void UpdateState(float DeltaTime) override;
	virtual void EndState() override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float Speed;

	// Set the expiration time for the linear movement state
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time")
	float ExpirationTime;

private:
	FTimerHandle ExpirationTimerHandle;

	FVector FForwardVector;
	// Function to handle collision events
	UFUNCTION()
	void OnCollision(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
};