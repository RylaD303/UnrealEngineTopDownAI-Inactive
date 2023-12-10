#include "TopDownAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

void ATopDownAIController::StartAI()
{
    bIsAIActive = true;
    RunBehaviorTree(BehaviorTreeAsset);
    GetCharacterMovement()->MaxWalkSpeed = MovementSpeed;
}

void ATopDownAIController::StopAI()
{
    bIsAIActive = false;
    StopMovement();
    StopBehaviorTree();
}

void ATopDownAIController::PerformRandomCastAttack()
{
    if (bIsAIActive && CastAttacks.Num() > 0)
    {
        int32 RandomIndex = FMath::RandRange(0, CastAttacks.Num() - 1);
        UCastAttack* CastAttack = NewObject<UCastAttack>(this, CastAttacks[RandomIndex]);
        
        if (CastAttack)
        {
            CastAttack->ExecuteAttack();

            StopMovement();
        }
    }
}

void ATopDownAIController::BeginPlay()
{
    Super::BeginPlay();
    
    StartAI();
}