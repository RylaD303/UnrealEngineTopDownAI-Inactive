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

	// Set the expiration time for the linear movement state
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LinearProjectileMovementState")
	float ExpirationTime;

private:
	FTimerHandle ExpirationTimerHandle;

	float Speed;
	FVector FForwardVector;
	// Function to handle collision events
	UFUNCTION()
	void OnCollision();
};