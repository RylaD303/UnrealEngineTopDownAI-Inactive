

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageableActor.generated.h"

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageableActor.generated.h"

UCLASS()
class TOPDOWNAI_API ADamageableActor : public AActor
{
    GENERATED_BODY()

public:
    ADamageableActor();

    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "Damage")
    virtual void TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
    float Health;
};