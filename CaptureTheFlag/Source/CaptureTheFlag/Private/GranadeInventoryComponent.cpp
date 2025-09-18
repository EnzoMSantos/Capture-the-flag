// Fill out your copyright notice in the Description page of Project Settings.


#include "GranadeInventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "CaptureCharacter.h"

UGranadeInventoryComponent::UGranadeInventoryComponent()
{
	SetIsReplicatedByDefault(true);
	InventorySlots.SetNum(4);

	//Colocar add certo
	//GranadeDataMap.Add(EGranadeType::Damage, FGranadeData{ EGranadeType::Damage, nullptr, nullptr, 5.f, 999});
}

bool UGranadeInventoryComponent::CanAddGranade(EGranadeType GranadeType) const
{

	for (int32 i = 0; i < InventorySlots.Num(); i++)
	{
		if (InventorySlots[i].GranadeType == GranadeType && InventorySlots[i].Quantity < GetMaxStackForType(GranadeType))
		{
			return true;
		}
	}

	for (int32 i = 0; i < InventorySlots.Num(); i++)
	{
		if (InventorySlots[i].GranadeType == EGranadeType::None)
		{
			return true;
		}
	}
	return false;
}

void UGranadeInventoryComponent::Server_AddGranade_Implementation(EGranadeType GranadeType, int32 Quantity)
{
	if (Quantity <= 0) return;

	for (int32 i = 0; i < InventorySlots.Num(); i++)
	{
		if (InventorySlots[i].GranadeType == GranadeType)
		{
			int32 MaxStack = GetMaxStackForType(GranadeType);
			int32 NewQuantity = FMath::Min(InventorySlots[i].Quantity + Quantity, MaxStack);
			int32 Added = NewQuantity - InventorySlots[i].Quantity;

			InventorySlots[i].Quantity = NewQuantity;
			OnRep_Inventory();
			return;
		}
	}

	for (int32 i = 0; i < InventorySlots.Num(); i++)
	{
		if (InventorySlots[i].GranadeType == EGranadeType::None)
		{
			int32 MaxStack = GetMaxStackForType(GranadeType);
			InventorySlots[i].GranadeType = GranadeType;
			InventorySlots[i].Quantity = FMath::Min(Quantity, MaxStack);
			OnRep_Inventory();
			return;
		}
	}
}

void UGranadeInventoryComponent::Server_UseGranade_Implementation(int32 SlotIndex)
{
	if (!InventorySlots.IsValidIndex(SlotIndex)) return;
	if (InventorySlots[SlotIndex].GranadeType == EGranadeType::None) return;
	if (InventorySlots[SlotIndex].Quantity <= 0) return;

	if (InventorySlots[SlotIndex].CooldownRemaining > 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("Grenade on cooldown: %.1f seconds remaining"), InventorySlots[SlotIndex].CooldownRemaining);
		return;
	}

	InventorySlots[SlotIndex].Quantity--;

	// Aplicar cooldown
	if (const FGranadeData* Data = GranadeDataMap.Find(InventorySlots[SlotIndex].GranadeType))
	{
		InventorySlots[SlotIndex].CooldownRemaining = Data->Cooldown;
	}

	// Se quantidade zerou, limpar slot
	if (InventorySlots[SlotIndex].Quantity <= 0)
	{
		InventorySlots[SlotIndex] = FGranadeSlot();
	}

	OnRep_Inventory();
	UE_LOG(LogTemp, Warning, TEXT("Used grenade. Remaining: %d"), InventorySlots[SlotIndex].Quantity);
}

void UGranadeInventoryComponent::UseGranade(int32 SlotIndex)
{
}

int32 UGranadeInventoryComponent::GetGranadeCount(EGranadeType GranadeType) const
{
	int32 Total = 0;
	
	for (const FGranadeSlot& Slot : InventorySlots)
	{
		if (Slot.GranadeType == GranadeType)
		{
			Total += Slot.Quantity;
		}
	}
	return Total;
}

int32 UGranadeInventoryComponent::GetMaxStackForType(EGranadeType GranadeType) const
{
	if (const FGranadeData* Data = GranadeDataMap.Find(GranadeType))
	{
		return Data->MaxStack;
	}
	return 1;
}

void UGranadeInventoryComponent::OnRep_Inventory()
{
	//TO DO ->  Atualizar UI
	UE_LOG(LogTemp, Warning, TEXT("Inventory updated"));
}


void UGranadeInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner();

	if (Owner && Owner->HasAuthority())
	{
		AbilitySystemComponent = Owner->FindComponentByClass<UAbilitySystemComponent>();
		InitializeDefaultGranades();
	}
}

void UGranadeInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGranadeInventoryComponent, InventorySlots);
}

void UGranadeInventoryComponent::InitializeDefaultGranades()
{
	Server_AddGranade(EGranadeType::Damage, 999);
}

int32 UGranadeInventoryComponent::FindExistingSlot(EGranadeType GranadeType) const
{
	return int32();
}

int32 UGranadeInventoryComponent::FindEmptySlot() const
{
	return int32();
}


