// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Types/TeamsEnum.h"
#include "BP_BaseZone.generated.h"

UCLASS()
class CAPTURETHEFLAG_API ABP_BaseZone : public AActor
{
	GENERATED_BODY()

public:
	ABP_BaseZone();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* TriggerBox;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Team")
	ETeams Team;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawn")
	TArray<class APlayerStart*> TeamSpawnPoints;

public:

	UFUNCTION(BlueprintCallable, Category = "Team")
	ETeams GetTeam() const { return Team; }

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable, Category = "Spawn")
	APlayerStart* GetSpawnPointForPlayer(class ACapturePlayerState* PlayerState);

};
