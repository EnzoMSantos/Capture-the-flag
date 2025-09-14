// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Types/TeamsEnum.h"
#include "CaptureGameMode.generated.h"

/**
 * 
 */
UCLASS()
class CAPTURETHEFLAG_API ACaptureGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ACaptureGameMode();

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;

	void PlayerScored(class ACapturePlayerState* ScoringPlayer);
	void ResetGame();


protected:

	virtual void BeginPlay() override;

	void FindTeamBases();

private:

	UPROPERTY()
	class ABP_BaseZone* RedBase;

	UPROPERTY()
	class ABP_BaseZone* BlueBase;
};
