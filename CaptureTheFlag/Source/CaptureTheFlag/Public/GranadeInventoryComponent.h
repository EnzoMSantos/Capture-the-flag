// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Types/GranadeType.h"
#include "GranadeInventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CAPTURETHEFLAG_API UGranadeInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UGranadeInventoryComponent();

	UPROPERTY(ReplicatedUsing = OnRep_Inventory, BlueprintReadOnly, Category = "Inventory")
	TArray<FGranadeSlot> InventorySlots;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TMap<EGranadeType, FGranadeData> GranadeDataMap;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool CanAddGranade(EGranadeType GranadeType) const;

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_AddGranade(EGranadeType GranadeType, int32 Quantity = 1);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_UseGranade(int32 SlotIndex);

	UFUNCTION(BlueprintCallable)
	void UseGranade(int32 SlotIndex);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	int32 GetGranadeCount(EGranadeType GranadeType) const;

	UFUNCTION(BlueprintCallable,Category = "Inventory")
	int32 GetMaxStackForType(EGranadeType GranadeType) const;

	UFUNCTION()
	void OnRep_Inventory();

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void InitializeDefaultGranades();
	int32 FindExistingSlot(EGranadeType GranadeType) const;
	int32 FindEmptySlot() const;

private:

	UPROPERTY()
	class UAbilitySystemComponent* AbilitySystemComponent;


		
};
