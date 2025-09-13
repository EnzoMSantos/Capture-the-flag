#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CaptureCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class UCameraComponent;
class USkeletalMeshComponent;
class UEnhancedInputLocalPlayerSubsystem;
class UEnhancedInputComponent;

UCLASS()
class CAPTURETHEFLAG_API ACaptureCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ACaptureCharacter();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Code|Camera")
	class UCameraComponent* FirstPersonCameraComponent;

	// Enhanced Input System
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Code|Input")
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Code|Input")
	UInputAction* MoveAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Code|Input")
	UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Code|Input")
	UInputAction* JumpAction;

public:	

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Move(const struct FInputActionValue& Value);
	void Look(const struct FInputActionValue& Value);
	void StartJump();
	void StopJump();

	UPROPERTY(Replicated, BlueprintReadOnly, Category="Flag")
	bool bHasFlag;

	void PickupFlag();
	void DropFlag();
	bool HasFlag() const { return bHasFlag; }

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
