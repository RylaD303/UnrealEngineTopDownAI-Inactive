#include "Misc/AutomationTest.h"
#include "Projectiles/States/LinearProjectileMovementState.h"
#include "Projectiles/Projectile.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    TestLinearProjectileMovementState,
    "TopDownAI.Projectile.ProjectileStates.LinearProjectileMovementStateTest",
    EAutomationTestFlags::SmokeFilter | EAutomationTestFlags::ApplicationContextMask)

/* Had to change the modules loading phase to postdefault (instead of default) in .uplugin file,
*  because It was calling NewObject before CDO compilation (which means it was swarching for the function before it was created)*/


bool TestLinearProjectileMovementState::RunTest(FString const& Parameters)
{
    // Test 0. Component attachments
    AProjectile* Projectile = NewObject<AProjectile>(AProjectile::StaticClass());
    check(Projectile);

    // Attach the component
    ULinearProjectileMovementState* LinearMovementState = NewObject<ULinearProjectileMovementState>(Projectile, FName(TEXT("TestLinearMovementState")));
    check(LinearMovementState);

    TestNotNull("LinearProjectileMovementState component is not null", LinearMovementState);
    TestEqual("LinearProjectileMovementState is attached to the projectile", Projectile->FindComponentByClass<ULinearProjectileMovementState>(), LinearMovementState);

    // Test 1. Initial state setup
    LinearMovementState->BeginState();
    //TestTrue("Expiration timer is active", LinearMovementState->GetWorld()->GetTimerManager().IsTimerActive(LinearMovementState->ExpirationTimerHandle));

    // Test 2. Update state
    FVector InitialPosition = Projectile->GetActorLocation();
    const float DeltaTime = 0.1f;
    LinearMovementState->UpdateState(DeltaTime);

    // Check if the projectile has moved forward
    FVector ExpectedFinalPosition = InitialPosition + FVector::ForwardVector * LinearMovementState->Speed * DeltaTime;
    FVector ActualFinalPosition = Projectile->GetActorLocation();
    TestTrue("Projectile has moved forward", ExpectedFinalPosition.Equals(ActualFinalPosition, SMALL_NUMBER));

    // Test 3. End state
    LinearMovementState->EndState();

    // Check if the expiration timer is cleared
    // TestFalse("Expiration timer is not active", LinearMovementState->GetWorld()->GetTimerManager().IsTimerActive(LinearMovementState->ExpirationTimerHandle));

    return true;
}