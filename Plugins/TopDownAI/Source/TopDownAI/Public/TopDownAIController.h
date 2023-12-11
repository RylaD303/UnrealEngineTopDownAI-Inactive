

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

	UFUNCTION(BlueprintCallable, Category = "AI")
	void StartAI();

	UFUNCTION(BlueprintCallable, Category = "AI")
	void StopAI();

	UFUNCTION(BlueprintCallable, Category = "AI|Attack")
	void PerformRandomCastAttack();

	UFUNCTION(BlueprintCallable, Category = "AI|Targeting")
	AActor* FindBestTarget();

	UFUNCTION(BlueprintCallable, Category = "AI|Targeting")
	float CalculateTargetScore(AActor* Target);

	UFUNCTION(BlueprintCallable, Category = "AI|Movement")
	void MoveToTarget(AActor* Target);

protected:
	UFUNCTION(BlueprintCallable, Category = "AI|Animation")
	void PlayIdleAnimation();

	UFUNCTION(BlueprintCallable, Category = "AI|Animation")
	void PlayMoveAnimation();

	UFUNCTION(BlueprintCallable, Category = "AI|Animation")
	void PlayAttackAnimation();

	UFUNCTION(BlueprintCallable, Category = "AI|Animation")
	void PlayDeathAnimation();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	class UBehaviorTree* BehaviorTreeAsset;

	UPROPERTY()
	class UAnimInstance* AnimationInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Animation")
	TMap<ETopDownAIState, UAnimMontage*> Animations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Attack")
	TArray<TSubclassOf<class UCastAttack>> CastAttacks;

private:
	bool bIsAIActive = false;

	void InitializeAnimations();

	void PlayAnimationByState(ETopDownAIState State);
};