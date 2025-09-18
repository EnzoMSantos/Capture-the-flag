// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h" 
#include "InputMappingContext.h"
#include "InputAction.h"
#include "FlagActor.h"
#include "CapturePlayerState.h"
#include "CaptureGameMode.h"
#include "CaptureGameState.h"
#include "AbilitySystemComponent.h"
#include "GranadeInventoryComponent.h"
#include "DamageGranadeAbility.h"
#include "BaseAttributeSet.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AbilitySystemInterface.h" 
#include "EngineUtils.h"


ACaptureCharacter::ACaptureCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(55.5f, 96.f);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);

	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	GetMesh()->SetupAttachment(GetCapsuleComponent());
	GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	GetMesh()->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));

	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;

	bReplicates = true;
	bHasFlag = false;

	//GAS
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	
	AttributeSet = CreateDefaultSubobject<UBaseAttributeSet>(TEXT("AttributeSet"));
}

//UAbilitySystemComponent* ACaptureCharacter::GetAbilitySystemComponent() const
//{
//	return AbilitySystemComponent;
//}

void ACaptureCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (IsLocallyControlled())
	{
		GetMesh()->SetOwnerNoSee(true);
		FirstPersonCameraComponent->SetActive(true);
	}
	else
	{
		GetMesh()->SetOwnerNoSee(false);
		FirstPersonCameraComponent->SetActive(false);
	}

	// Setup Enhanced Input
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem
			<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
		{
			ApplyTeamMaterialWithRetry();
		}, 0.5f, false);

	if (AbilitySystemComponent && HasAuthority())
	{
		InitializeGAS();
	}

	UE_LOG(LogTemp, Warning, TEXT("BP_CaptureCharacter BeginPlay - HasAbilitySystem: %d"),
		(AbilitySystemComponent != nullptr));

	DebugFindAllGranadeBlueprints();
}

void ACaptureCharacter::SetHasFlag(bool bNewHasFlag)
{
	if (HasAuthority())
	{
		bHasFlag = bNewHasFlag;
		OnRep_HasFlag();
	}
}



void ACaptureCharacter::Server_DropFlag_Implementation()
{
	if (!bHasFlag) return;

	bHasFlag = false;
	OnRep_HasFlag();
}

void ACaptureCharacter::TryScore()
{
	if (!HasAuthority() || !bHasFlag) return;

	UE_LOG(LogTemp, Warning, TEXT("TryScore called - Resetting flag"));

	for (TActorIterator<AFlagActor> It(GetWorld()); It; ++It)
	{
		It->ResetFlag(); 
		break;
	}

	if (ACapturePlayerState* PS = GetPlayerState<ACapturePlayerState>())
	{
		if (ACaptureGameMode* GM = GetWorld()->GetAuthGameMode<ACaptureGameMode>())
		{
			GM->PlayerScored(PS);
			SetHasFlag(false);
		}
	}
}

void ACaptureCharacter::ServerSetControlRotation_Implementation(FRotator NewRotation)
{
	ReplicatedControlRotation = NewRotation;

	FRotator YawRotation(0.f, NewRotation.Yaw, 0.f);
	SetActorRotation(YawRotation);
}

bool ACaptureCharacter::ServerSetControlRotation_Validate(FRotator NewRotation)
{
	if (NewRotation.ContainsNaN())
	{
		UE_LOG(LogTemp, Error, TEXT("Rotation contains NaN values"));
		return false;
	}

	const bool bValid =
		(NewRotation.Pitch >= -180.0f && NewRotation.Pitch <= 180.0f) &&
		(NewRotation.Yaw >= -360.0f && NewRotation.Yaw <= 360.0f) &&
		(NewRotation.Roll >= -180.0f && NewRotation.Roll <= 180.0f);

	if (!bValid)
	{
		UE_LOG(LogTemp, Warning, TEXT("Rotation out of expected range: %s"), *NewRotation.ToString());
	}
	return true;
}



