// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Types/TeamsEnum.h"
#include "CaptureGameState.generated.h"


/**
 * 
 */
UCLASS()
class CAPTURETHEFLAG_API ACaptureGameState : public AGameStateBase
{
	GENERATED_BODY()

public:

	ACaptureGameState();

protected:

	UPROPERTY(Replicated, BlueprintReadOnly)
	int32 RedScore;

	UPROPERTY(Replicated, BlueprintReadOnly)
	int32 BlueScore;

public:
	void AddScore(ETeams Team);
	void ResetScores();

	UFUNCTION(BlueprintCallable)
	int32 GetRedScore() const { return RedScore; }

	UFUNCTION(BlueprintCallable)
	int32 GetBlueScore() const { return BlueScore; }


protected:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
