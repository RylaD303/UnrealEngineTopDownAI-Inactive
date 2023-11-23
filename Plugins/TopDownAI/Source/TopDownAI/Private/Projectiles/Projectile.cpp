

// AProjectile.cpp
#include "DamageableActor.h"
#include "Projectiles/Projectile.h"
#include "Components/SphereComponent.h"

// Sets default values
AProjectile::AProjectile()
{
	// Set this actor to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;

	// Create a sphere component for collision
	USphereComponent* CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	RootComponent = CollisionComponent;
	CollisionComponent->InitSphereRadius(20.0f); // Adjust the radius as needed

	// Create a projectile movement component
	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	MovementComponent->SetUpdatedComponent(CollisionComponent);
	MovementComponent->InitialSpeed = 2000.0f; // Adjust the initial speed as needed
	MovementComponent->MaxSpeed = 2000.0f; // Adjust the max speed as needed
	MovementComponent->bRotationFollowsVelocity = true;
	MovementComponent->bShouldBounce = true;

	Damage = 10.0;
}

void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	OnActorHit.AddDynamic(this, &AProjectile::OnOverlap);
}

void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProjectile::OnOverlap(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && OtherActor != this)
	{
		ADamageableActor* DamageableActor = Cast<ADamageableActor>(OtherActor);
    	if (DamageableActor)
		{
			OtherActor->TakeDamage(Damage, FDamageEvent(), nullptr, this);
		}
		
		// Later: alert the ProjectileStateHandler. FIXME!
		Destroy();
	}
}
