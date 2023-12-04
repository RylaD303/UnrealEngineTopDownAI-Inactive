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
	UE_LOG(LogTemp, Verbose, TEXT("Owner: %s. Projectile entered LinearProjectileState.", *GetOwner()->GetName());
#endif

	GetWorld()->GetTimerManager().SetTimer(ExpirationTimerHandle, this, &ULinearProjectileMovementState::EndState, ExpirationTime, false);

	if (GetOwner())
	{
		GetOwner()->OnActorHit.AddDynamic(this, &ULinearProjectileMovementState::HandleCollision);
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
	UE_LOG(LogTemp, Verbose, TEXT("Owner: %s. Projectile ended.", *GetOwner()->GetName());
#endif

	GetWorld()->GetTimerManager().ClearTimer(ExpirationTimerHandle);

	if (GetOwner())
	{
		GetOwner()->OnActorHit.RemoveDynamic(this, &ULinearProjectileMovementState::HandleCollision);
	}
}

void ULinearProjectileMovementState::HandleCollision(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	EndState();
}
void ULinearProjectileMovementState::HandleTimeout()
{
	EndState();
}