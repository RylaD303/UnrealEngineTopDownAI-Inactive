
#pragma once

#include "Projectiles/ProjectileState.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
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
	
	UFUNCTION(BlueprintCallable)
	void SetTarget(AActor* OtherActor);

	TWeakObjectPtr<AActor> Target;

private:
	FVector FForwardVector;

	void HandleCollision(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) override;
	
	void HandleTimeout() override;
};