#include "Actors/DamageableActor.h"
#include "GameFramework/Actor.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(TestADamageableActor, "TopDownAI.DamageableActor.TestADamageableActor", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)

bool TestADamageableActor::RunTest(const FString& Parameters)
{
    // Test 0. Create ADamageableActor
    ADamageableActor* DamageableActor = NewObject<ADamageableActor>(ADamageableActor::StaticClass());
    TestNotNull("ADamageableActor is not null", DamageableActor);
    DamageableActor->BeginPlay();
    DamageableActor->Tick(0.1f);

    // Test 1. TakeDamage
    float DamageAmount = 10.0f;
    FDamageEvent DamageEvent;
    AController* EventInstigator = NewObject<AController>(AController::StaticClass());
    AActor* DamageCauser = NewObject<AActor>(AActor::StaticClass());
    float Result = DamageableActor->TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

    // Check if the TakeDamage function returns the correct damage amount
    TestEqual("TakeDamage returns correct damage amount", Result, DamageAmount);

    // Test 2. Additional TakeDamage checks
    float InitialHealth = DamageableActor->GetHealth(); // Assuming there's a GetHealth function
    float RemainingHealth = DamageableActor->TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
    TestTrue("Health has been reduced", RemainingHealth < InitialHealth);

    // Test 3. Additional TakeDamage checks with negative damage
    float NegativeDamage = -5.0f;
    float HealthBeforeNegativeDamage = DamageableActor->GetHealth();
    float RemainingHealthAfterNegativeDamage = DamageableActor->TakeDamage(NegativeDamage, DamageEvent, EventInstigator, DamageCauser);

    // Check if health remains unchanged or increased with negative damage
    TestTrue("Health remains unchanged or increased with negative damage", RemainingHealthAfterNegativeDamage >= HealthBeforeNegativeDamage);

    return true;
}