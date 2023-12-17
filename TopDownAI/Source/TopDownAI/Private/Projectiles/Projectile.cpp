
#include "Projectiles/Projectile.h"
#include "Engine/DamageEvents.h"

// Sets default values
AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	MovementComponent->InitialSpeed = 10.0f;
	MovementComponent->MaxSpeed = 10.0f;
	MovementComponent->bRotationFollowsVelocity = true;
	Damage = 10.0;
}

void AProjectile::BeginPlay()
{
	Super::BeginPlay();

#ifndef NO_DEBUG
	assert(GetOwner() != nullptr);
	UE_LOG(LogTemp, Verbose, TEXT("Owner: %s. Projectile entered HomingProjectileState."), *GetOwner()->GetName());
#endif

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
#ifndef NO_DEBUG
		assert(GetOwner() != nullptr);
		UE_LOG(LogTemp, Verbose, TEXT("Owner: %s. Collision detected with: %s."), *GetOwner()->GetName(), *OtherActor->GetName());
#endif

		ADamageableActor* DamageableActor = Cast<ADamageableActor>(OtherActor);
		if (DamageableActor)
		{
			UDamageType* DamageType = UDamageType::StaticClass()->GetDefaultObject<UDamageType>();
			FPointDamageEvent Event(Damage, Hit, NormalImpulse, DamageType->GetClass());
			OtherActor->TakeDamage(Damage, Event, nullptr, this);
		}

		// Later: alert the ProjectileStateHandler. FIXME!
		Destroy();
	}
}