// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class CAPTURETHEFLAG_API UBaseHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateScore(int32 RedScore, int32 BlueScore);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateHealth(float CurrentHealth, float MaxHealth);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowWinMessage(const FString& WinningTeam);
};
