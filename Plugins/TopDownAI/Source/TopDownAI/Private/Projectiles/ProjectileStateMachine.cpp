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
		if (UProjectileState* NextState = NewObject<UProjectileState>(GetOwner(), StateSequence[CurrentStateIndex]))
		{
			NextState->OnStateTimeout.AddDynamic(this, &UProjectileStateMachine::OnStateTimeout);
			NextState->OnProjectileCollided.AddDynamic(this, &UProjectileStateMachine::OnStateCollided);
			NextState->BeginState();
			++CurrentStateIndex;
		}
	}
	else
	{
		GetOwner()->Destroy();
	}
}

void UProjectileStateMachine::EndCurrentState()
{
	if (UProjectileState* CurrentState = GetOwner()->FindComponentByClass<UProjectileState>())
	{
		CurrentState->EndState();
	}
}

void UProjectileStateMachine::OnStateTimeout()
{
	EndCurrentState();
	SetNextState();
}

void UProjectileStateMachine::OnProjectileCollided()
{
	EndCurrentState();
	SetNextState();
}