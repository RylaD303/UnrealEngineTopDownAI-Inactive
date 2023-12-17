#include "Projectiles/Projectile.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/DamageEvents.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(TestAProjectile, "TopDownAI.Projectile.AProjectileTest", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)

bool TestAProjectile::RunTest(const FString& Parameters)
{
    // Test 0. Create AProjectile
    AProjectile* Projectile = NewObject<AProjectile>(AProjectile::StaticClass());
    TestNotNull("AProjectile is not null", Projectile);

    // Test 1. BeginPlay
    Projectile->BeginPlay();
    AActor* OtherActor = NewObject<AActor>(AActor::StaticClass());
    // Projectile->OnHit(Projectile, OtherActor, FVector::ZeroVector, FHitResult());
    // Projectile->OnHit(Projectile, nullptr, FVector::ZeroVector, FHitResult());
    Projectile->Tick(0.1f);
    TestEqual("InitialSpeed is set", Projectile->MovementComponent->InitialSpeed, 10.0f);
    TestEqual("MaxSpeed is set", Projectile->MovementComponent->MaxSpeed, 10.0f);
    TestTrue("bRotationFollowsVelocity is true", Projectile->MovementComponent->bRotationFollowsVelocity);
    TestEqual("ExpirationTime is set", Projectile->MovementComponent->LinearProjectileMovementState->ExpirationTime, 5.0f);
    //Projectile->OnActorHit.Broadcast(Projectile, OtherActor, FVector::ZeroVector, FHitResult());

    return true;
}