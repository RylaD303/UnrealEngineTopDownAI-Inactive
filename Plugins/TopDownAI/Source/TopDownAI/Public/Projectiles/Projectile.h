

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Projectile.generated.h"


UCLASS()
class TOPDOWNAI_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlap(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(VisibleAnywhere, Category = Movement)
	class UProjectileMovementComponent* MovementComponent;

	UPROPERTY(EditAnywhere)
	double Damage;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
