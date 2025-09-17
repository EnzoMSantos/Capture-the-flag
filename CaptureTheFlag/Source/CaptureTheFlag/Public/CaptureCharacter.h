#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CaptureCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class UCameraComponent;
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

	UPROPERTY(Replicated)
	FRotator ReplicatedControlRotation;

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

	UPROPERTY(ReplicatedUsing = OnRep_HasFlag, BlueprintReadOnly, Category="Flag")
	bool bHasFlag;

	UFUNCTION(BlueprintCallable, Category = "Flag")
	bool HasFlag() const { return bHasFlag; }

	UFUNCTION(BlueprintCallable, Category = "Flag")
	void SetHasFlag(bool bNewHasFlag);

	UFUNCTION(Server, Reliable)
	void Server_DropFlag();

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSetControlRotation(FRotator NewRotation);

	UFUNCTION(BlueprintCallable)
	FRotator GetReplicatedControlRotation() const { return ReplicatedControlRotation; }

	UFUNCTION(BlueprintCallable, Category = "Flag")
	void TryScore();

	//Outline
	UFUNCTION(BlueprintCallable, Category = "Team")
	void SetOutlineEnabled(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "Team")
	void UpdateOutlineColor(const FLinearColor& NewColor);

	void ApplyTeamMaterial();


	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:

	UFUNCTION()
	void OnRep_HasFlag();

private:

	void ApplyTeamMaterialWithRetry();
};
