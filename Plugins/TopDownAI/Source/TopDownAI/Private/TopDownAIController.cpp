#include "TopDownAIController.h"


void ATopDownAIController::StartAI()
{
    bIsAIActive = true;
    RunBehaviorTree(BehaviorTreeAsset);

    // Set AI configuration parameters
    GetCharacterMovement()->MaxWalkSpeed = MovementSpeed;
}

void ATopDownAIController::StopAI()
{
    bIsAIActive = false;
    StopMovement();
    StopBehaviorTree();
}

AActor* ATopDownAIController::FindBestTarget()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundActors);

    AActor* BestTarget = nullptr;
    float BestScore = TNumericLimits<float>::Max();

    for (AActor* Target : FoundActors)
    {
        if (IsValidTarget(Target))
        {
            float Score = CalculateTargetScore(Target);

            if (Score < BestScore)
            {
                BestTarget = Target;
                BestScore = Score;
            }
        }
    }

    return BestTarget;
}

bool ATopDownAIController::IsValidTarget(AActor* Target)
{
    // Implement your criteria for a valid target here
    return Target && !Target->IsPendingKill();
}

float ATopDownAIController::CalculateTargetScore(AActor* Target)
{
    // Implement your scoring logic here (e.g., based on distance, threat level, type, etc.)
    return Target->GetDistanceTo(GetPawn());
}

void ATopDownAIController::MoveToTarget(AActor* Target)
{
    if (Target)
    {
        UNavigationSystemV1* NavSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
        if (NavSystem)
        {
            FVector TargetLocation = Target->GetActorLocation();
            NavSystem->SimpleMoveToLocation(this, TargetLocation);
        }
    }
}

void ATopDownAIController::PerformRandomCastAttack()
{
    if (bIsAIActive && CastAttacks.Num() > 0)
    {
        AActor* Target = FindBestTarget();
        if (Target)
        {
            MoveToTarget(Target);

            // Choose a random cast attack
            int32 RandomIndex = FMath::RandRange(0, CastAttacks.Num() - 1);
            UCastAttack* CastAttack = NewObject<UCastAttack>(this, CastAttacks[RandomIndex]);

            // Perform the chosen cast attack
            if (CastAttack)
            {
                // Example function to execute the attack
                CastAttack->ExecuteAttack();

                // You may want to stop AI movement during the attack, depending on your requirements
                StopMovement();
            }
        }
    }
}

void ATopDownAIController::BeginPlay()
{
    Super::BeginPlay();

    // Optionally start AI automatically when the game begins
    // StartAI();
}