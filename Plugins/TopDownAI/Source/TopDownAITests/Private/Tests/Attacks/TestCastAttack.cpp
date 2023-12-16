#include "Misc/AutomationTest.h"
#include "Projectiles/Projectiles.h"
#include "Projectiles/States/LinearProjectileMovementState.h"
#include "Projectiles/States/HomingProjectileMovementState.h"
#include "Projectiles/Projectile.h"
#include "Attacks/CastAttack.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    TestCastAttack,
    "TopDownAI.Projectile.Attacks.CastAttackTest",
    EAutomationTestFlags::SmokeFilter | EAutomationTestFlags::ApplicationContextMask
)

bool TestCastAttack::RunTest(const FString& Parameters)
{
    // Test 0. Initialization
    AActor* OwningActor = NewObject<AActor>(AActor::StaticClass());
    check(OwningActor != nullptr);

    UCastAttack* CastAttack = NewObject<UCastAttack>(OwningActor);
    check(CastAttack != nullptr);
    CastAttack->StartCast();

    TestTrue("Cast timer is active", CastAttack->GetWorld()->GetTimerManager().IsTimerActive(CastAttack->CastTimerHandle));

    CastAttack->SpawnProjectile();

    // Test 2. SpawnProjectile with projectile class and delay
    AProjectile* Projectile = NewObject<AProjectile>(AProjectile::StaticClass());
    check(Projectile != nullptr);

    CastAttack->ProjectileClasses.Add(Projectile->StaticClass());
    CastAttack->ProjectileDelays.Add(1.0f);

    CastAttack->SpawnProjectile();

    float Delay = CastAttack->ProjectileDelays[0];
    float ElapsedTime = 0.0f;

    while (ElapsedTime < Delay)
    {
        CastAttack->Update(0.1f);
        ElapsedTime += 0.1f;
    }
    TestNotNull("Projectile is spawned", CastAttack->SpawnedProjectiles.Num() > 0);

    // Test 3. EndCast
    CastAttack->EndCast();

    TestFalse("Cast timer is inactive after EndCast", CastAttack->GetWorld()->GetTimerManager().IsTimerActive(CastAttack->CastTimerHandle));

    // Cleanup
    CastAttack->ConditionalBeginDestroy();
    OwningActor->ConditionalBeginDestroy();
    Projectile->ConditionalBeginDestroy();

    return true;
}