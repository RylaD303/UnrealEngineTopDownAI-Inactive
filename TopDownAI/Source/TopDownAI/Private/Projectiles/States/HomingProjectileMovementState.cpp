#include "Projectiles/States/HomingProjectileMovementState.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/World.h"

UHomingProjectileMovementState::UHomingProjectileMovementState()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UHomingProjectileMovementState::BeginState()
{
	Super::BeginState();

#ifndef NO_DEBUG
	assert(GetOwner() != nullptr);
	UE_LOG(LogTemp, Verbose, TEXT("Owner: %s. Projectile entered HomingProjectileState."), *GetOwner()->GetName());
#endif

	GetWorld()->GetTimerManager().SetTimer(ExpirationTimerHandle, this, &UHomingProjectileMovementState::HandleTimeout, ExpirationTime, false);
}

void UHomingProjectileMovementState::UpdateState(float DeltaTime)
{
	Super::UpdateState(DeltaTime);

#ifndef NO_DEBUG
	assert(GetOwner() != nullptr);
#endif

	if (Target.IsValid() && HomingStrength > 0)
	{
		FVector Direction = (Target->GetActorLocation() - GetOwner()->GetActorLocation()).GetSafeNormal();
		FForwardVector = FMath::Lerp(FForwardVector, Direction, HomingStrength * DeltaTime);
		GetOwner()->SetActorRotation(FForwardVector.Rotation());

		FVector NewLocation = GetOwner()->GetActorLocation() + GetOwner()->GetActorForwardVector() * Speed * DeltaTime;
		GetOwner()->SetActorLocation(NewLocation);
	}
}

void UHomingProjectileMovementState::EndState()
{
	Super::EndState();

#ifndef NO_DEBUG
	assert(GetOwner() != nullptr);
	UE_LOG(LogTemp, Verbose, TEXT("Owner: %s. Projectile ended."), *GetOwner()->GetName());
#endif

	GetWorld()->GetTimerManager().ClearTimer(ExpirationTimerHandle);
}

void UHomingProjectileMovementState::HandleCollision(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
#ifndef NO_DEBUG
	assert(GetOwner() != nullptr);
	UE_LOG(LogTemp, Verbose, TEXT("Owner: %s. Collision detected with: %s."), *GetOwner()->GetName(), *OtherActor->GetName());
#endif

	// End state maybe? FIXME EndState();
}

void UHomingProjectileMovementState::HandleTimeout()
{
	Super::HandleTimeout();

#ifndef NO_DEBUG
	assert(GetOwner() != nullptr);
	UE_LOG(LogTemp, Verbose, TEXT("Owner: %s. Timeout reached."), *GetOwner()->GetName());
#endif
}

void UHomingProjectileMovementState::SetTarget(AActor* OtherActor)
{
	if (OtherActor)
	{
		Target = TWeakObjectPtr<AActor>(OtherActor);

#ifndef NO_DEBUG
		UE_LOG(LogTemp, Verbose, TEXT("Owner: %s. Target set to: %s."), *GetOwner()->GetName(), *OtherActor->GetName());
#endif
	}
	else
	{
#ifndef NO_DEBUG
		UE_LOG(LogTemp, Warning, TEXT("Owner: %s. Attempted to set null target."), *GetOwner()->GetName());
#endif
	}
}
