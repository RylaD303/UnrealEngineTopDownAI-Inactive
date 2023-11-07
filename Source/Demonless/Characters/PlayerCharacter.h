

#pragma once

#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "PlayerCharacter.generated.h"
/**
 * 
 */
UCLASS()
class DEMONLESS_API APlayerCharacter : public APaperCharacter
{
	GENERATED_BODY()

protected:
	//Player follow camera
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UCameraComponent* CameraComp;
};
