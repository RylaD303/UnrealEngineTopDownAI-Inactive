
#pragma once

#include "CoreMinimal.h"
#include "ProjectileState.h"
#include "HomingProjectileMovementState.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TOPDOWNAI_API UHomingProjectileMovementState : public UProjectileState
{
	GENERATED_BODY()

public:
	UHomingProjectileState();

	virtual void BeginState() override;
	virtual void UpdateState(float DeltaTime) override;
	virtual void EndState() override;

	// Homing settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float HomingStrength;

	// Lifetime settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time")
	float ExpirationTime;

private:
	FTimerHandle ExpirationTimerHandle;

	TWeakPtr<AActor> Target;

	FVector FForwardVector;
	// Function to handle collision events
	UFUNCTION()
	void OnCollision(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
};