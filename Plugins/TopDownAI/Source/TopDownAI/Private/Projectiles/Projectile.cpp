
#include "Projectiles/Projectile.h"
#include "Actors/DamageableActor.h"
#include "Components/SphereComponent.h"

// Sets default values
AProjectile::AProjectile()
{
	// Set this actor to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;

	// Create the movement component using CreateDefaultSubobject
	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));

	// Set default values for the movement component
	MovementComponent->InitialSpeed = 10.0f;
	MovementComponent->MaxSpeed = 10.0f;
	MovementComponent->bRotationFollowsVelocity = true;

	// Set default values
	Damage = 10.0;
}

void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	OnActorHit.AddDynamic(this, &AProjectile::OnHit);
}

void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProjectile::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && OtherActor != this)
	{
		ADamageableActor* DamageableActor = Cast<ADamageableActor>(OtherActor);
    	if (DamageableActor)
		{
			//OtherActor->TakeDamage(Damage, FDamageEvent(), nullptr, this);
		}
		
		// Later: alert the ProjectileStateHandler. FIXME!
		Destroy();
	}
}
