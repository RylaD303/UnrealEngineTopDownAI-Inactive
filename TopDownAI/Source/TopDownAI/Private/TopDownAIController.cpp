#include "TopDownAIController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

void ATopDownAIController::StartAI()
{
#ifndef NO_DEBUG
    assert(BehaviorTreeAsset != nullptr);
#endif

    bIsAIActive = true;
    RunBehaviorTree(BehaviorTreeAsset);

#ifndef NO_DEBUG
    UE_LOG(LogTemp, Verbose, TEXT("ATopDownAIController: AI started."));
#endif
}

void ATopDownAIController::StopAI()
{
    bIsAIActive = false;
    StopMovement();

#ifndef NO_DEBUG
    UE_LOG(LogTemp, Verbose, TEXT("ATopDownAIController: AI stopped."));
#endif
}

AActor* ATopDownAIController::FindBestTarget()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundActors);

    AActor* BestTarget = nullptr;
    float BestScore = TNumericLimits<float>::Max();

    for (AActor* Target : FoundActors)
    {
        assert(Target != nullptr);

        float Score = CalculateTargetScore(Target);

        if (Score < BestScore)
        {
            BestTarget = Target;
            BestScore = Score;
        }
    }

#ifndef NO_DEBUG
    UE_LOG(LogTemp, Verbose, TEXT("ATopDownAIController: Found best target: %s."), BestTarget ? *BestTarget->GetName() : TEXT("nullptr"));
#endif

    return BestTarget;
}

float ATopDownAIController::CalculateTargetScore(AActor* Target)
{
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

#ifndef NO_DEBUG
        UE_LOG(LogTemp, Verbose, TEXT("ATopDownAIController: Moving to target: %s."), *Target->GetName());
#endif
    }
}

void ATopDownAIController::PerformRandomCastAttack()
{
#ifndef NO_DEBUG
    assert(bIsAIActive);
    assert(CastAttacks.Num() > 0);
#endif

    AActor* Target = FindBestTarget();
    if (Target)
    {
        MoveToTarget(Target);

        int32 RandomIndex = FMath::RandRange(0, CastAttacks.Num() - 1);
        UCastAttack* CastAttack = NewObject<UCastAttack>(this, CastAttacks[RandomIndex]);

#ifndef NO_DEBUG
        assert(CastAttack != nullptr);
#endif

        CastAttack->OnProjectileFired.AddDynamic(this, &ATopDownAIController::PlayAttackAnimation);
        CastAttack->StartCast();
        StopMovement();

#ifndef NO_DEBUG
        UE_LOG(LogTemp, Verbose, TEXT("ATopDownAIController: Performing random cast attack."));
#endif
    }
}

void ATopDownAIController::BeginPlay()
{
    Super::BeginPlay();
    StartAI();
    
#ifndef NO_DEBUG
    UE_LOG(LogTemp, Verbose, TEXT("ATopDownAIController: Begin play."));
#endif
}

void ATopDownAIController::PlayAnimationByState(ETopDownAIState State)
{
    if (Animations.Contains(State))
    {
        UAnimMontage* Animation = Animations[State];
#ifndef NO_DEBUG
        assert(AnimationInstance != nullptr);
        assert(Animation != nullptr);
#endif

        AnimationInstance->Montage_Play(Animation);

#ifndef NO_DEBUG
        UE_LOG(LogTemp, Verbose, TEXT("ATopDownAIController: Playing animation for state: %d."), static_cast<int32>(State));
#endif
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