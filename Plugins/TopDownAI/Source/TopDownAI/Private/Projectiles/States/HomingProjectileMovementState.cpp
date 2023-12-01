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

	GetWorld()->GetTimerManager().SetTimer(ExpirationTimerHandle, this, &UHomingProjectileMovementState::EndState, ExpirationTime, false);
}

void UHomingProjectileMovementState::UpdateState(float DeltaTime)
{
	Super::UpdateState(DeltaTime);

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

	GetWorld()->GetTimerManager().ClearTimer(ExpirationTimerHandle);
}

void UHomingProjectileMovementState::OnCollision(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	// Collision raises flag? FIXME.
}

void UHomingProjectileMovementState::SetTarget(AActor* OtherActor)
{
    if (OtherActor)
    {
        Target = TWeakObjectPtr<AActor>(OtherActor);
    }
}