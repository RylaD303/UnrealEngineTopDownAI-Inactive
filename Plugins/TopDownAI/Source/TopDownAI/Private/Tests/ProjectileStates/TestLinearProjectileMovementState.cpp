#include "Misc/AutomationTest.h"
#include "Projectiles/States/LinearProjectileMovementState.h"
#include "Projectiles/Projectile.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    TestLinearProjectileMovementState,
    "TopDownAI.Projectile.ProjectileStates.LinearProjectileMovementStateTest",
    EAutomationTestFlags::SmokeFilter | EAutomationTestFlags::ApplicationContextMask)

bool TestLinearProjectileMovementState::RunTest(FString const& Parameters)
{
    // Test 0. Component attachments
    TUniquePtr<AProjectile> Projectile(NewObject<AProjectile>(GetTransientPackage(), FName(TEXT("TestProjectile"))));

    // Attach the component
    TSharedPtr<ULinearProjectileMovementState> LinearMovementState(NewObject<ULinearProjectileMovementState>(Projectile.Get(), FName(TEXT("TestProjectileState"))));

    TestNotNull("LinearProjectileMovementState component is not null", LinearMovementState.Get());
    TestEqual("LinearProjectileMovementState is attached to the projectile", Projectile->FindComponentByClass<ULinearProjectileMovementState>(), LinearMovementState.Get());

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