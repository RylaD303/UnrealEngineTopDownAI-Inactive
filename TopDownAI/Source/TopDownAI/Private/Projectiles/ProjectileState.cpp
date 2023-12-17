#include "Projectiles/ProjectileState.h"

UProjectileState::UProjectileState()
{

}
void UProjectileState::BeginState()
{

}
void UProjectileState::UpdateState(float DeltaTime)
{

}
void UProjectileState::EndState()
{
    OnStateEnded.Broadcast();
}

void UProjectileState::HandleCollision(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	// End state or just bounce. Fixme?
}

void UProjectileState::HandleTimeout()
{
	EndState();
}

