// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CaptureCharacter.generated.h"

UCLASS()
class CAPTURETHEFLAG_API ACaptureCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ACaptureCharacter();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(Replicated, BlueprintReadOnly, Category="Flag")
	bool bHasFlag;

public:	

	void PickupFlag();
	void DropFlag();
	bool HasFlag() const { return bHasFlag; }
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
