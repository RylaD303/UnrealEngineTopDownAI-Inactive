#include "TopDownAIController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

void ATopDownAIController::StartAI()
{
    bIsAIActive = true;
    RunBehaviorTree(BehaviorTreeAsset);
}

void ATopDownAIController::StopAI()
{
    bIsAIActive = false;
    StopMovement();
}

AActor* ATopDownAIController::FindBestTarget()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundActors);

    AActor* BestTarget = nullptr;
    float BestScore = TNumericLimits<float>::Max();

    for (AActor* Target: FoundActors)
    {
        if (Target)
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
            UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, TargetLocation);
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
                CastAttack->OnProjectileFired.AddDynamic(this, &ATopDownAIController::PlayAttackAnimation);
                CastAttack->StartCast();
                StopMovement();
            }
        }
    }
}

void ATopDownAIController::BeginPlay()
{
    Super::BeginPlay();
    StartAI();
}


void ATopDownAIController::PlayAnimationByState(ETopDownAIState State)
{
	if (Animations.Contains(State))
	{
		UAnimMontage* Animation = Animations[State];
		if (AnimationInstance && Animation)
		{
			AnimationInstance->Montage_Play(Animation);
		}
	}
}

void ATopDownAIController::PlayIdleAnimation()
{
	PlayAnimationByState(ETopDownAIState::Idle);
}

void ATopDownAIController::PlayMoveAnimation()
{
	PlayAnimationByState(ETopDownAIState::Move);
}

void ATopDownAIController::PlayAttackAnimation()
{
	PlayAnimationByState(ETopDownAIState::Attack);
}

void ATopDownAIController::PlayDeathAnimation()
{
	PlayAnimationByState(ETopDownAIState::Death);
}