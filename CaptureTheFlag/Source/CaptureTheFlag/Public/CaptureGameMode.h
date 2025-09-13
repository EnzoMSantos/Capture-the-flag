// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
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

	void PlayerScored(class ACapturePlayerState* ScoringPlayer);
	void ResetGame();
};
