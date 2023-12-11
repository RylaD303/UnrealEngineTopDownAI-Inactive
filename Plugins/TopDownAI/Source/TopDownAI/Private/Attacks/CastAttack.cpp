#include "Attacks/CastAttack.h"
#include "Kismet/GameplayStatics.h"
#include "Projectiles/Projectile.h"


UCastAttack::UCastAttack()
{
    // well this is akward 
}
UCastAttack::UCastAttack(AActor* OwningActor)
{
    this->OwningActor = OwningActor;
}

void UCastAttack::StartCast()
{
    if (ProjectileClasses.Num() > 0)
    {
        CurrentProjectileIndex = 0;
        GetWorld()->GetTimerManager().SetTimer(CastTimerHandle, this, &UCastAttack::SpawnProjectile, CastTime, false);
    }
}

void UCastAttack::SpawnProjectile()
{
    if (CurrentProjectileIndex < ProjectileClasses.Num())
    {
        TSubclassOf<AProjectile> ProjectileClass = ProjectileClasses[CurrentProjectileIndex];
        float ProjectileDelay = ProjectileDelays.IsValidIndex(CurrentProjectileIndex) ? ProjectileDelays[CurrentProjectileIndex] : 0.0f;

        AProjectile* NewProjectile = GetWorld()->SpawnActor<AProjectile>(
            ProjectileClass,
            OwningActor->GetActorLocation(),
            OwningActor->GetActorRotation()
        );

        if (NewProjectile)
        {
            FVector AdjustedDirection = FQuat(MainDirection.Rotation()).RotateVector(FVector::ForwardVector);
            FRotator ProjectileRotation = AdjustedDirection.Rotation();
            NewProjectile->SetActorRotation(ProjectileRotation);
            NewProjectile->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
            OnProjectileFired.Broadcast();
            // Set a timer for the next projectile
            GetWorld()->GetTimerManager().SetTimer(CastTimerHandle, this, &UCastAttack::SpawnProjectile, ProjectileDelay, false);

            // Notify when the cast is finished
            if (CurrentProjectileIndex == ProjectileClasses.Num() - 1)
            {
                OnCastFinished.Broadcast();
            }

            ++CurrentProjectileIndex;
        }
    }
}