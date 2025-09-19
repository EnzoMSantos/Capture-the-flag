// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Types/TeamsEnum.h"
#include "CaptureGameState.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnScoreUpdatedSignature, int32, NewRedScore, int32, NewBlueScore);


/**
 * 
 */
UCLASS()
class CAPTURETHEFLAG_API ACaptureGameState : public AGameStateBase
{
	GENERATED_BODY()

public:

	ACaptureGameState();

	UPROPERTY(Replicated, BlueprintReadOnly)
	int32 RedTeamCount;

	UPROPERTY(Replicated, BlueprintReadOnly)
	int32 BlueTeamCount;

	ETeams GetBalancedTeam();

	void UpdateTeamCounts();

	UPROPERTY(BlueprintAssignable, Category = "Game State")
	FOnScoreUpdatedSignature OnScoreUpdated;

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

	UFUNCTION()
	virtual void OnRep_RedScore();

	UFUNCTION()
	virtual void OnRep_BlueScore();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
