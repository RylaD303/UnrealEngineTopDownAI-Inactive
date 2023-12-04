#include "Misc/AutomationTest.h"
#include "Projectiles/States/HomingProjectileMovementState.h"
#include "Projectiles/Projectile.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    TestHomingProjectileMovementState,
    "TopDownAI.Projectile.ProjectileStates.HomingProjectileMovementStateTest",
    EAutomationTestFlags::SmokeFilter | EAutomationTestFlags::ApplicationContextMask)



/*
[2024.02.04-18.09.09:236][  0]LogOutputDevice: Error: === Handled ensure: ===
[2024.02.04-18.09.09:236][  0]LogOutputDevice: Error: 
[2024.02.04-18.09.09:236][  0]LogOutputDevice: Error: Ensure condition failed: Registry  [File:./Runtime/Engine/Private/Elements/Framework/EngineElementsLibrary.cpp] [Line: 39] 
[2024.02.04-18.09.09:236][  0]LogOutputDevice: Error: Typed element was requested for '/Script/TopDownAI.Projectile:Projectile_0.ProjectileMovementComponent' before the registry was available! This usually means that NewObject was used instead of CreateDefaultSubobject during CDO construction.
[2024.02.04-18.09.09:236][  0]LogOutputDevice: Error: Stack: 
[2024.02.04-18.09.09:236][  0]LogOutputDevice: Error: [Callstack] 0x00007ffff3ad2600 
libUnrealEditor-Engine.so!TTypedElementOwner<FComponentElementData> EngineElementsLibraryUtil::
CreateTypedElement<UActorComponent, FComponentElementData>(UActorComponent const*, FName) 
[/home/alemak/programs/UnrealEngine/Engine/Source/./Runtime/Engine/Private/Elements/Framework/EngineElementsLibrary.cpp:39]


Like what in the Lord is that?, why is the NewObject construction for AProjectile called before the AProjectile is available for use.

Seems like recompiling Uobjects used in the tests results in that error.
*/
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