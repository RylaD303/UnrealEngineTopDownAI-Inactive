#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "CastAttack.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCastFinished);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FProjectileFired);
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TOPDOWNAI_API UCastAttack : public UObject
{
    GENERATED_BODY()

public:
    UCastAttack();
    UCastAttack(AActor* OwningActor);

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
    TArray<TSubclassOf<class AProjectile>> ProjectileClasses;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
    TArray<float> ProjectileDelays;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cast Configuration")
    float CastTime;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cast Configuration")
    FVector MainDirection;

    UFUNCTION(BlueprintCallable)
    void StartCast();

    UPROPERTY(BlueprintAssignable, Category = "Cast Events")
    FOnCastFinished OnCastFinished;

    UPROPERTY(BlueprintAssignable, Category = "Projectile Events")
    FProjectileFired OnProjectileFired;

private:
    int32 CurrentProjectileIndex;
	
    AActor* OwningActor;

    void SpawnProjectile();

    FTimerHandle CastTimerHandle;
};