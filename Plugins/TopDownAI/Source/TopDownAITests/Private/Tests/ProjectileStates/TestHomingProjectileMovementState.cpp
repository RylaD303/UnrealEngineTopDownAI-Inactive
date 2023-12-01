#include "Misc/AutomationTest.h"
#include "Projectiles/States/HomingProjectileMovementState.h"
#include "Projectiles/Projectile.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    TestHomingProjectileMovementState,
    "TopDownAI.Projectile.ProjectileStates.HomingProjectileMovementStateTest",

    EAutomationTestFlags::SmokeFilter | EAutomationTestFlags::ApplicationContextMask)

bool TestHomingProjectileMovementState::RunTest(FString const& Parameters)
{
    // Test 0. Component attachments
    TSharedPtr<AProjectile>Projectile(NewObject<AProjectile>(AProjectile::StaticClass()));
    check(Projectile);

    // Attach the component
    TSharedPtr<UHomingProjectileMovementState> HomingMovementState(NewObject<UHomingProjectileMovementState>(Projectile.Get(), FName(TEXT("TestHomingMovementState"))));
    check(HomingMovementState);

    // Test 1. Initial state setup
    FVector InitialPosition = Projectile->GetActorLocation();
    HomingMovementState->BeginState();

    // Test 2. Update state with no target
    const float DeltaTimeNoTarget = 0.1f;
    HomingMovementState->UpdateState(DeltaTimeNoTarget);

    // Check if the projectile has moved forward without a target
    FVector ExpectedPositionNoTarget = InitialPosition + FVector::ForwardVector * HomingMovementState->Speed * DeltaTimeNoTarget;
    FVector ActualPositionNoTarget = Projectile->GetActorLocation();
    TestTrue("Projectile has moved forward without a target", ExpectedPositionNoTarget.Equals(ActualPositionNoTarget, SMALL_NUMBER));

    // Test 3. Update state with a target
    TSharedPtr<AActor, ESPMode::ThreadSafe> TargetActor(NewObject<AActor>(AActor::StaticClass()));
    
    check(TargetActor);
    TargetActor->SetActorLocation(InitialPosition + FVector::RightVector * 100.0f);  // Set a target to the right of the projectile

    /*CompilerResultsLog: ld.lld: error: undefined symbol: UHomingProjectileMovementState::SetTarget(AActor*)
    CompilerResultsLog: >>> referenced by TestHomingProjectileMovementState.cpp:40 (/home/alemak/projects/Demonless/Plugins/TopDownAI/Source/TopDownAITests/Private/Tests/ProjectileStates/TestHomingProjectileMovementState.cpp:40)
    CompilerResultsLog: >>>               /home/alemak/projects/Demonless/Plugins/TopDownAI/Intermediate/Build/Linux/B4D820EA/UnrealEditor/Development/TopDownAITests/TestHomingProjectileMovementState.cpp.o:(TestHomingProjectileMovementState::RunTest(FString const&))
    CompilerResultsLog: clang++: error: linker command failed with exit code 1 (use -v to see invocation)
    ?????????????????????????????
    PP FIXME!*/
    HomingMovementState->Target = TargetActor.Get();
    const float DeltaTimeWithTarget = 0.1f;
    HomingMovementState->UpdateState(DeltaTimeWithTarget);

    // Check if the projectile has adjusted its course towards the target
    FVector ExpectedDirectionToTarget = (TargetActor->GetActorLocation() - InitialPosition).GetSafeNormal();
    FVector ActualDirectionToTarget = (Projectile->GetActorLocation() - InitialPosition).GetSafeNormal();
    TestTrue("Projectile has adjusted its course towards the target", ExpectedDirectionToTarget.Equals(ActualDirectionToTarget, SMALL_NUMBER));


    // Test 4. End state
    HomingMovementState->EndState();

    return true;
}