#include "Projectiles/ProjectileStateMachine.h"

UProjectileStateMachine::UProjectileStateMachine()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UProjectileStateMachine::BeginPlay()
{
	Super::BeginPlay();

	if (StateSequence.Num() > 0)
	{
		CurrentStateIndex = 0;
		SetNextState();
	}
	else
	{
		GetOwner()->Destroy();
	}
}

void UProjectileStateMachine::SetNextState()
{
    if (CurrentStateIndex < StateSequence.Num())
    {
        UClass* NextStateClass = StateSequence[CurrentStateIndex];
        if (NextStateClass)
        {
            // Directly cast the class to the base class (UProjectileState)
            UProjectileState* NextState = Cast<UProjectileState>(NextStateClass->GetDefaultObject());

            if (NextState)
            {
                NextState->OnStateEnded.AddDynamic(this, &UProjectileStateMachine::OnStateEnded);
                NextState->BeginState();
                ++CurrentStateIndex;
            }
        }
    }
    else
    {
        GetOwner()->Destroy();
    }
}

void UProjectileStateMachine::RemoveState()
{
	if (UProjectileState* CurrentState = GetOwner()->FindComponentByClass<UProjectileState>())
	{
		CurrentState->DestroyComponent();
	}
}

void UProjectileStateMachine::OnStateEnded()
{
	RemoveState();
	SetNextState();
}