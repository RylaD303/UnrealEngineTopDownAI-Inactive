

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TopDownAIController.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNAI_API ATopDownAIController : public AAIController
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI")
    class UBehaviorTree* BehaviorTreeAsset;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI Configuration")
    float MovementSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI Configuration")
    float AttackRange;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI Configuration")
    float DetectionRadius;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI Configuration")
    TArray<TSubclassOf<class UCastAttack>> CastAttacks;

    UFUNCTION(BlueprintCallable, Category = "AI")
    void StartAI();

    UFUNCTION(BlueprintCallable, Category = "AI")
    void StopAI();

    UFUNCTION(BlueprintCallable, Category = "AI")
    void PerformRandomCastAttack();

    virtual void BeginPlay() override;


private:
    bool bIsAIActive;

};