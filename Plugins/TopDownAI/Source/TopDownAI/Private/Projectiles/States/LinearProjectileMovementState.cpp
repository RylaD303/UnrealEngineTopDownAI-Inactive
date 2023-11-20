#include "Math/Vector.h"
#include "Projectiles/States/LinearProjectileMovementState.h"

#define NO_DEBUG

ULinearProjectileMovementState::ULinearProjectileMovementState()
{
	ExpirationTime = 5.0f; // seconds
}

void ULinearProjectileMovementState::BeginState()
{
	Super::BeginState();

	GetWorld()->GetTimerManager().SetTimer(ExpirationTimerHandle, this, &ULinearProjectileMovementState::EndState, ExpirationTime, false);

	if (GetOwner())
	{
		GetOwner()->OnHit.AddDynamic(this, &ULinearProjectileMovementState::OnCollision);
	}
}

void ULinearProjectileMovementState::UpdateState(float DeltaTime)
{
	Super::UpdateState(DeltaTime);

	FVector NewLocation = GetOwner()->GetActorLocation() + GetOwner()->GetActorForwardVector() * Speed * DeltaTime;
	GetOwner()->SetActorLocation(NewLocation);
}

void ULinearProjectileMovementState::EndState()
{
	Super::EndState();

	GetWorld()->GetTimerManager().ClearTimer(ExpirationTimerHandle);

	// Unbind OnCollision function from OnHit event (replace with your actual collision event)
	if (GetOwner())
	{
		GetOwner()->OnHit.RemoveDynamic(this, &ULinearProjectileMovementState::OnCollision);
	}
}

void ULinearProjectileMovementState::OnCollision()
{
	EndState();
}
