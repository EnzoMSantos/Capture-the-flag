// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlagActor.generated.h"

class ACaptureCharacter;

UCLASS()
class CAPTURETHEFLAG_API AFlagActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AFlagActor();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Code|Components")
	UStaticMeshComponent* MeshComp;

	FVector InitialLocation;

public:	
	virtual void Tick(float DeltaTime) override;

	void ResetFlag();

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	void AttachToCharacter(ACaptureCharacter* Character);
	void DetachFromCharacter();
};
