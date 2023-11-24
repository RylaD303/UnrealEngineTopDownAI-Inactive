#include "Projectiles/States/LinearProjectileMovementState.h"

#define NO_DEBUG

ULinearProjectileMovementState::ULinearProjectileMovementState()
{
	ExpirationTime = 5.0f; // seconds
}

void ULinearProjectileMovementState::BeginState()
{
	Super::BeginState();

#ifndef NO_DEBUG
	assert(GetOwner() != NULL);
	UE_LOG(LogTemp, Verbose, TEDXT("Owner: %s. Projectile entered LinearProjectileState.", *GetOwner()->GetName());
#endif

	GetWorld()->GetTimerManager().SetTimer(ExpirationTimerHandle, this, &ULinearProjectileMovementState::EndState, ExpirationTime, false);

	if (GetOwner())
	{
		GetOwner()->OnActorHit.AddDynamic(this, &ULinearProjectileMovementState::OnCollision);
	}
}

void ULinearProjectileMovementState::UpdateState(float DeltaTime)
{
	Super::UpdateState(DeltaTime);

#ifndef NO_DEBUG
	assert(GetOwner() != NULL);
#endif
	FVector NewLocation = GetOwner()->GetActorLocation() + GetOwner()->GetActorForwardVector() * Speed * DeltaTime;
	GetOwner()->SetActorLocation(NewLocation);
}

void ULinearProjectileMovementState::EndState()
{
	Super::EndState();

#ifndef NO_DEBUG
	assert(GetOwner() != NULL);
	UE_LOG(LogTemp, Verbose, TEDXT("Owner: %s. Projectile ended.", *GetOwner()->GetName());
#endif

	GetWorld()->GetTimerManager().ClearTimer(ExpirationTimerHandle);

	// Unbind OnCollision function from OnHit event (replace with your actual collision event)
	if (GetOwner())
	{
		GetOwner()->OnActorHit.RemoveDynamic(this, &ULinearProjectileMovementState::OnCollision);
	}
}

void ULinearProjectileMovementState::OnCollision(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	EndState();
}
