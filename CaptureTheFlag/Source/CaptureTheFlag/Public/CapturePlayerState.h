// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Types/TeamsEnum.h"
#include "CapturePlayerState.generated.h"


UCLASS()
class CAPTURETHEFLAG_API ACapturePlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	
	ACapturePlayerState();

	UPROPERTY(ReplicatedUsing = OnRep_Team, BlueprintReadOnly, Category = "Team")
	ETeams Team;
	

	void SetTeam(ETeams NewTeam);
	ETeams GetTeam() const { return Team; }

	UFUNCTION(BlueprintCallable)
	FLinearColor GetTeamColor() const;

protected:
	UFUNCTION()
	void OnRep_Team();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
