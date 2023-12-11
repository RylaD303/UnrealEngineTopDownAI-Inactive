

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "Attacks/CastAttack.h"
#include "TopDownAIController.generated.h"


/**
 * 
 */
UCLASS()
class TOPDOWNAI_API ATopDownAIController : public AAIController
{
    GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	bool bIsAIActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	UBehaviorTree* BehaviorTreeAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	TArray<TSubclassOf<UCastAttack>> CastAttacks;

	UFUNCTION(BlueprintCallable, Category = "AI")
	void StartAI();

	UFUNCTION(BlueprintCallable, Category = "AI")
	void StopAI();

	UFUNCTION(BlueprintCallable, Category = "AI")
	void PerformRandomCastAttack();

protected:
	// Additional functions for dynamic targeting and movement logic
	AActor* FindBestTarget();
	bool IsValidTarget(AActor* Target);
	float CalculateTargetScore(AActor* Target);
	void MoveToTarget(AActor* Target);

	virtual void BeginPlay() override;

};