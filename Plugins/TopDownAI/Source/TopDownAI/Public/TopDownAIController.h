

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
#include "Animation/AnimInstance.h"
#include "Attacks/CastAttack.h"

#include "TopDownAIController.generated.h"


/**
 * 
 */
UENUM(BlueprintType)
enum class ETopDownAIState : uint8
{
	Idle,
	Move,
	Attack,
	Death
};

UCLASS()
class TOPDOWNAI_API ATopDownAIController : public AAIController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	// Start or stop the AI
	UFUNCTION(BlueprintCallable, Category = "AI")
	void StartAI();

	UFUNCTION(BlueprintCallable, Category = "AI")
	void StopAI();

	// Perform a random cast attack
	UFUNCTION(BlueprintCallable, Category = "AI|Attack")
	void PerformRandomCastAttack();

	// Find the best target based on certain criteria
	UFUNCTION(BlueprintCallable, Category = "AI|Targeting")
	AActor* FindBestTarget();

	// Check if a target is valid
	UFUNCTION(BlueprintCallable, Category = "AI|Targeting")
	bool IsValidTarget(AActor* Target);

	// Calculate a score for the target based on certain criteria
	UFUNCTION(BlueprintCallable, Category = "AI|Targeting")
	float CalculateTargetScore(AActor* Target);

	// Move to the target
	UFUNCTION(BlueprintCallable, Category = "AI|Movement")
	void MoveToTarget(AActor* Target);

protected:
	// Play animations based on the AI state
	UFUNCTION(BlueprintCallable, Category = "AI|Animation")
	void PlayIdleAnimation();

	UFUNCTION(BlueprintCallable, Category = "AI|Animation")
	void PlayMoveAnimation();

	UFUNCTION(BlueprintCallable, Category = "AI|Animation")
	void PlayAttackAnimation();

	UFUNCTION(BlueprintCallable, Category = "AI|Animation")
	void PlayDeathAnimation();

private:
	// Is the AI currently active
	bool bIsAIActive = false;

	// Behavior Tree asset for the AI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	class UBehaviorTree* BehaviorTreeAsset;

	// Animation instance for the AI
	UPROPERTY()
	class UAnimInstance* AnimationInstance;

	// TMap to store animations for different states
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Animation")
	TMap<ETopDownAIState, UAnimMontage*> Animations;

	// Array of cast attacks available to the AI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Attack")
	TArray<TSubclassOf<class UCastAttack>> CastAttacks;

	// Initialize animations in the TMap
	void InitializeAnimations();

	// Play animation based on the AI state
	void PlayAnimationByState(ETopDownAIState State);
};