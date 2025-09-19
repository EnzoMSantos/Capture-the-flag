// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CaptureTheFlagPlayerController.h"
#include "BaseHUDWidget.h"
#include "CapturePlayerController.generated.h"

UCLASS()
class CAPTURETHEFLAG_API ACapturePlayerController : public ACaptureTheFlagPlayerController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

	UFUNCTION(Client, Reliable)
	void UpdateScore(int32 NewRedScore, int32 NewBlueScore);

	UFUNCTION(Client, Reliable)
	void UpdateHealth(float NewCurrentHealth, float NewMaxHealth);

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UBaseHUDWidget> HUDWidgetClass;

	UPROPERTY(BlueprintReadOnly, Category = "UI")
	UBaseHUDWidget* HUDWidget;

protected:

	UFUNCTION()
	void OnScoreUpdate(int32 NewRedScore, int32 NewBlueScore);

	UFUNCTION()
	void OnHealthChanged(float NewHealth, float MaxHealth);

	UFUNCTION(BlueprintCallable, Category = "UI")
	void InitializeHUD();

	void DelayedInitialize();
	void SetupHealthBinding();
	void SetupScoreBinding();

private:

	FTimerHandle InitializeTimerHandle;

};
