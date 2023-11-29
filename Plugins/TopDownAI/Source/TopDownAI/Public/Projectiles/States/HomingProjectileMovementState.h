
#pragma once

#include "CoreMinimal.h"
#include "Projectiles/ProjectileState.h"
#include "HomingProjectileMovementState.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TOPDOWNAI_API UHomingProjectileMovementState : public UProjectileState
{
	GENERATED_BODY()

public:
	UHomingProjectileMovementState();

	virtual void BeginState() override;
	virtual void UpdateState(float DeltaTime) override;
	virtual void EndState() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float HomingStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float Speed;

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