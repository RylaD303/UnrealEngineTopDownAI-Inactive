

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Containers/Array.h"
#include "ProjectileStateMachine.generated.h"


UENUM(BlueprintType)
enum class EProjectileMovementState : uint8
{
    PMS_Forward			UMETA(DisplayName = "Forward"),
    PMS_Homing			UMETA(DisplayName = "Homing"),
};


UENUM(BlueprintType)
enum class EProjectileBehaviourState : uint8
{
    PMS_Normal			    UMETA(DisplayName = "Normal"),
    PMS_Repeating			UMETA(DisplayName = "Repeating"),
    PMS_OnlyOne             UMETA(DisplayName = "Only one"),
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TOPDOWNAI_API UProjectileStateMachine : public UActorComponent
{
	GENERATED_BODY()

public:	
	UProjectileStateMachine();

    UFUNCTION(BlueprintCallable, Category = "Projectile")
    void SetProjectileState(EProjectileMovementState NewState);
	
private:

    UPROPERTY(EditAnywhere, Category = "ProjectileState")
    EProjectileMovementState MovementState;

    UPROPERTY(EditAnywhere, Category = "ProjectileState")
    TArray<EProjectileMovementState> MovementStates;

    UPROPERTY(EditAnywhere, Category = "ProjectileState")
    EProjectileBehaviourState BehaviourState;
    
protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
