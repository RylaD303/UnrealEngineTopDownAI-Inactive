#include "Actors/DamageableActor.h"
ADamageableActor::ADamageableActor()
{
    PrimaryActorTick.bCanEverTick = true;
    Health = 100.0f;
}

// Called when the game starts or when spawned
void ADamageableActor::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ADamageableActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Function to apply damage to the actor
void ADamageableActor::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    Health -= DamageAmount;

    if (Health <= 0.0f)
    {
        // Activate death signal.
    }
}