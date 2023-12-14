#include "Attacks/CastAttack.h"
#include "Kismet/GameplayStatics.h"
#include "Projectiles/Projectile.h"

UCastAttack::UCastAttack()
{
    // well this is awkward 
}

UCastAttack::UCastAttack(AActor* OwningActor)
{
#ifndef NO_DEBUG
    assert(OwningActor != nullptr);
#endif
    this->OwningActor = OwningActor;
}

void UCastAttack::StartCast()
{
#ifndef NO_DEBUG
    assert(ProjectileClasses.Num() > 0);
#endif

    CurrentProjectileIndex = 0;
    GetWorld()->GetTimerManager().SetTimer(CastTimerHandle, this, &UCastAttack::SpawnProjectile, CastTime, false);

#ifndef NO_DEBUG
    UE_LOG(LogTemp, Verbose, TEXT("UCastAttack: Starting cast for OwningActor: %s."), *OwningActor->GetName());
#endif
}

void UCastAttack::SpawnProjectile()
{
#ifndef NO_DEBUG
    assert(CurrentProjectileIndex < ProjectileClasses.Num());
#endif

    TSubclassOf<AProjectile> ProjectileClass = ProjectileClasses[CurrentProjectileIndex];
    float ProjectileDelay = ProjectileDelays.IsValidIndex(CurrentProjectileIndex) ? ProjectileDelays[CurrentProjectileIndex] : 0.0f;

    AProjectile* NewProjectile = GetWorld()->SpawnActor<AProjectile>(
        ProjectileClass,
        OwningActor->GetActorLocation(),
        OwningActor->GetActorRotation()
    );

#ifndef NO_DEBUG
    assert(NewProjectile != nullptr);
    UE_LOG(LogTemp, Verbose, TEXT("UCastAttack: Projectile spawned for OwningActor: %s."), *OwningActor->GetName());
#endif

    if (NewProjectile)
    {
        FVector AdjustedDirection = FQuat(MainDirection.Rotation()).RotateVector(FVector::ForwardVector);
        FRotator ProjectileRotation = AdjustedDirection.Rotation();
        NewProjectile->SetActorRotation(ProjectileRotation);
        NewProjectile->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
        OnProjectileFired.Broadcast();

        GetWorld()->GetTimerManager().SetTimer(CastTimerHandle, this, &UCastAttack::SpawnProjectile, ProjectileDelay, false);
        if (CurrentProjectileIndex == ProjectileClasses.Num() - 1)
        {
            OnCastFinished.Broadcast();
        }

        ++CurrentProjectileIndex;
    }
}