#include "Actors/DamageableActor.h"
ADamageableActor::ADamageableActor()
{
    PrimaryActorTick.bCanEverTick = true;
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
float ADamageableActor::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

    //Check health component
    // Activate death signal.
    return DamageAmount;
}