void ACaptureCharacter::SetOutlineEnabled(bool bEnabled)
{
	if (GetMesh())
	{
		if (bEnabled)
		{
			ApplyTeamMaterial();
		}
		else
		{
			GetMesh()->SetOverlayMaterial(nullptr);
		}
	}
}

void ACaptureCharacter::UpdateOutlineColor(const FLinearColor& NewColor)
{
	if (GetMesh() && GetMesh()->GetOverlayMaterial())
	{
		if (UMaterialInstanceDynamic* DynamicMaterial = Cast<UMaterialInstanceDynamic>(GetMesh()->GetOverlayMaterial()))
		{
			DynamicMaterial->SetVectorParameterValue(FName("TeamColor"), NewColor);
		}
	}
}

void ACaptureCharacter::ApplyTeamMaterial()
{
	if (!GetPlayerState())
	{
		UE_LOG(LogTemp, Warning, TEXT("ApplyTeamMaterial: Invalid player state or character"));
		return;
	}

	TArray<USkeletalMeshComponent*> SkeletalMeshes;
	GetComponents<USkeletalMeshComponent>(SkeletalMeshes);

	UE_LOG(LogTemp, Warning, TEXT("Found %d skeletal meshes"), SkeletalMeshes.Num());

	UMaterialInterface* OutlineMaterial = LoadObject<UMaterialInterface>(
		nullptr, TEXT("/Game/Materials/M_TeamOutline.M_TeamOutline"));

	if (!OutlineMaterial)
	{
		UE_LOG(LogTemp, Error, TEXT("Outline material not found!"));
		return;
	}

	if (ACapturePlayerState* CPS = Cast<ACapturePlayerState>(GetPlayerState()))
	{
		FLinearColor Color = CPS->GetTeamColor();
		UE_LOG(LogTemp, Warning, TEXT("Applying team color: %s for team %d"),
			*Color.ToString(), (int32)CPS->GetTeam());

		for (USkeletalMeshComponent* SkeletalMesh : SkeletalMeshes)
		{
			if (SkeletalMesh && !SkeletalMesh->bHiddenInGame)
			{
				UE_LOG(LogTemp, Warning, TEXT("Applying to mesh: %s"), *SkeletalMesh->GetName());

				UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(OutlineMaterial, this);
				if (DynamicMaterial)
				{
					DynamicMaterial->SetVectorParameterValue(FName("TeamColor"), Color);
					DynamicMaterial->SetScalarParameterValue(FName("EmissiveIntensity"), 3.0f);
					DynamicMaterial->SetScalarParameterValue(FName("Outline Width"), 1.0f);

					SkeletalMesh->SetOverlayMaterial(DynamicMaterial);
					UE_LOG(LogTemp, Warning, TEXT("Material applied successfully to %s"),
						*SkeletalMesh->GetName());
				}
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerState is not ACapturePlayerState"));
	}
}

void ACaptureCharacter::DebugFindAllGranadeBlueprints()
{
	UE_LOG(LogTemp, Warning, TEXT("=== SEARCHING FOR GRANADE BLUEPRINTS ==="));

	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetData> AssetData;

	FARFilter Filter;
	Filter.ClassPaths.Add(UBlueprint::StaticClass()->GetClassPathName());
	Filter.bRecursivePaths = true;

	AssetRegistryModule.Get().GetAssets(Filter, AssetData);

	for (const FAssetData& Asset : AssetData)
	{
		FString AssetPath = Asset.GetObjectPathString();
		FString AssetName = Asset.AssetName.ToString();

		if (AssetName.Contains(TEXT("granade"), ESearchCase::IgnoreCase) ||
			AssetName.Contains(TEXT("damage"), ESearchCase::IgnoreCase) ||
			AssetName.Contains(TEXT("Grenade"), ESearchCase::IgnoreCase))
		{
			UE_LOG(LogTemp, Warning, TEXT("Found: %s -> %s"), *AssetName, *AssetPath);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("=== END SEARCH ==="));
}

void ACaptureCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (IsLocallyControlled())
	{
		FRotator ControlRot = GetControlRotation();
		ControlRot.Pitch = FMath::Clamp(ControlRot.Pitch, -89.0f, 89.0f);
		ControlRot.Roll = 0.0f;
		ServerSetControlRotation(ControlRot);
	}
	else
	{
		FRotator Current = GetActorRotation();
		FRotator Target(0.f, ReplicatedControlRotation.Yaw, 0.f);
		FRotator NewRotation = FMath::RInterpTo(Current, Target, DeltaTime, 10.f);
		SetActorRotation(NewRotation);
	}

}

void ACaptureCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ACaptureCharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ACaptureCharacter::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACaptureCharacter::StartJump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACaptureCharacter::StopJump);
		EnhancedInputComponent->BindAction(ThrowGrenadeAction, ETriggerEvent::Started, this, &ACaptureCharacter::ThrowGranade);
	}
}

void ACaptureCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ACaptureCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ACaptureCharacter::StartJump()
{
	Jump();
}

void ACaptureCharacter::StopJump()
{
	StopJumping();
}

void ACaptureCharacter::ThrowGranade()
{
	UE_LOG(LogTemp, Warning, TEXT("ThrowGrenade() called - HasAuthority: %d"), HasAuthority());
	Server_ThrowGranade();
}

void ACaptureCharacter::Server_ThrowGranade_Implementation()
{

	UE_LOG(LogTemp, Warning, TEXT("Server_ThrowGrenade_Implementation() called"));

	if (!AbilitySystemComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("AbilitySystemComponent is NULL!"));
		return;
	}


	UGranadeInventoryComponent* Inventory = FindComponentByClass<UGranadeInventoryComponent>();
	if (!Inventory)
	{
		UE_LOG(LogTemp, Error, TEXT("Inventory component NOT found!"));
		return;
	}

	if (Inventory->GetGranadeCount(EGranadeType::Damage) <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No grenades in inventory"));
		return;
	}

	bool bActivated = AbilitySystemComponent->TryActivateAbilityByClass(UDamageGranadeAbility::StaticClass());
	UE_LOG(LogTemp, Warning, TEXT("TryActivateAbilityByClass result: %d"), bActivated);

	if (bActivated)
	{
		for (int32 i = 0; i < Inventory->InventorySlots.Num(); i++)
		{
			if (Inventory->InventorySlots[i].GranadeType == EGranadeType::Damage)
			{
				Inventory->Server_UseGranade(i);
				break;
			}
		}
	}
}


void ACaptureCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ACaptureCharacter, bHasFlag);
	DOREPLIFETIME(ACaptureCharacter, ReplicatedControlRotation);

}

void ACaptureCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
		InitializeGAS();
	}
}

void ACaptureCharacter::OnRep_HasFlag()
{
}

void ACaptureCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}

	UE_LOG(LogTemp, Warning, TEXT("PossessedBy - Controller: %s"),
		*GetNameSafe(NewController));
}

void ACaptureCharacter::InitializeGAS()
{
	if (!AbilitySystemComponent) return;

	if (!AbilitySystemComponent->AbilityActorInfo.IsValid())
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}

	if (HasAuthority())
	{
		FGameplayAbilitySpec GranadeAbilitySpec(UDamageGranadeAbility::StaticClass(), 1);
		AbilitySystemComponent->GiveAbility(GranadeAbilitySpec);
		UE_LOG(LogTemp, Warning, TEXT("DamageGranadeAbility granted to character"));
	}

	UE_LOG(LogTemp, Warning, TEXT("InitializeGAS - HasAuthority: %d"), HasAuthority());
}

void ACaptureCharacter::ApplyTeamMaterialWithRetry()
{
	if (ACapturePlayerState* CPS = GetPlayerState<ACapturePlayerState>())
	{
		ApplyTeamMaterial();
	}

	else 
	{
		FTimerHandle RetryTimer;
		GetWorld()->GetTimerManager().SetTimer(RetryTimer, [this]()
			{
				ApplyTeamMaterialWithRetry();
			}, 0.3f, false);

		UE_LOG(LogTemp, Warning, TEXT("PlayerState not ready, retrying..."));
	}
}



