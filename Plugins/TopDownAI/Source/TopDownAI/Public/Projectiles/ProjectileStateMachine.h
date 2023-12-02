#pragma once

#include "Projectiles/ProjectileState.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Containers/Array.h"
#include "ProjectileStateMachine.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TOPDOWNAI_API UProjectileStateMachine : public UActorComponent
{

	GENERATED_BODY()

public:	
	UProjectileStateMachine();

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile States")
	TArray<TSubclassOf<UProjectileState>> StateSequence;
    
protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    int32 CurrentStateIndex;

	void SetNextState();
	void EndCurrentState();

	UFUNCTION()
	void OnStateEnded();
		
	
};