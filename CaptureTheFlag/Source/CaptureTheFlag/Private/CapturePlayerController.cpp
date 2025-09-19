// Fill out your copyright notice in the Description page of Project Settings.


#include "CapturePlayerController.h"
#include "Blueprint/UserWidget.h"
#include "CaptureCharacter.h"
#include "CaptureGameState.h"
#include "BaseAttributeSet.h"

void ACapturePlayerController::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(InitializeTimerHandle, this, &ACapturePlayerController::DelayedInitialize, 0.5f, false);
}

void ACapturePlayerController::UpdateScore_Implementation(int32 NewRedScore, int32 NewBlueScore)
{
	UE_LOG(LogTemp, Warning, TEXT("UpdateScore called: %d-%d"), NewRedScore, NewBlueScore);

	if (HUDWidget && IsLocalController())
	{
		HUDWidget->UpdateScore(NewRedScore, NewBlueScore);
		UE_LOG(LogTemp, Warning, TEXT("HUD UpdateScore called"));
	}
}

void ACapturePlayerController::UpdateHealth_Implementation(float NewCurrentHealth, float NewMaxHealth)
{
	if (HUDWidget && IsLocalController())
	{
		HUDWidget->UpdateHealth(NewCurrentHealth, NewMaxHealth);
	}
}

void ACapturePlayerController::OnScoreUpdate(int32 NewRedScore, int32 NewBlueScore)
{
	UE_LOG(LogTemp, Warning, TEXT("OnScoreUpdate received: %d-%d"), NewRedScore, NewBlueScore);
	UpdateScore(NewRedScore, NewBlueScore);
}

void ACapturePlayerController::OnHealthChanged(float NewHealth, float MaxHealth)
{
	UpdateHealth(NewHealth, MaxHealth);
}

void ACapturePlayerController::InitializeHUD()
{
	if (HUDWidgetClass && IsLocalController())
	{
		HUDWidget = CreateWidget<UBaseHUDWidget>(this, HUDWidgetClass);
		if (HUDWidget)
		{
			HUDWidget->AddToViewport();
		}
	}
}

void ACapturePlayerController::DelayedInitialize()
{
	InitializeHUD();
	SetupHealthBinding();
	SetupScoreBinding();
}

void ACapturePlayerController::SetupHealthBinding()
{
	if (ACaptureCharacter* MyCharacter = Cast<ACaptureCharacter>(GetPawn()))
	{
		UE_LOG(LogTemp, Warning, TEXT("Character found: %s"), *MyCharacter->GetName());

		MyCharacter->OnHealthChanged.AddDynamic(this, &ACapturePlayerController::OnHealthChanged);

		if (UAbilitySystemComponent* ASC = MyCharacter->GetAbilitySystemComponent())
		{
			float CurrentHealth = ASC->GetNumericAttribute(UBaseAttributeSet::GetHealthAttribute());
			float MaxHealth = ASC->GetNumericAttribute(UBaseAttributeSet::GetMaxHealthAttribute());

			UE_LOG(LogTemp, Warning, TEXT("Health values: %.1f/%.1f"), CurrentHealth, MaxHealth);

			UpdateHealth(CurrentHealth, MaxHealth);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("AbilitySystemComponent is NULL"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No character found for health binding"));
	}
}

void ACapturePlayerController::SetupScoreBinding()
{
	if (ACaptureGameState* GameState = GetWorld()->GetGameState<ACaptureGameState>())
	{
		GameState->OnScoreUpdated.AddDynamic(this, &ACapturePlayerController::OnScoreUpdate);

		UpdateScore(GameState->GetRedScore(), GameState->GetBlueScore());

		UE_LOG(LogTemp, Warning, TEXT("Score binding successful - Initial: %d-%d"),
			GameState->GetRedScore(), GameState->GetBlueScore());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GameState not found for score binding"));
	}
}
